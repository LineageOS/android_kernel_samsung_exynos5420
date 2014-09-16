/*
 * Copyright (c) 2013 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#include <linux/init.h>
#include <linux/export.h>
#include <linux/platform_device.h>
#include <linux/gpio_keys.h>
#include <linux/i2c.h>
#include <linux/i2c-gpio.h>
#include <linux/gpio.h>
#include <linux/input.h>
#include <linux/regulator/consumer.h>
#ifdef CONFIG_TOUCHSCREEN_SYNAPTICS_DSX_I2C
#include <linux/i2c/synaptics_rmi.h>
#endif
#ifdef CONFIG_KEYBOARD_CYPRESS_TOUCH
#include <linux/i2c/touchkey_i2c.h>
#endif
#ifdef CONFIG_KEYBOARD_TC300K
#include <linux/i2c/tc300k.h>
#endif
#ifdef CONFIG_INPUT_BOOSTER
#include <linux/input/input_booster.h>
#endif
#include <plat/iic.h>
#include <mach/hs-iic.h>
#include <plat/devs.h>
#include <plat/gpio-cfg.h>
#include <mach/gpio.h>
#include <mach/sec_debug.h>

#include "board-universal5420.h"

extern unsigned int system_rev;

#if !defined(CONFIG_SAMSUNG_PRODUCT_SHIP)
#define TSP_DEBUG_LOG
#endif

/*	Synaptics Thin Driver	*/
#ifdef CONFIG_TOUCHSCREEN_SYNAPTICS_DSX_I2C
#define PROJECT_CHAGALL_NAME	"SM-T800"
#define FW_IMAGE_NAME "tsp_synaptics/synaptics_chagall.fw"

#define DSX_I2C_ADDR 0x20
#define DSX_ATTN_GPIO EXYNOS5420_GPX1(6)

#define NUM_OF_RX	57
#define NUM_OF_TX	36

static int synaptics_power(bool on)
{
	struct regulator *regulator_vdd;
	struct regulator *regulator_avdd;
	static bool enabled;

	if (enabled == on)
		return 0;

	regulator_vdd = regulator_get(NULL, "tsp_1.8v");
	if (IS_ERR(regulator_vdd)) {
		printk(KERN_ERR "[TSP]ts_power_on : tsp_vdd regulator_get failed\n");
		return PTR_ERR(regulator_vdd);
	}

	regulator_avdd = regulator_get(NULL, "tsp_3.3v");
	if (IS_ERR(regulator_avdd)) {
		printk(KERN_ERR "[TSP]ts_power_on : tsp_vdd regulator_get failed\n");
		return PTR_ERR(regulator_avdd);
	}

	if (on) {
		regulator_enable(regulator_vdd);
		regulator_enable(regulator_avdd);

		s3c_gpio_cfgpin(DSX_ATTN_GPIO, S3C_GPIO_SFN(0xf));
		s3c_gpio_setpull(DSX_ATTN_GPIO, S3C_GPIO_PULL_NONE);
	} else {
		/*
		 * TODO: If there is a case the regulator must be disabled
		 * (e,g firmware update?), consider regulator_force_disable.
		 */
		if (regulator_is_enabled(regulator_vdd))
			regulator_disable(regulator_vdd);
		if (regulator_is_enabled(regulator_avdd))
			regulator_disable(regulator_avdd);

		s3c_gpio_cfgpin(DSX_ATTN_GPIO, S3C_GPIO_INPUT);
		s3c_gpio_setpull(DSX_ATTN_GPIO, S3C_GPIO_PULL_NONE);
	}

	regulator_put(regulator_vdd);
	regulator_put(regulator_avdd);

	enabled = on;

	printk(KERN_ERR "[TSP] %s %s\n", __func__, on ? "on" : "off");

	return 0;
}

static int synaptics_gpio_setup(unsigned gpio, bool configure)
{
	int retval = 0;

	if (configure) {
		gpio_request(gpio, "TSP_INT");
		s3c_gpio_cfgpin(gpio, S3C_GPIO_SFN(0xf));
		s3c_gpio_setpull(gpio, S3C_GPIO_PULL_UP);
		s5p_register_gpio_interrupt(gpio);
	} else {
		pr_warn("%s: No way to deconfigure gpio %d.",
		       __func__, gpio);
	}

	return retval;
}

