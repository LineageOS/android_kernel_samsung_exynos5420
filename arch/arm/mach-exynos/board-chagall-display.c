/*
 * Copyright (c) 2012 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#include <linux/clk.h>
#include <linux/delay.h>
#include <linux/fb.h>
#include <linux/gpio.h>
#include <linux/i2c.h>
#include <linux/i2c-gpio.h>
#include <linux/lcd.h>
#include <plat/cpu.h>
#include <plat/clock.h>
#include <plat/devs.h>
#include <plat/dsim.h>
#include <plat/fb.h>
#include <plat/fb-core.h>
#include <plat/gpio-cfg.h>
#include <plat/regs-fb-v4.h>
#include <plat/mipi_dsi.h>
#include <mach/map.h>

#ifdef CONFIG_FB_S5P_MDNIE_LITE
#include <linux/mdnie.h>
#endif


#define GPIO_LCDP_SDA_18V	EXYNOS5420_GPB3(2)
#define GPIO_LCDP_SCL_18V	EXYNOS5420_GPB3(3)

#define GPIO_TOUCH_LDO_EN	EXYNOS5420_GPG1(2)
#define GPIO_LCD_EN		EXYNOS5420_GPG1(2)

#define GPIO_TCON_INTR		EXYNOS5420_GPX3(5)
#define GPIO_TCON_RDY		EXYNOS5420_GPX3(6)

#define LCD_POWER_ON_TIME_US   (500 * USEC_PER_MSEC)

unsigned int lcdtype;
EXPORT_SYMBOL(lcdtype);
static int __init lcdtype_setup(char *str)
{
	get_option(&str, &lcdtype);
	return 1;
}
__setup("lcdtype=", lcdtype_setup);

phys_addr_t bootloaderfb_start;
phys_addr_t bootloaderfb_size = 2560 * 1600 * 4;

static int __init bootloaderfb_start_setup(char *str)
{
	get_option(&str, &bootloaderfb_start);
	//bootloaderfb_start = 0; /* disable for copying bootloaderfb */
	return 1;
}
__setup("s3cfb.bootloaderfb=", bootloaderfb_start_setup);


static void chagall_fimd_gpio_setup_24bpp(void)
{
	unsigned int reg = 0;

	/*
	 * Set DISP1BLK_CFG register for Display path selection
	 *
	 * FIMD of DISP1_BLK Bypass selection : DISP1BLK_CFG[15]
	 * ---------------------
	 *  0 | MIE/MDNIE
	 *  1 | FIMD : selected
	 */
	reg = __raw_readl(S3C_VA_SYS + 0x0214);
	reg &= ~(1 << 15);	/* To save other reset values */
	reg |= (1 << 15);
	__raw_writel(reg, S3C_VA_SYS + 0x0214);

	/*
	 * Set DISP1BLK_CFG register for Display path selection
	 *
	 * MIC of DISP1_BLK Bypass selection: DISP1BLK_CFG[11]
	 * --------------------
	 *  0 | MIC
	 *  1 | Bypass : selected
	 */
	reg = __raw_readl(S3C_VA_SYS + 0x0214);
	reg &= ~(1 << 11);	/* Select MIC */
	__raw_writel(reg, S3C_VA_SYS + 0x0214);
}

static int mipi_lcd_power_control(struct mipi_dsim_device *dsim,
				unsigned int power)
{
	pr_debug(" Chagall LCD %s  : power = %d\n", __func__, power);

	if (power) {
		int timeout = 5;

		/* Power */
		gpio_set_value(GPIO_LCD_EN, 1);
		msleep_interruptible(300);

		do {
			if (gpio_get_value(GPIO_TCON_RDY))
				break;
			msleep(100);
		} while (timeout--);

		if (timeout < 0)
			pr_err(" %s timeout...\n", __func__);
	} else {
		gpio_set_value(GPIO_LCD_EN, 0);
		msleep(150);
	}
	return 0;
}