#ifdef NO_0D_WHILE_2D
static unsigned char tm1940_cap_button_codes_gff[] = {
	KEY_DUMMY_MENU,
	KEY_MENU,
	KEY_DUMMY_HOME1,
	KEY_DUMMY_HOME2,
	KEY_BACK,
	KEY_DUMMY_BACK,
};

static unsigned char tm1940_cap_button_codes_g2[] = {
	KEY_DUMMY_MENU,
	KEY_MENU,
	KEY_BACK,
	KEY_DUMMY_BACK,
};

static struct synaptics_rmi_f1a_button_map tm1940_cap_button_map_gff = {
	.nbuttons = ARRAY_SIZE(tm1940_cap_button_codes_gff),
	.map = tm1940_cap_button_codes_gff,
};

static struct synaptics_rmi_f1a_button_map tm1940_cap_button_map_g2 = {
	.nbuttons = ARRAY_SIZE(tm1940_cap_button_codes_g2),
	.map = tm1940_cap_button_codes_g2,
};

static int ts_led_power_on(bool on)
{
	struct regulator *regulator;

	if (on) {
		regulator = regulator_get(NULL, "key_led_3.3v");
		if (IS_ERR(regulator)) {
			printk(KERN_ERR "[TSP_KEY] ts_led_power_on : TK_LED regulator_get failed\n");
			return -EIO;
		}

		regulator_enable(regulator);
		regulator_put(regulator);
	} else {
		regulator = regulator_get(NULL, "key_led_3.3v");
		if (IS_ERR(regulator)) {
			printk(KERN_ERR "[TSP_KEY] ts_led_power_on : TK_LED regulator_get failed\n");
			return -EIO;
		}

		if (regulator_is_enabled(regulator))
			regulator_force_disable(regulator);
		regulator_put(regulator);
	}

	printk(KERN_ERR "[TSP_KEY] %s %s\n", __func__, on ? "on" : "off");

	return 0;
}
#endif

static struct synaptics_rmi4_platform_data dsx_platformdata = {
	.x_flip = true,
	.y_flip = true,
	.sensor_max_x = 2559,
	.sensor_max_y = 1599,
	.max_touch_width = 28,
	.irq_type = IRQF_TRIGGER_LOW | IRQF_ONESHOT,/*IRQF_TRIGGER_FALLING,*/
	.power = synaptics_power,
	.gpio = DSX_ATTN_GPIO,
	.gpio_config = synaptics_gpio_setup,
#ifdef NO_0D_WHILE_2D
	.led_power_on = ts_led_power_on,
	.f1a_button_map = &tm1940_cap_button_map_g2,
#endif
	.firmware_name = FW_IMAGE_NAME,
	.fac_firmware_name = FW_IMAGE_NAME,
	.project_name = PROJECT_CHAGALL_NAME,
	.get_ddi_type = NULL,
	.num_of_rx = NUM_OF_RX,
	.num_of_tx = NUM_OF_TX,
};

static struct i2c_board_info synaptics_dsx_i2c_devs0[] = {
	{
		I2C_BOARD_INFO("synaptics_dsx_i2c", DSX_I2C_ADDR),
		.platform_data = &dsx_platformdata,
	},
};

static void synaptics_dsx_gpio_init(void)
{
	/* touch interrupt */
	gpio_request(DSX_ATTN_GPIO, "TSP_INT");
	s3c_gpio_cfgpin(DSX_ATTN_GPIO, S3C_GPIO_INPUT);
	s3c_gpio_setpull(DSX_ATTN_GPIO, S3C_GPIO_PULL_NONE);
	s5p_register_gpio_interrupt(DSX_ATTN_GPIO);

	s3c_gpio_setpull(GPIO_TSP_SCL_18V, S3C_GPIO_PULL_NONE);
	s3c_gpio_setpull(GPIO_TSP_SDA_18V, S3C_GPIO_PULL_NONE);

	s5p_gpio_set_pd_cfg(DSX_ATTN_GPIO, S5P_GPIO_PD_PREV_STATE);
	s5p_gpio_set_pd_pull(DSX_ATTN_GPIO, S5P_GPIO_PD_UPDOWN_DISABLE);
}

void __init synaptics_dsx_tsp_init(void)
{
	synaptics_dsx_gpio_init();

	synaptics_dsx_i2c_devs0[0].irq = gpio_to_irq(DSX_ATTN_GPIO);
	s3c_i2c0_set_platdata(NULL);
	i2c_register_board_info(0, synaptics_dsx_i2c_devs0,
		 ARRAY_SIZE(synaptics_dsx_i2c_devs0));

	printk(KERN_ERR "%s touch : %d\n",
		 __func__, synaptics_dsx_i2c_devs0[0].irq);
}
#endif

#ifdef CONFIG_KEYBOARD_CYPRESS_TOUCH
#define GPIO_VTOUCH_LDO_EN EXYNOS5420_GPG1(1)
#define GPIO_TOUCH_INT EXYNOS5420_GPX0(0)
#define GPIO_TOUCH_SDA EXYNOS5420_GPB3(4)
#define GPIO_TOUCH_SCL EXYNOS5420_GPB3(5)
static struct i2c_board_info touchkey_i2c_info[];

static void touchkey_init_hw(void)
{
#ifndef LED_LDO_WITH_REGULATOR
	gpio_request(GPIO_3_TOUCH_EN, "gpio_3_touch_en");
#endif
#ifndef LDO_WITH_REGULATOR
	gpio_request(GPIO_VTOUCH_LDO_EN, "gpio_vtouch_ldo_en");
#endif
	gpio_request(GPIO_TOUCH_INT, "TOUCH_INT");
	s3c_gpio_setpull(GPIO_TOUCH_INT, S3C_GPIO_PULL_UP);
	s5p_register_gpio_interrupt(GPIO_TOUCH_INT);
	gpio_direction_input(GPIO_TOUCH_INT);

	touchkey_i2c_info[0].irq = gpio_to_irq(GPIO_TOUCH_INT);
	irq_set_irq_type(gpio_to_irq(GPIO_TOUCH_INT), IRQF_TRIGGER_FALLING);
	s3c_gpio_cfgpin(GPIO_TOUCH_INT, S3C_GPIO_SFN(0xf));

	printk(KERN_ERR "%s touchkey : %d\n",
		__func__, touchkey_i2c_info[0].irq);

	s3c_gpio_setpull(GPIO_TOUCH_SCL, S3C_GPIO_PULL_DOWN);
	s3c_gpio_setpull(GPIO_TOUCH_SDA, S3C_GPIO_PULL_DOWN);
}

static int touchkey_suspend(void)
{
#ifdef LDO_WITH_REGULATOR
	struct regulator *regulator;

	regulator = regulator_get(NULL, TK_REGULATOR_NAME);
	if (IS_ERR(regulator)) {
		printk(KERN_ERR
		"[Touchkey] touchkey_suspend : TK regulator_get failed\n");
		return -EIO;
	}

	if (regulator_is_enabled(regulator))
		regulator_disable(regulator);

	regulator_put(regulator);
#else
	gpio_direction_output(GPIO_VTOUCH_LDO_EN, 0);
#endif
	s3c_gpio_setpull(GPIO_TOUCH_SCL, S3C_GPIO_PULL_DOWN);
	s3c_gpio_setpull(GPIO_TOUCH_SDA, S3C_GPIO_PULL_DOWN);

	return 1;
}

static int touchkey_resume(void)
{
#ifdef LDO_WITH_REGULATOR
	struct regulator *regulator;

	regulator = regulator_get(NULL, TK_REGULATOR_NAME);
	if (IS_ERR(regulator)) {
		printk(KERN_ERR
		"[Touchkey] touchkey_resume : TK regulator_get failed\n");
		return -EIO;
	}

	regulator_enable(regulator);
	regulator_put(regulator);
#else
	gpio_direction_output(GPIO_VTOUCH_LDO_EN, 1);
#endif
	s3c_gpio_setpull(GPIO_TOUCH_SCL, S3C_GPIO_PULL_NONE);
	s3c_gpio_setpull(GPIO_TOUCH_SDA, S3C_GPIO_PULL_NONE);

	return 1;
}