#define SMDK5420_HBP 4
#define SMDK5420_HFP 12
#define SMDK5420_HFP_DSIM 12
#define SMDK5420_HSP 4
#define SMDK5420_VBP 3
#define SMDK5420_VFP 3
#define SMDK5420_VSW 1
#define SMDK5420_XRES 2560
#define SMDK5420_YRES 1600
#define SMDK5420_VIRTUAL_X 2560
#define SMDK5420_VIRTUAL_Y (1600*2)
#define SMDK5420_WIDTH 227
#define SMDK5420_HEIGHT 142
#define SMDK5420_MAX_BPP 32
#define SMDK5420_DEFAULT_BPP 24

static struct s3c_fb_pd_win chagall_fb_win0 = {
	.win_mode = {
		.left_margin	= SMDK5420_HBP,
		.right_margin	= SMDK5420_HFP,
		.upper_margin	= SMDK5420_VBP,
		.lower_margin	= SMDK5420_VFP,
		.hsync_len	= SMDK5420_HSP,
		.vsync_len	= SMDK5420_VSW,
		.xres		= SMDK5420_XRES,
		.yres		= SMDK5420_YRES,
	},
	.virtual_x		= SMDK5420_VIRTUAL_X,
	.virtual_y		= SMDK5420_VIRTUAL_Y,
	.max_bpp		= SMDK5420_MAX_BPP,
	.default_bpp		= SMDK5420_DEFAULT_BPP,
	.width			= SMDK5420_WIDTH,
	.height			= SMDK5420_HEIGHT,
};

static struct s3c_fb_platdata chagall_lcd1_pdata __initdata = {
	.win[0]		= &chagall_fb_win0,
	.win[1]		= &chagall_fb_win0,
	.win[2]		= &chagall_fb_win0,
	.win[3]		= &chagall_fb_win0,
	.win[4]		= &chagall_fb_win0,
	.default_win	= 0,
	.vidcon0	= VIDCON0_VIDOUT_RGB | VIDCON0_PNRMODE_RGB,
	.vidcon1	= VIDCON1_INV_VCLK,
	.setup_gpio	= chagall_fimd_gpio_setup_24bpp,
	.ip_version	= EXYNOS5_813,
	.dsim_on	= s5p_mipi_dsi_enable_by_fimd,
	.dsim_off	= s5p_mipi_dsi_disable_by_fimd,
	.dsim_clk_on	= s5p_mipi_dsi_clk_enable_by_fimd,
	.dsim_clk_off	= s5p_mipi_dsi_clk_disable_by_fimd,
	.dsim1_device   = &s5p_device_mipi_dsim1.dev,
};

#define DSIM_L_MARGIN SMDK5420_HBP
#define DSIM_R_MARGIN SMDK5420_HFP_DSIM
#define DSIM_UP_MARGIN SMDK5420_VBP
#define DSIM_LOW_MARGIN SMDK5420_VFP
#define DSIM_HSYNC_LEN SMDK5420_HSP
#define DSIM_VSYNC_LEN SMDK5420_VSW
#define DSIM_WIDTH SMDK5420_XRES
#define DSIM_HEIGHT SMDK5420_YRES

static struct mipi_dsim_lcd_config dsim_lcd_info = {
	.rgb_timing.left_margin		= DSIM_L_MARGIN,
	.rgb_timing.right_margin	= DSIM_R_MARGIN,
	.rgb_timing.upper_margin	= DSIM_UP_MARGIN,
	.rgb_timing.lower_margin	= DSIM_LOW_MARGIN,
	.rgb_timing.hsync_len		= DSIM_HSYNC_LEN,
	.rgb_timing.vsync_len		= DSIM_VSYNC_LEN,
	.lcd_size.width			= DSIM_WIDTH,
	.lcd_size.height		= DSIM_HEIGHT,
	.rgb_timing.stable_vfp		= 1,
	.rgb_timing.cmd_allow		= 2,
	.cpu_timing.cs_setup		= 1,
	.cpu_timing.wr_setup		= 0,
	.cpu_timing.wr_act		= 1,
	.cpu_timing.wr_hold		= 0,
};

static struct mipi_dsim_config dsim_info = {
	.e_interface	= DSIM_VIDEO,
	.e_pixel_format = DSIM_24BPP_888,

	.eot_disable	= true,

	.hse = false,
	.hfp = true,
	.hbp = true,
	.hsa = false,

	.e_no_data_lane = DSIM_DATA_LANE_4,
	.e_byte_clk	= DSIM_PLL_OUT_DIV8,
	.e_burst_mode	= DSIM_BURST,

	/*896Mbps*/
	.p = 3,
	.m = 56,
	.s = 0,

	/* D-PHY PLL stable time spec :min = 200usec ~ max 400usec */
	.pll_stable_time = 22200,

	.esc_clk = 7 * MHZ, /* escape clk : 8MHz */

	/* stop state holding counter after bta change count 0 ~ 0xfff */
	.stop_holding_cnt = 0x10,
	.bta_timeout = 0xff,		/* bta timeout 0 ~ 0xff */
	.rx_timeout = 0xffff,		/* lp rx timeout 0 ~ 0xffff */

	.dsim_ddi_pd = &s6tnmr7_mipi_lcd_driver,
};

static struct s5p_platform_mipi_dsim dsim_platform_data = {
	.clk_name		= "dsim1",
	.dsim_config		= &dsim_info,
	.dsim_lcd_config	= &dsim_lcd_info,

	.mipi_power		= mipi_lcd_power_control,
	.part_reset		= NULL,
	.init_d_phy		= s5p_dsim_init_d_phy,
	.get_fb_frame_done	= NULL,
	.trigger		= NULL,

	/*
	 * The stable time of needing to write data on SFR
	 * when the mipi mode becomes LP mode.
	 */
	.delay_for_stabilization = 600,
};

#ifdef CONFIG_FB_S5P_MDNIE_LITE
static struct platform_mdnie_data mdnie_data = {
	.display_type	= -1,
};

struct platform_device mdnie_device = {
	.name	= "mdnie",
	.id	= -1,
	.dev	= {
		.parent		= &s5p_device_fimd1.dev,
		.platform_data = &mdnie_data,
	},
};

static void __init mdnie_device_register(void)
{
	int ret;

	ret = platform_device_register(&mdnie_device);
	if (ret)
		printk(KERN_ERR "failed to register mdnie device: %d\n",
				ret);
}
#endif

/* Keep on clock of FIMD during boot time  */
static int keep_lcd_clk(struct device *dev)
{
	struct clk *lcd_clk;

	lcd_clk = clk_get(dev, "lcd");
	if (IS_ERR(lcd_clk)) {
		pr_err("failed to get fimd clock for keep screen on\n");
	} else {
		clk_enable(lcd_clk);
		clk_put(lcd_clk);
	}

	lcd_clk = clk_get(NULL, "axi_disp1");
	if (IS_ERR(lcd_clk)) {
		pr_err("failed to get axi_disp1 clock for keep screen on\n");
	} else {
		clk_enable(lcd_clk);
		clk_put(lcd_clk);
	}

	lcd_clk = clk_get(NULL, "aclk_200_disp1");
	if (IS_ERR(lcd_clk)) {
		pr_err("failed to get aclk_200_disp1 clock for keep screen on\n");
	} else {
		clk_enable(lcd_clk);
		clk_put(lcd_clk);
	}

	lcd_clk = clk_get(NULL, "mout_spll");
	if (IS_ERR(lcd_clk)) {
		pr_err("failed to get mout_spll clock for keep screen on\n");
	} else {
		clk_enable(lcd_clk);
		clk_put(lcd_clk);
	}

	lcd_clk = clk_get(NULL, "sclk_mipi1");
	if (IS_ERR(lcd_clk)) {
		pr_err("failed to get mout_spll clock for keep screen on\n");
	} else {
		clk_enable(lcd_clk);
		clk_put(lcd_clk);
	}

	return 0;
}