static int touchkey_power_on(bool on)
{
	int ret;

	if (on) {
		gpio_direction_output(GPIO_TOUCH_INT, 1);
		irq_set_irq_type(gpio_to_irq(GPIO_TOUCH_INT),
			IRQF_TRIGGER_FALLING);
		s3c_gpio_cfgpin(GPIO_TOUCH_INT, S3C_GPIO_SFN(0xf));
		s3c_gpio_setpull(GPIO_TOUCH_INT, S3C_GPIO_PULL_UP);

		ret = touchkey_resume();
	} else {
		gpio_direction_input(GPIO_TOUCH_INT);
		s3c_gpio_setpull(GPIO_TOUCH_INT, S3C_GPIO_PULL_NONE);
		ret = touchkey_suspend();
	}

	return ret;
}

static int touchkey_led_power_on(bool on)
{
#ifdef LED_LDO_WITH_REGULATOR
	struct regulator *regulator;

	regulator = regulator_get(NULL, TK_LED_REGULATOR_NAME);
	if (IS_ERR(regulator)) {
		printk(KERN_ERR
		"[Touchkey] touchkey_led_power_on : TK_LED regulator_get failed\n");
		return -EIO;
	}

	if (on) {
		regulator_enable(regulator);
	} else {
		if (regulator_is_enabled(regulator))
			regulator_disable(regulator);
	}
	regulator_put(regulator);
#else
	if (on)
		gpio_direction_output(GPIO_3_TOUCH_EN, 1);
	else
		gpio_direction_output(GPIO_3_TOUCH_EN, 0);
#endif
	return 1;
}

static struct touchkey_platform_data touchkey_pdata = {
	.gpio_sda = GPIO_TOUCH_SDA,
	.gpio_scl = GPIO_TOUCH_SCL,
	.gpio_int = GPIO_TOUCH_INT,
	.init_platform_hw = touchkey_init_hw,
	.suspend = touchkey_suspend,
	.resume = touchkey_resume,
	.power_on = touchkey_power_on,
	.led_power_on = touchkey_led_power_on,
};

static struct i2c_gpio_platform_data gpio_i2c_data8 = {
	.sda_pin = GPIO_TOUCH_SDA,
	.scl_pin = GPIO_TOUCH_SCL,
	.udelay = 1,
};

static struct i2c_board_info touchkey_i2c_info[] = {
	{
		I2C_BOARD_INFO("sec_touchkey", 0x20),
		.platform_data = &touchkey_pdata,
	},
};

struct platform_device s3c_device_i2c8 = {
	.name = "i2c-gpio",
	.id = 8,
	.dev.platform_data = &gpio_i2c_data8,
};
#endif /*CONFIG_KEYBOARD_CYPRESS_TOUCH*/

#ifdef CONFIG_KEYBOARD_TC300K
#define GPIO_TOUCHKEY_INT EXYNOS5420_GPX0(0)
#define GPIO_TOUCHKEY_SDA EXYNOS5420_GPD1(4)
#define GPIO_TOUCHKEY_SCL EXYNOS5420_GPD1(5)

static bool tc300k_power_enabled;
static bool tc300k_keyled_enabled;

int tc300k_keycode[] = { 0,
	KEY_BACK, KEY_RECENT, KEY_DUMMY_BACK, KEY_DUMMY_MENU
};

int touchkey_power(bool on)
{
	struct regulator *regulator;

	if (tc300k_power_enabled == on)
		return 0;

	printk(KERN_DEBUG "[TK] %s %s\n",
		__func__, on ? "on" : "off");

	regulator = regulator_get(NULL, "vtouch_1.8v");
	if (IS_ERR(regulator))
		return PTR_ERR(regulator);
	if (on) {
		regulator_enable(regulator);
		s3c_gpio_setpull(GPIO_TOUCHKEY_SCL, S3C_GPIO_PULL_NONE);
		s3c_gpio_setpull(GPIO_TOUCHKEY_SDA, S3C_GPIO_PULL_NONE);
		s3c_gpio_cfgpin(GPIO_TOUCHKEY_INT, S3C_GPIO_SFN(0xf));
		s3c_gpio_setpull(GPIO_TOUCHKEY_INT, S3C_GPIO_PULL_NONE);
	} else {
		s3c_gpio_cfgpin(GPIO_TOUCHKEY_INT, S3C_GPIO_INPUT);
		s3c_gpio_setpull(GPIO_TOUCHKEY_INT, S3C_GPIO_PULL_DOWN);
		s3c_gpio_setpull(GPIO_TOUCHKEY_SCL, S3C_GPIO_PULL_DOWN);
		s3c_gpio_setpull(GPIO_TOUCHKEY_SDA, S3C_GPIO_PULL_DOWN);
		if (regulator_is_enabled(regulator))
			regulator_disable(regulator);
		else
			regulator_force_disable(regulator);
	}
	regulator_put(regulator);

	tc300k_power_enabled = on;

	return 0;
}