static int __init restore_lcd_clk_late_init(void)
{
	struct clk *lcd_clk;
	struct device *fimd_dev = &s5p_device_fimd1.dev;

	pr_debug("%s\n", __func__);

	lcd_clk = clk_get(fimd_dev, "lcd");
	if (IS_ERR(lcd_clk)) {
		pr_err("failed to get fimd clock for keep screen on\n");
	} else {
		clk_disable(lcd_clk);
		clk_put(lcd_clk);
	}

	lcd_clk = clk_get(NULL, "axi_disp1");
	if (IS_ERR(lcd_clk)) {
		pr_err("failed to get axi_disp1 clock for keep screen on\n");
	} else {
		clk_disable(lcd_clk);
		clk_put(lcd_clk);
	}

	lcd_clk = clk_get(NULL, "aclk_200_disp1");
	if (IS_ERR(lcd_clk)) {
		pr_err("failed to get aclk_200_disp1 clock for keep screen on\n");
	} else {
		clk_disable(lcd_clk);
		clk_put(lcd_clk);
	}

	lcd_clk = clk_get(NULL, "mout_spll");
	if (IS_ERR(lcd_clk)) {
		pr_err("failed to get mout_spll clock for keep screen on\n");
	} else {
		clk_disable(lcd_clk);
		clk_put(lcd_clk);
	}

	lcd_clk = clk_get(NULL, "sclk_mipi1");
	if (IS_ERR(lcd_clk)) {
		pr_err("failed to get mout_spll clock for keep screen on\n");
	} else {
		clk_disable(lcd_clk);
		clk_put(lcd_clk);
	}

	return 0;
}

late_initcall_sync(restore_lcd_clk_late_init);

static struct platform_device *chagall_display_devices[] __initdata = {
	&s5p_device_mipi_dsim1,
	&s5p_device_mic,
	&s5p_device_fimd1,
};

void __init exynos5_universal5420_display_init(void)
{
	struct resource *res;
	struct clk *mout_mdnie1;
	struct clk *mout_mpll;

	gpio_request(GPIO_LCD_EN, "LCD_EN");
	gpio_request(GPIO_TCON_RDY, "TCON_RDY");

	s5p_dsim1_set_platdata(&dsim_platform_data);
	s5p_fimd1_set_platdata(&chagall_lcd1_pdata);
	s5p_mic_set_platdata(&chagall_fb_win0);

	platform_add_devices(chagall_display_devices,
			ARRAY_SIZE(chagall_display_devices));

	mout_mdnie1 = clk_get(NULL, "mout_mdnie1");
	if ((IS_ERR(mout_mdnie1)))
		pr_err("Can't get clock[%s]\n", "mout_mdnie1");

	mout_mpll = clk_get(NULL, "mout_mpll");
	if ((IS_ERR(mout_mpll)))
		pr_err("Can't get clock[%s]\n", "mout_mpll");

	if (mout_mdnie1 && mout_mpll)
		clk_set_parent(mout_mdnie1, mout_mpll);

	if (mout_mdnie1)
		clk_put(mout_mdnie1);
	if (mout_mpll)
		clk_put(mout_mpll);

	exynos5_fimd1_setup_clock(&s5p_device_fimd1.dev,
			"sclk_fimd", "mout_mdnie1", 267 * MHZ);

#ifdef CONFIG_FB_S5P_MDNIE_LITE
	mdnie_device_register();
#endif

	keep_lcd_clk(&s5p_device_fimd1.dev);

	res = platform_get_resource(&s5p_device_fimd1, IORESOURCE_MEM, 1);
	if (res) {
		res->start = bootloaderfb_start;
		res->end = res->start + bootloaderfb_size - 1;
		pr_info("bootloader fb located at %8X-%8X\n", res->start, res->end);
	} else {
		pr_err("failed to find bootloader fb resource\n");
	}
}