int touchkey_power_isp(bool on)
{
	struct regulator *regulator;

	if (tc300k_power_enabled == on)
		return 0;

	printk(KERN_DEBUG "[TK] %s %s\n",
		__func__, on ? "on" : "off");

	regulator = regulator_get(NULL, "vtouch_1.8v");
	if (IS_ERR(regulator))
		return PTR_ERR(regulator);
	if (on) {
		regulator_enable(regulator);
		s3c_gpio_setpull(GPIO_TOUCHKEY_SCL, S3C_GPIO_PULL_DOWN);
		s3c_gpio_setpull(GPIO_TOUCHKEY_SDA, S3C_GPIO_PULL_DOWN);
		s3c_gpio_setpull(GPIO_TOUCHKEY_INT, S3C_GPIO_PULL_DOWN);
	} else {
		s3c_gpio_cfgpin(GPIO_TOUCHKEY_INT, S3C_GPIO_INPUT);
		s3c_gpio_setpull(GPIO_TOUCHKEY_INT, S3C_GPIO_PULL_DOWN);
		s3c_gpio_setpull(GPIO_TOUCHKEY_SCL, S3C_GPIO_PULL_DOWN);
		s3c_gpio_setpull(GPIO_TOUCHKEY_SDA, S3C_GPIO_PULL_DOWN);
		if (regulator_is_enabled(regulator))
			regulator_disable(regulator);
		else
			regulator_force_disable(regulator);
	}
	regulator_put(regulator);

	tc300k_power_enabled = on;

	return 0;
}

int key_led_control(bool on)
{
	struct regulator *regulator;

	if (tc300k_keyled_enabled == on)
		return 0;

	printk(KERN_DEBUG "[TK] %s %s\n",
		__func__, on ? "on" : "off");

	regulator = regulator_get(NULL, "key_led_3.3v");
	if (IS_ERR(regulator))
		return PTR_ERR(regulator);

	if (on) {
		regulator_enable(regulator);
	} else {
		if (regulator_is_enabled(regulator))
			regulator_disable(regulator);
		else
			regulator_force_disable(regulator);
	}
	regulator_put(regulator);

	tc300k_keyled_enabled = on;

	return 0;
}

static struct tc300k_platform_data tc300k_touchkey_pdata = {
	.gpio_int = GPIO_TOUCHKEY_INT,
	.gpio_sda = GPIO_TOUCHKEY_SDA,
	.gpio_scl = GPIO_TOUCHKEY_SCL,
	.key_num = ARRAY_SIZE(tc300k_keycode),
	.keycode = tc300k_keycode,
	.power = touchkey_power,
	.power_isp = touchkey_power_isp,
	.keyled = key_led_control,
	.fw_name = "coreriver/tc300k_chagall.fw",
};

static struct i2c_gpio_platform_data gpio_i2c_data9 = {
	.sda_pin = GPIO_TOUCHKEY_SDA,
	.scl_pin = GPIO_TOUCHKEY_SCL,
	.udelay = 1,
};

static struct i2c_board_info touchkey_i2c_data[] = {
	{
		I2C_BOARD_INFO(TC300K_NAME, 0x60),
		.platform_data = &tc300k_touchkey_pdata,
	},
};

struct platform_device s3c_device_i2c9 = {
	.name = "i2c-gpio",
	.id = 9,
	.dev.platform_data = &gpio_i2c_data9,
};

extern unsigned int lcdtype;

static void tc300k_touchkey_init(void)
{
	gpio_request(GPIO_TOUCHKEY_INT, "TOUCH_INT");
	s3c_gpio_setpull(GPIO_TOUCHKEY_INT, S3C_GPIO_PULL_UP);
	s5p_register_gpio_interrupt(GPIO_TOUCHKEY_INT);
	gpio_direction_input(GPIO_TOUCHKEY_INT);

	touchkey_i2c_data[0].irq = gpio_to_irq(GPIO_TOUCHKEY_INT);
	irq_set_irq_type(gpio_to_irq(GPIO_TOUCHKEY_INT), IRQF_TRIGGER_FALLING);
	s3c_gpio_cfgpin(GPIO_TOUCHKEY_INT, S3C_GPIO_SFN(0xf));

	printk(KERN_ERR "%s touchkey : %d\n",
		__func__, touchkey_i2c_data[0].irq);

	s3c_gpio_setpull(GPIO_TOUCHKEY_SCL, S3C_GPIO_PULL_DOWN);
	s3c_gpio_setpull(GPIO_TOUCHKEY_SDA, S3C_GPIO_PULL_DOWN);

	if (lcdtype != 0)
		tc300k_touchkey_pdata.panel_connect = true;
	else
		tc300k_touchkey_pdata.panel_connect = false;

}
#endif /* CONFIG_KEYBOARD_TC300K */

#if defined(CONFIG_KEYBOARD_CYPRESS_TOUCH) || defined(CONFIG_KEYBOARD_TC300K)
static void touchkey_init(void)
{
	printk(KERN_INFO"%s, system_rev : %d\n", __func__, system_rev);

	if (system_rev == 9) {
#if defined(CONFIG_KEYBOARD_CYPRESS_TOUCH)
		touchkey_init_hw();
		i2c_register_board_info(8, touchkey_i2c_info,
			ARRAY_SIZE(touchkey_i2c_info));
#endif
		;
	} else {
#if defined(CONFIG_KEYBOARD_TC300K)
		tc300k_touchkey_init();
		i2c_register_board_info(9, touchkey_i2c_data,
			ARRAY_SIZE(touchkey_i2c_data));
#endif
		;
	}
}
#endif

#define GPIO_KEYS(_name, _code, _gpio, _active_low, _iswake)	\
{									\
	.desc = _name,					\
	.code = _code,					\
	.gpio = _gpio,					\
	.active_low = _active_low,			\
	.type = EV_KEY,					\
	.wakeup = _iswake,				\
	.debounce_interval = 10,			\
	.value = 1						\
}

static struct gpio_keys_button gpio_button[] = {
	GPIO_KEYS("KEY_POWER", KEY_POWER,
		GPIO_nPOWER, true, true),
	GPIO_KEYS("KEY_VOLUMEUP", KEY_VOLUMEUP,
		GPIO_VOL_UP, true, false),
	GPIO_KEYS("KEY_VOLUMEDOWN", KEY_VOLUMEDOWN,
		GPIO_VOL_DOWN, true, false),
	GPIO_KEYS("KEY_HOME", KEY_HOMEPAGE,
		GPIO_HOME_KEY, true, true),
};

static struct gpio_keys_platform_data gpiokeys_platform_data = {
	gpio_button,
	ARRAY_SIZE(gpio_button),
#ifdef CONFIG_SENSORS_HALL
	.gpio_flip_cover = GPIO_HALL_SENSOR_INT,
#endif
};

static struct platform_device gpio_keys = {
	.name   = "gpio-keys",
	.dev    = {
		.platform_data = &gpiokeys_platform_data,
	},
};

static struct input_debug_key_state kstate[] = {
	SET_DEBUG_KEY(KEY_POWER, false),
	SET_DEBUG_KEY(KEY_VOLUMEUP, false),
	SET_DEBUG_KEY(KEY_VOLUMEDOWN, true),
	SET_DEBUG_KEY(KEY_HOMEPAGE, false),
};

static struct input_debug_pdata input_debug_platform_data = {
	.nkeys = ARRAY_SIZE(kstate),
	.key_state = kstate,
};

static struct platform_device input_debug = {
	.name	= SEC_DEBUG_NAME,
	.dev	= {
		.platform_data = &input_debug_platform_data,
	},
};

#ifdef CONFIG_INPUT_BOOSTER
static enum booster_device_type get_booster_device(int code)
{
	switch (code) {
	case KEY_HOMEPAGE:
		return BOOSTER_DEVICE_KEY;
		break;
#if 0
	case KEY_RECENT:
	case KEY_BACK:
		return BOOSTER_DEVICE_TOUCHKEY;
		break;
#endif
#if defined(CONFIG_INPUT_TOUCHSCREEN)
	case KEY_BOOSTER_TOUCH:
		return BOOSTER_DEVICE_TOUCH;
		break;
#endif
	default:
		return BOOSTER_DEVICE_NOT_DEFINED;
		break;
	}
}

static const struct dvfs_freq key_freq_table[BOOSTER_DEVICE_MAX] = {
	[BOOSTER_LEVEL1] = BOOSTER_DVFS_FREQ(650000,	400000,	111000),
};

#if 0
static const struct dvfs_freq touchkey_freq_table[BOOSTER_DEVICE_MAX] = {
	[BOOSTER_LEVEL1] = BOOSTER_DVFS_FREQ(1600000,	667000,	333000),
	[BOOSTER_LEVEL2] = BOOSTER_DVFS_FREQ(650000,	400000,	111000),
};
#endif

#if defined(CONFIG_INPUT_TOUCHSCREEN)
static const struct dvfs_freq touch_freq_table[BOOSTER_DEVICE_MAX] = {
	[BOOSTER_LEVEL1] = BOOSTER_DVFS_FREQ(1600000,	667000,	333000),
	[BOOSTER_LEVEL2] = BOOSTER_DVFS_FREQ(650000,	400000,	111000),
	[BOOSTER_LEVEL3] = BOOSTER_DVFS_FREQ(650000,	667000,	333000),
};
#endif

static struct booster_key booster_keys[] = {
	BOOSTER_KEYS("HOMEPAGE", KEY_HOMEPAGE,
		BOOSTER_DEFAULT_ON_TIME,
		BOOSTER_DEFAULT_OFF_TIME,
		key_freq_table),
#if 0
	BOOSTER_KEYS("MENU", KEY_MENU,
		BOOSTER_DEFAULT_ON_TIME,
		BOOSTER_DEFAULT_OFF_TIME,
		touchkey_freq_table),
	BOOSTER_KEYS("BACK", KEY_BACK,
		BOOSTER_DEFAULT_ON_TIME,
		BOOSTER_DEFAULT_OFF_TIME,
		touchkey_freq_table),
#endif
#if defined(CONFIG_INPUT_TOUCHSCREEN)
	BOOSTER_KEYS("TOUCH", KEY_BOOSTER_TOUCH,
		BOOSTER_DEFAULT_CHG_TIME,
		BOOSTER_DEFAULT_OFF_TIME,
		touch_freq_table),
#endif
};

/* Caution : keys, nkeys, get_device_type should be defined */
static struct input_booster_platform_data input_booster_pdata = {
	.keys = booster_keys,
	.nkeys = ARRAY_SIZE(booster_keys),
	.get_device_type = get_booster_device,
};

static struct platform_device input_booster = {
	.name = INPUT_BOOSTER_NAME,
	.dev.platform_data = &input_booster_pdata,
};
#endif

static struct platform_device *input_devices[] __initdata = {
	&s3c_device_i2c0,
	&gpio_keys,
#if defined(CONFIG_KEYBOARD_CYPRESS_TOUCH)
	&s3c_device_i2c8,
#endif
#if defined(CONFIG_KEYBOARD_TC300K)
	&s3c_device_i2c9,
#endif
	&input_debug,
#ifdef CONFIG_INPUT_BOOSTER
	&input_booster,
#endif
};

void __init exynos5_universal5420_input_init(void)
{
#ifdef CONFIG_TOUCHSCREEN_SYNAPTICS_DSX_I2C
	synaptics_dsx_tsp_init();
#endif
#if defined(CONFIG_KEYBOARD_CYPRESS_TOUCH) || defined(CONFIG_KEYBOARD_TC300K)
	touchkey_init();
#endif
	platform_add_devices(input_devices,
			ARRAY_SIZE(input_devices));
}

