/*
 * Copyright (c) 2012 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#include <linux/platform_device.h>
#include <linux/i2c.h>
#include <linux/regulator/machine.h>
#include <linux/gpio.h>
#include <plat/devs.h>
#include <plat/iic.h>
#include <plat/gpio-cfg.h>
#include <mach/irqs.h>
#include <mach/hs-iic.h>

#if defined(CONFIG_REGULATOR_S2MPS11)
#include <linux/mfd/samsung/core.h>
#include <linux/mfd/samsung/s2mps11.h>
#endif

#if defined(CONFIG_REGULATOR_MAX77802)
#include <linux/mfd/max77802.h>
#endif

#include <asm/system_info.h>

#define SMDK5420_PMIC_EINT	IRQ_EINT(24)

#if defined(CONFIG_REGULATOR_S2MPS11)
static struct regulator_consumer_supply s2m_buck1_consumer =
	REGULATOR_SUPPLY("vdd_mif", NULL);

static struct regulator_consumer_supply s2m_buck2_consumer =
	REGULATOR_SUPPLY("vdd_arm", NULL);

static struct regulator_consumer_supply s2m_buck3_consumer =
	REGULATOR_SUPPLY("vdd_int", NULL);

static struct regulator_consumer_supply s2m_buck4_consumer =
	REGULATOR_SUPPLY("vdd_g3d", NULL);

static struct regulator_consumer_supply s2m_buck6_consumer =
	REGULATOR_SUPPLY("vdd_kfc", NULL);

#ifdef CONFIG_SND_SOC_WM8994
static struct regulator_consumer_supply s2m_ldo2_consumer[] = {
	REGULATOR_SUPPLY("AVDD2", NULL),
	REGULATOR_SUPPLY("CPVDD", NULL),
	REGULATOR_SUPPLY("DBVDD1", NULL),
	REGULATOR_SUPPLY("DBVDD2", NULL),
	REGULATOR_SUPPLY("DBVDD3", NULL),
};
#elif defined (CONFIG_MFD_WM5102)
static struct regulator_consumer_supply s2m_ldo2_consumer[] = {
	REGULATOR_SUPPLY("AVDD", "spi2.0"),
	REGULATOR_SUPPLY("LDOVDD", "spi2.0"),
	REGULATOR_SUPPLY("DBVDD1", "spi2.0"),

	REGULATOR_SUPPLY("CPVDD", "wm5102-codec"),
	REGULATOR_SUPPLY("DBVDD2", "wm5102-codec"),
	REGULATOR_SUPPLY("DBVDD3", "wm5102-codec"),
	REGULATOR_SUPPLY("SPKVDDL", "wm5102-codec"),
	REGULATOR_SUPPLY("SPKVDDR", "wm5102-codec"),
};
#else
static struct regulator_consumer_supply s2m_ldo2_consumer[] = {};
#endif

static struct regulator_consumer_supply s2m_ldo4_consumer[] = {
	REGULATOR_SUPPLY("vadc_1.8v_ap", NULL),
};

static struct regulator_consumer_supply s2m_ldo6_consumer[] = {
	REGULATOR_SUPPLY("vmipi_1.0v_ap", NULL),
};

static struct regulator_consumer_supply s2m_ldo7_consumer[] = {
	REGULATOR_SUPPLY("vmipi_1.8v_ap", NULL),
};

static struct regulator_consumer_supply s2m_ldo9_consumer[] = {
	REGULATOR_SUPPLY("vuotg_3.0v_ap", NULL),
};

static struct regulator_consumer_supply s2m_ldo10_consumer[] = {
	REGULATOR_SUPPLY("vddq_pre_1.8v_ap", NULL),
};

static struct regulator_consumer_supply s2m_ldo11_consumer[] = {
	REGULATOR_SUPPLY("vhsic_1.0v_ap", NULL),
};

static struct regulator_consumer_supply s2m_ldo12_consumer[] = {
	REGULATOR_SUPPLY("vhsic_1.8v_ap", NULL),
};

static struct regulator_consumer_supply s2m_ldo13_consumer[] = {
	REGULATOR_SUPPLY("vmmc2_2.8v_ap", NULL),
	REGULATOR_SUPPLY("vqmmc", "dw_mmc.2"),
};

static struct regulator_consumer_supply s2m_ldo14_consumer[] = {
	REGULATOR_SUPPLY("vcc_3.0v_motor", NULL),
};

static struct regulator_consumer_supply s2m_ldo16_consumer[] = {
	REGULATOR_SUPPLY("vcc_2.8v_ap", NULL),
};

static struct regulator_consumer_supply s2m_ldo17_consumer[] = {
	REGULATOR_SUPPLY("irled_3.3v", NULL),
};

static struct regulator_consumer_supply s2m_ldo19_consumer[] = {
	REGULATOR_SUPPLY("vtf_2.8v", NULL),
};

static struct regulator_consumer_supply s2m_ldo20_consumer[] = {
	REGULATOR_SUPPLY("vt_cam_1.8v", NULL),
};

static struct regulator_consumer_supply s2m_ldo21_consumer[] = {
	REGULATOR_SUPPLY("cam_isp_sensor_io_1.8v", NULL),
};

static struct regulator_consumer_supply s2m_ldo22_consumer[] = {
	REGULATOR_SUPPLY("cam_sensor_core_1.2v", NULL),
};

static struct regulator_consumer_supply s2m_ldo23_consumer[] = {
	REGULATOR_SUPPLY("vdd_mifs", NULL),
};

static struct regulator_consumer_supply s2m_ldo24_consumer[] = {
	REGULATOR_SUPPLY("tsp_3.3v", NULL),
};

static struct regulator_consumer_supply s2m_ldo26_consumer[] = {
	REGULATOR_SUPPLY("cam_af_2.8v_pm", NULL),
};

static struct regulator_consumer_supply s2m_ldo27_consumer[] = {
	REGULATOR_SUPPLY("vdd_g3ds", NULL),
};

static struct regulator_consumer_supply s2m_ldo30_consumer[] = {
	REGULATOR_SUPPLY("vtouch_1.8v", NULL),
};

static struct regulator_consumer_supply s2m_ldo31_consumer[] = {
	REGULATOR_SUPPLY("grip_1.8v", NULL),
};

static struct regulator_consumer_supply s2m_ldo32_consumer[] = {
	REGULATOR_SUPPLY("tsp_1.8v", NULL),
};

static struct regulator_consumer_supply s2m_ldo33_consumer[] = {
	REGULATOR_SUPPLY("vcc_1.8v_mhl", NULL),
};

static struct regulator_consumer_supply s2m_ldo34_consumer[] = {
	REGULATOR_SUPPLY("vcc_3.3v_mhl", NULL),
};

static struct regulator_consumer_supply s2m_ldo35_consumer[] = {
	REGULATOR_SUPPLY("vsil_1.2a", NULL),
};

static struct regulator_consumer_supply s2m_ldo38_consumer[] = {
	REGULATOR_SUPPLY("key_led_3.3v", NULL),
};

#define SREGULATOR_INIT(_ldo, _name, _min_uV, _max_uV, _always_on,	\
		_boot_on, _ops_mask, _enabled)				\
	static struct regulator_init_data s2m_##_ldo##_data = {		\
		.constraints = {					\
			.name = _name,					\
			.min_uV = _min_uV,				\
			.max_uV = _max_uV,				\
			.always_on	= _always_on,			\
			.boot_on	= _boot_on,			\
			.apply_uV	= 1,				\
			.valid_ops_mask = _ops_mask,			\
			.state_mem = {					\
				.disabled =				\
					(_enabled == -1 ? 0 : !(_enabled)),\
				.enabled =				\
					(_enabled == -1 ? 0 : _enabled),\
		},							\
		},							\
		.num_consumer_supplies = ARRAY_SIZE(s2m_##_ldo##_consumer),\
		.consumer_supplies = &s2m_##_ldo##_consumer[0],		\
	};

SREGULATOR_INIT(ldo2, "vcc_1.8v_ap", 1800000, 1800000, 1, 1,
		REGULATOR_CHANGE_STATUS, 1);
SREGULATOR_INIT(ldo4, "vadc_1.8v_ap", 1800000, 1800000, 1, 1,
		REGULATOR_CHANGE_STATUS, 1);
SREGULATOR_INIT(ldo6, "vmipi_1.0v_ap", 1000000, 1000000, 1, 1,
		REGULATOR_CHANGE_STATUS, 0);
SREGULATOR_INIT(ldo7, "vmipi_1.8v_ap", 1800000, 1800000, 1, 1,
		REGULATOR_CHANGE_STATUS, 0);
SREGULATOR_INIT(ldo9, "vuotg_3.0v_ap", 3000000, 3000000, 1, 1,
		REGULATOR_CHANGE_STATUS, 1);
SREGULATOR_INIT(ldo10, "vddq_pre_1.8v_ap", 1800000, 1800000, 1, 1,
		REGULATOR_CHANGE_STATUS, 1);
SREGULATOR_INIT(ldo11, "vhsic_1.0v_ap", 1000000, 1000000, 1, 1,
		REGULATOR_CHANGE_STATUS, 1);
SREGULATOR_INIT(ldo12, "vhsic_1.8v_ap", 1800000, 1800000, 1, 1,
		REGULATOR_CHANGE_STATUS, 1);
SREGULATOR_INIT(ldo13, "vmmc2_2.8v_ap", 1800000, 2800000, 0, 0,
		REGULATOR_CHANGE_STATUS, 0);
SREGULATOR_INIT(ldo14, "vcc_3.0v_motor", 3000000, 3000000, 0, 0,
		REGULATOR_CHANGE_STATUS, 0);
SREGULATOR_INIT(ldo16, "vcc_2.8v_ap", 2800000, 2800000, 1, 1,
		REGULATOR_CHANGE_STATUS, 1);
SREGULATOR_INIT(ldo17, "irled_3.3v", 3300000, 3300000, 1, 1,
		REGULATOR_CHANGE_STATUS, 0);
SREGULATOR_INIT(ldo19, "vtf_2.8v", 2800000, 2800000, 0, 0,
		REGULATOR_CHANGE_STATUS, 0);
SREGULATOR_INIT(ldo20, "vt_cam_1.8v", 1800000, 1800000, 0, 0,
		REGULATOR_CHANGE_STATUS, 0);
SREGULATOR_INIT(ldo21, "cam_isp_sensor_io_1.8v", 1800000, 1800000, 0, 0,
		REGULATOR_CHANGE_STATUS, 0);
SREGULATOR_INIT(ldo22, "cam_sensor_core_1.2v", 1050000, 1200000, 0, 0,
		REGULATOR_CHANGE_VOLTAGE | REGULATOR_CHANGE_STATUS, 0);
SREGULATOR_INIT(ldo23, "vmifs_1.1v_ap", 800000, 1100000, 1, 0,
		REGULATOR_CHANGE_VOLTAGE | REGULATOR_CHANGE_STATUS, 1);
SREGULATOR_INIT(ldo24, "tsp_3.3v", 3300000, 3300000, 0, 0,
		REGULATOR_CHANGE_STATUS, 0);
SREGULATOR_INIT(ldo26, "cam_af_2.8v_pm", 2800000, 2800000, 0, 0,
		REGULATOR_CHANGE_STATUS, 0);
SREGULATOR_INIT(ldo27, "vg3ds_1.0v_ap", 800000, 1000000, 1, 0,
		REGULATOR_CHANGE_VOLTAGE | REGULATOR_CHANGE_STATUS, 1);
SREGULATOR_INIT(ldo30, "vtouch_1.8v", 1800000, 1800000, 0, 0,
		REGULATOR_CHANGE_STATUS, 0);
SREGULATOR_INIT(ldo31, "grip_1.8v", 1800000, 1800000, 1, 1,
		REGULATOR_CHANGE_STATUS, 0);
SREGULATOR_INIT(ldo32, "tsp_1.8v", 1800000, 1800000, 0, 0,
		REGULATOR_CHANGE_STATUS, 0);
SREGULATOR_INIT(ldo33, "vcc_1.8v_mhl", 1800000, 1800000, 0, 0,
		REGULATOR_CHANGE_STATUS, 0);
SREGULATOR_INIT(ldo34, "vcc_3.3v_mhl", 3300000, 3300000, 0, 0,
		REGULATOR_CHANGE_STATUS, 0);
SREGULATOR_INIT(ldo35, "vsil_1.2a", 1200000, 1200000, 0, 0,
		REGULATOR_CHANGE_STATUS, 0);
SREGULATOR_INIT(ldo38, "key_led_3.3v", 3300000, 3300000, 0, 0,
		REGULATOR_CHANGE_STATUS, 0);

static struct regulator_init_data s2m_buck1_data = {
	.constraints = {
		.name = "vdd_mif range",
		.min_uV = 700000,
		.max_uV = 1300000,
		.apply_uV	= 1,
		.valid_ops_mask	= REGULATOR_CHANGE_VOLTAGE |
				REGULATOR_CHANGE_STATUS,
		.always_on = 1,
		.boot_on = 1,
		.state_mem	= {
			.uV		= 1100000,
			.mode		= REGULATOR_MODE_NORMAL,
			.disabled	= 1,
		},
	},
	.num_consumer_supplies = 1,
	.consumer_supplies = &s2m_buck1_consumer,
};

static struct regulator_init_data s2m_buck2_data = {
	.constraints = {
		.name = "vdd_arm range",
		.min_uV = 800000,
		.max_uV = 1500000,
		.valid_ops_mask	= REGULATOR_CHANGE_VOLTAGE |
				REGULATOR_CHANGE_STATUS,
		.always_on = 1,
		.boot_on = 1,
		.state_mem	= {
			.disabled	= 1,
		},
	},
	.num_consumer_supplies = 1,
	.consumer_supplies = &s2m_buck2_consumer,
};

static struct regulator_init_data s2m_buck3_data = {
	.constraints	= {
		.name		= "vdd_int range",
		.min_uV		=  800000,
		.max_uV		= 1400000,
		.apply_uV	= 1,
		.valid_ops_mask	= REGULATOR_CHANGE_VOLTAGE |
				REGULATOR_CHANGE_STATUS,
		.always_on = 1,
		.boot_on = 1,
		.state_mem	= {
			.uV		= 1100000,
			.mode		= REGULATOR_MODE_NORMAL,
			.disabled	= 1,
		},
	},
	.num_consumer_supplies	= 1,
	.consumer_supplies	= &s2m_buck3_consumer,
};

static struct regulator_init_data s2m_buck4_data = {
	.constraints	= {
		.name		= "vdd_g3d range",
		.min_uV		=  700000,
		.max_uV		= 1400000,
		.valid_ops_mask	= REGULATOR_CHANGE_VOLTAGE |
				REGULATOR_CHANGE_STATUS,
		.always_on = 1,
		.boot_on = 1,
		.state_mem	= {
			.disabled	= 1,
		},
	},
	.num_consumer_supplies	= 1,
	.consumer_supplies	= &s2m_buck4_consumer,
};

static struct regulator_init_data s2m_buck6_data = {
	.constraints	= {
		.name		= "vdd_kfc range",
		.min_uV		=  800000,
		.max_uV		= 1500000,
		.valid_ops_mask	= REGULATOR_CHANGE_VOLTAGE |
				REGULATOR_CHANGE_STATUS,
		.always_on = 1,
		.boot_on = 1,
		.state_mem	= {
			.disabled	= 1,
		},
	},
	.num_consumer_supplies	= 1,
	.consumer_supplies	= &s2m_buck6_consumer,
};

static struct sec_regulator_data exynos_regulators[] = {
	{S2MPS11_BUCK1, &s2m_buck1_data},
	{S2MPS11_BUCK2, &s2m_buck2_data},
	{S2MPS11_BUCK3, &s2m_buck3_data},
	{S2MPS11_BUCK4, &s2m_buck4_data},
	{S2MPS11_BUCK6, &s2m_buck6_data},
	{S2MPS11_LDO2, &s2m_ldo2_data},
	{S2MPS11_LDO4, &s2m_ldo4_data},
	{S2MPS11_LDO6, &s2m_ldo6_data},
	{S2MPS11_LDO7, &s2m_ldo7_data},
	{S2MPS11_LDO9, &s2m_ldo9_data},
	{S2MPS11_LDO10, &s2m_ldo10_data},
	{S2MPS11_LDO11, &s2m_ldo11_data},
	{S2MPS11_LDO12, &s2m_ldo12_data},
	{S2MPS11_LDO13, &s2m_ldo13_data},
	{S2MPS11_LDO14, &s2m_ldo14_data},
	{S2MPS11_LDO16, &s2m_ldo16_data},
	{S2MPS11_LDO17, &s2m_ldo17_data},
	{S2MPS11_LDO19, &s2m_ldo19_data},
	{S2MPS11_LDO20, &s2m_ldo20_data},
	{S2MPS11_LDO21, &s2m_ldo21_data},
	{S2MPS11_LDO22, &s2m_ldo22_data},
	{S2MPS11_LDO23, &s2m_ldo23_data},
	{S2MPS11_LDO24, &s2m_ldo24_data},
	{S2MPS11_LDO26, &s2m_ldo26_data},
	{S2MPS11_LDO27, &s2m_ldo27_data},
	{S2MPS11_LDO30, &s2m_ldo30_data},
	{S2MPS11_LDO31, &s2m_ldo31_data},
	{S2MPS11_LDO32, &s2m_ldo32_data},
	{S2MPS11_LDO33, &s2m_ldo33_data},
	{S2MPS11_LDO34, &s2m_ldo34_data},
	{S2MPS11_LDO35, &s2m_ldo35_data},
	{S2MPS11_LDO38, &s2m_ldo38_data},
};

struct sec_opmode_data s2mps11_opmode_data[S2MPS11_REG_MAX] = {
	[S2MPS11_BUCK1] = {S2MPS11_BUCK1, SEC_OPMODE_STANDBY},
	[S2MPS11_BUCK2] = {S2MPS11_BUCK2, SEC_OPMODE_STANDBY},
	[S2MPS11_BUCK3] = {S2MPS11_BUCK3, SEC_OPMODE_STANDBY},
	[S2MPS11_BUCK4] = {S2MPS11_BUCK4, SEC_OPMODE_STANDBY},
	[S2MPS11_BUCK5V123] = {S2MPS11_BUCK5V123, SEC_OPMODE_STANDBY},
	[S2MPS11_BUCK6] = {S2MPS11_BUCK6, SEC_OPMODE_STANDBY},
	[S2MPS11_LDO6] = {S2MPS11_LDO6, SEC_OPMODE_STANDBY},
	[S2MPS11_LDO9] = {S2MPS11_LDO9, SEC_OPMODE_STANDBY},
	[S2MPS11_LDO10] = {S2MPS11_LDO10, SEC_OPMODE_STANDBY},
	[S2MPS11_LDO11] = {S2MPS11_LDO11, SEC_OPMODE_STANDBY},
	[S2MPS11_LDO14] = {S2MPS11_LDO14, SEC_OPMODE_STANDBY},
	[S2MPS11_LDO17] = {S2MPS11_LDO17, SEC_OPMODE_STANDBY},
	[S2MPS11_LDO19] = {S2MPS11_LDO19, SEC_OPMODE_STANDBY},
	[S2MPS11_LDO20] = {S2MPS11_LDO20, SEC_OPMODE_STANDBY},
	[S2MPS11_LDO21] = {S2MPS11_LDO21, SEC_OPMODE_STANDBY},
	[S2MPS11_LDO22] = {S2MPS11_LDO22, SEC_OPMODE_STANDBY},
	[S2MPS11_LDO23] = {S2MPS11_LDO23, SEC_OPMODE_STANDBY},
	[S2MPS11_LDO24] = {S2MPS11_LDO24, SEC_OPMODE_STANDBY},
	[S2MPS11_LDO26] = {S2MPS11_LDO26, SEC_OPMODE_STANDBY},
	[S2MPS11_LDO27] = {S2MPS11_LDO27, SEC_OPMODE_STANDBY},
	[S2MPS11_LDO30] = {S2MPS11_LDO30, SEC_OPMODE_STANDBY},
	[S2MPS11_LDO31] = {S2MPS11_LDO31, SEC_OPMODE_STANDBY},
	[S2MPS11_LDO32] = {S2MPS11_LDO32, SEC_OPMODE_STANDBY},
	[S2MPS11_LDO33] = {S2MPS11_LDO33, SEC_OPMODE_STANDBY},
	[S2MPS11_LDO34] = {S2MPS11_LDO34, SEC_OPMODE_STANDBY},
	[S2MPS11_LDO35] = {S2MPS11_LDO35, SEC_OPMODE_STANDBY},
	[S2MPS11_LDO38] = {S2MPS11_LDO38, SEC_OPMODE_STANDBY},
};

static int sec_cfg_irq(void)
{
	unsigned int pin = irq_to_gpio(SMDK5420_PMIC_EINT);

	s3c_gpio_cfgpin(pin, S3C_GPIO_SFN(0xF));
	s3c_gpio_setpull(pin, S3C_GPIO_PULL_UP);

	return 0;
}

static struct sec_pmic_platform_data exynos5_s2m_pdata = {
	.device_type		= S2MPS11X,
	.irq_base		= IRQ_BOARD_START,
	.num_regulators		= ARRAY_SIZE(exynos_regulators),
	.regulators		= exynos_regulators,
	.cfg_pmic_irq		= sec_cfg_irq,
	.wakeup			= 1,
	.wtsr_smpl		= 1,
	.opmode_data		= s2mps11_opmode_data,
	.buck16_ramp_delay	= 12,
	.buck2_ramp_delay	= 12,
	.buck34_ramp_delay	= 12,
	.buck2_ramp_enable	= 1,
	.buck3_ramp_enable	= 1,
	.buck4_ramp_enable	= 1,
	.buck6_ramp_enable	= 1,
};

static struct i2c_board_info hs_i2c_devs3_s2mps11[] __initdata = {
	{
		I2C_BOARD_INFO("sec-pmic", 0xCC >> 1),
		.platform_data	= &exynos5_s2m_pdata,
		.irq		= SMDK5420_PMIC_EINT,
	},
};
#endif

#if defined(CONFIG_REGULATOR_MAX77802)
static struct regulator_consumer_supply max77802_buck1 =
	REGULATOR_SUPPLY("vdd_mif", NULL);

static struct regulator_consumer_supply max77802_buck2 =
	REGULATOR_SUPPLY("vdd_arm", NULL);

static struct regulator_consumer_supply max77802_buck3 =
	REGULATOR_SUPPLY("vdd_int", NULL);

static struct regulator_consumer_supply max77802_buck4 =
	REGULATOR_SUPPLY("vdd_g3d", NULL);

static struct regulator_consumer_supply max77802_buck6 =
	REGULATOR_SUPPLY("vdd_kfc", NULL);

static struct regulator_consumer_supply ldo2_supply[] = {
	REGULATOR_SUPPLY("vmem2_1.2v_ap", NULL),
};

#ifdef CONFIG_SND_SOC_WM8994
static struct regulator_consumer_supply ldo3_supply[] = {
	REGULATOR_SUPPLY("AVDD2", NULL),
	REGULATOR_SUPPLY("CPVDD", NULL),
	REGULATOR_SUPPLY("DBVDD1", NULL),
	REGULATOR_SUPPLY("DBVDD2", NULL),
	REGULATOR_SUPPLY("DBVDD3", NULL),
};
#elif defined (CONFIG_MFD_WM5102)
static struct regulator_consumer_supply ldo3_supply[] = {
	REGULATOR_SUPPLY("AVDD", "spi2.0"),
	REGULATOR_SUPPLY("LDOVDD", "spi2.0"),
	REGULATOR_SUPPLY("DBVDD1", "spi2.0"),

	REGULATOR_SUPPLY("CPVDD", "wm5102-codec"),
	REGULATOR_SUPPLY("DBVDD2", "wm5102-codec"),
	REGULATOR_SUPPLY("DBVDD3", "wm5102-codec"),
	REGULATOR_SUPPLY("SPKVDDL", "wm5102-codec"),
	REGULATOR_SUPPLY("SPKVDDR", "wm5102-codec"),
};
#else
static struct regulator_consumer_supply ldo3_supply[] = {};
#endif

static struct regulator_consumer_supply ldo4_supply[] = {
	REGULATOR_SUPPLY("vmmc2_2.8v_ap", NULL),
	REGULATOR_SUPPLY("vqmmc", "dw_mmc.2"),
};

static struct regulator_consumer_supply ldo5_supply[] = {
	REGULATOR_SUPPLY("vhsic_1.8v_ap", NULL),
};

static struct regulator_consumer_supply ldo6_supply[] = {
	REGULATOR_SUPPLY("vxpll_1.8v_ap", NULL),
};

static struct regulator_consumer_supply ldo8_supply[] = {
	REGULATOR_SUPPLY("vmipi_1.0v_ap", NULL),
};

static struct regulator_consumer_supply ldo9_supply[] = {
	REGULATOR_SUPPLY("vadc_1.8v", NULL),
};

static struct regulator_consumer_supply ldo10_supply[] = {
	REGULATOR_SUPPLY("vmipi_1.8v_ap", NULL),
};

static struct regulator_consumer_supply ldo11_supply[] = {
	REGULATOR_SUPPLY("vddq_pre_1.8v", NULL),
};

static struct regulator_consumer_supply ldo12_supply[] = {
	REGULATOR_SUPPLY("vuotg_3.0v_ap", NULL),
};

static struct regulator_consumer_supply ldo14_supply[] = {
	REGULATOR_SUPPLY("vabb1_1.8v_ap", NULL),
};

static struct regulator_consumer_supply ldo15_supply[] = {
	REGULATOR_SUPPLY("vhsic_1.0v_ap", NULL),
};

static struct regulator_consumer_supply ldo17_supply[] = {
	REGULATOR_SUPPLY("vg3ds_1.0v_ap", NULL),
};

static struct regulator_consumer_supply ldo18_supply[] = {
	REGULATOR_SUPPLY("cam_isp_sensor_io_1.8v", NULL),
};

static struct regulator_consumer_supply ldo19_supply[] = {
	REGULATOR_SUPPLY("vt_cam_1.8v", NULL),
};

static struct regulator_consumer_supply ldo23_supply[] = {
	REGULATOR_SUPPLY("key_led_3.3v", NULL),
};

static struct regulator_consumer_supply ldo24_supply[] = {
	REGULATOR_SUPPLY("cam_af_2.8v_pm", NULL),
};

static struct regulator_consumer_supply ldo25_supply[] = {
	REGULATOR_SUPPLY("vcc_3.3v_mhl", NULL),
};

static struct regulator_consumer_supply ldo26_supply[] = {
	REGULATOR_SUPPLY("usb_3.0_drv_3.3v", NULL),
};

static struct regulator_consumer_supply ldo27_supply[] = {
	REGULATOR_SUPPLY("vsil_1.2a", NULL),
};

static struct regulator_consumer_supply ldo28_supply[] = {
	REGULATOR_SUPPLY("vcc_1.8v_mhl", NULL),
};

static struct regulator_consumer_supply ldo29_supply[] = {
	REGULATOR_SUPPLY("tsp_1.8v", NULL),
};

static struct regulator_consumer_supply ldo30_supply[] = {
	REGULATOR_SUPPLY("vmifs_1.0v_ap", NULL),
};

static struct regulator_consumer_supply ldo32_supply[] = {
	REGULATOR_SUPPLY("irled_3.3V", NULL),
};

static struct regulator_consumer_supply ldo33_supply[] = {
	REGULATOR_SUPPLY("vcc_2.8v_ap", NULL),
};

static struct regulator_consumer_supply ldo34_supply[] = {
	REGULATOR_SUPPLY("tsp_3.3v", NULL),
};

static struct regulator_consumer_supply ldo35_supply[] = {
	REGULATOR_SUPPLY("cam_sensor_core_1.2v", NULL),
};

#if 0
static struct regulator_consumer_supply max77802_enp32khz[] = {
	REGULATOR_SUPPLY("lpo_in", "bcm47511"),
	REGULATOR_SUPPLY("lpo", "bcm4334_bluetooth"),
};
#endif

#define MREGULATOR_INIT(_ldo, _name, _min_uV, _max_uV, _always_on, _ops_mask, \
		       _disabled)					\
	static struct regulator_init_data _ldo##_init_data = {		\
		.constraints = {					\
			.name = _name,					\
			.min_uV = _min_uV,				\
			.max_uV = _max_uV,				\
			.always_on	= _always_on,			\
			.boot_on	= _always_on,			\
			.apply_uV	= 1,				\
			.valid_ops_mask = _ops_mask,			\
			.state_mem = {					\
				.disabled	= _disabled,		\
				.enabled	= !(_disabled),		\
			}						\
		},							\
		.num_consumer_supplies = ARRAY_SIZE(_ldo##_supply),	\
		.consumer_supplies = &_ldo##_supply[0],			\
	};

MREGULATOR_INIT(ldo2, "vmem2_1.2v_ap", 1200000, 1200000, 1,
		REGULATOR_CHANGE_STATUS, 0);
MREGULATOR_INIT(ldo3, "vcc_1.8v_ap", 1800000, 1800000, 1,
		REGULATOR_CHANGE_STATUS, 0);
MREGULATOR_INIT(ldo4, "vmmc2_2.8v_ap", 1800000, 2800000, 0,
		REGULATOR_CHANGE_VOLTAGE | REGULATOR_CHANGE_STATUS, 1);
MREGULATOR_INIT(ldo5, "vhsic_1.8v_ap", 1800000, 1800000, 1,
		REGULATOR_CHANGE_STATUS, 0);
MREGULATOR_INIT(ldo6, "vxpll_1.8v_ap", 1800000, 1800000, 1,
		REGULATOR_CHANGE_STATUS, 0);
MREGULATOR_INIT(ldo8, "vmipi_1.0v_ap", 1000000, 1000000, 1,
		REGULATOR_CHANGE_STATUS, 0);
MREGULATOR_INIT(ldo9, "vadc_1.8v", 1800000, 1800000, 1,
		REGULATOR_CHANGE_STATUS, 0);
MREGULATOR_INIT(ldo10, "vmipi_1.8v_ap", 1800000, 1800000, 1,
		REGULATOR_CHANGE_STATUS, 0);
MREGULATOR_INIT(ldo11, "vddq_pre_1.8v", 1800000, 1800000, 1,
		REGULATOR_CHANGE_STATUS, 0);
MREGULATOR_INIT(ldo12, "vuotg_3.0v_ap", 3000000, 3000000, 1,
		REGULATOR_CHANGE_STATUS, 0);
MREGULATOR_INIT(ldo14, "vabb1_1.8v_ap", 1800000, 1800000, 1,
		REGULATOR_CHANGE_STATUS, 0);
MREGULATOR_INIT(ldo15, "vhsic_1.0v_ap", 1000000, 1000000, 1,
		REGULATOR_CHANGE_STATUS, 0);
MREGULATOR_INIT(ldo17, "vg3ds_1.0v_ap", 1000000, 1000000, 1,
		REGULATOR_CHANGE_STATUS, 0);
MREGULATOR_INIT(ldo18, "cam_isp_sensor_io_1.8v", 1800000, 1800000, 0,
		REGULATOR_CHANGE_STATUS, 0);
MREGULATOR_INIT(ldo19, "vt_cam_1.8v", 1800000, 1800000, 0,
		REGULATOR_CHANGE_STATUS, 0);
MREGULATOR_INIT(ldo23, "key_led_3.3v", 3300000, 3300000, 0,
		REGULATOR_CHANGE_STATUS, 0);
MREGULATOR_INIT(ldo24, "cam_af_2.8v_pm", 2800000, 2800000, 0,
		REGULATOR_CHANGE_STATUS, 0);
MREGULATOR_INIT(ldo25, "vcc_3.3v_mhl", 3300000, 3300000, 0,
		REGULATOR_CHANGE_STATUS, 1);
MREGULATOR_INIT(ldo26, "usb_3.0_drv_3.3v", 3300000, 3300000, 0,
		REGULATOR_CHANGE_STATUS, 1);
MREGULATOR_INIT(ldo27, "vsil_1.2a", 1200000, 1200000, 0,
		REGULATOR_CHANGE_STATUS, 1);
MREGULATOR_INIT(ldo28, "vcc_1.8v_mhl", 1800000, 1800000, 0,
		REGULATOR_CHANGE_STATUS, 1);
MREGULATOR_INIT(ldo29, "tsp_1.8v", 1800000, 1800000, 0,
		REGULATOR_CHANGE_STATUS, 0);
MREGULATOR_INIT(ldo30, "vmifs_1.0v_ap", 1000000, 1000000, 1,
		REGULATOR_CHANGE_STATUS, 0);
MREGULATOR_INIT(ldo32, "irled_3.3V", 3300000, 3300000, 1,
		REGULATOR_CHANGE_STATUS, 1);
MREGULATOR_INIT(ldo33, "vcc_2.8v_ap", 2800000, 2800000, 1,
		REGULATOR_CHANGE_STATUS, 0);
MREGULATOR_INIT(ldo34, "tsp_3.3v", 3300000, 3300000, 0,
		REGULATOR_CHANGE_STATUS, 0);
MREGULATOR_INIT(ldo35, "cam_sensor_core_1.2v", 1050000, 1200000, 0,
		REGULATOR_CHANGE_STATUS | REGULATOR_CHANGE_VOLTAGE, 0);

static struct regulator_init_data max77802_buck1_data = {
	.constraints = {
		.name = "vdd_mif range",
		.min_uV = 700000,
		.max_uV = 1300000,
		.always_on = 1,
		.boot_on = 1,
		.valid_ops_mask	= REGULATOR_CHANGE_VOLTAGE |
				REGULATOR_CHANGE_STATUS,
		.state_mem	= {
			.uV		= 1100000,
			.mode		= REGULATOR_MODE_NORMAL,
			.disabled	= 1,
		},
	},
	.num_consumer_supplies = 1,
	.consumer_supplies = &max77802_buck1,
};

static struct regulator_init_data max77802_buck2_data = {
	.constraints = {
		.name = "vdd_arm range",
		.min_uV = 800000,
		.max_uV = 1500000,
		.apply_uV = 1,
		.always_on = 1,
		.boot_on = 1,
		.valid_ops_mask	= REGULATOR_CHANGE_VOLTAGE |
				REGULATOR_CHANGE_STATUS,
		.state_mem	= {
			.disabled	= 1,
		},
	},
	.num_consumer_supplies = 1,
	.consumer_supplies = &max77802_buck2,
};

static struct regulator_init_data max77802_buck3_data = {
	.constraints	= {
		.name		= "vdd_int range",
		.min_uV		=  800000,
		.max_uV		= 1400000,
		.apply_uV	= 1,
		.valid_ops_mask	= REGULATOR_CHANGE_VOLTAGE |
				REGULATOR_CHANGE_STATUS,
		.always_on = 1,
		.boot_on = 1,
		.state_mem	= {
			.uV		= 1100000,
			.mode		= REGULATOR_MODE_NORMAL,
			.disabled	= 1,
		},
	},
	.num_consumer_supplies	= 1,
	.consumer_supplies	= &max77802_buck3,
};

static struct regulator_init_data max77802_buck4_data = {
	.constraints	= {
		.name		= "vdd_g3d range",
		.min_uV		=  700000,
		.max_uV		= 1400000,
		.apply_uV	= 1,
		.valid_ops_mask	= REGULATOR_CHANGE_VOLTAGE |
				REGULATOR_CHANGE_STATUS,
		.always_on = 1,
		.boot_on = 1,
		.state_mem	= {
			.uV		= 1100000,
			.mode		= REGULATOR_MODE_NORMAL,
			.disabled	= 1,
		},
	},
	.num_consumer_supplies	= 1,
	.consumer_supplies	= &max77802_buck4,
};

static struct regulator_init_data max77802_buck6_data = {
	.constraints	= {
		.name		= "vdd_kfc range",
		.min_uV		=  800000,
		.max_uV		= 1500000,
		.valid_ops_mask	= REGULATOR_CHANGE_VOLTAGE |
				REGULATOR_CHANGE_STATUS,
		.always_on = 1,
		.boot_on = 1,
		.state_mem	= {
			.disabled	= 1,
		},
	},
	.num_consumer_supplies	= 1,
	.consumer_supplies	= &max77802_buck6,
};
#if 0
static struct regulator_init_data max77802_enp32khz_data = {
	.constraints = {
		.name = "32KHZ_PMIC",
		.always_on	= 1,
		.valid_ops_mask = REGULATOR_CHANGE_STATUS,
		.state_mem = {
			.enabled	= 1,
			.disabled	= 0,
		},
	},
	.num_consumer_supplies = ARRAY_SIZE(max77802_enp32khz),
	.consumer_supplies = max77802_enp32khz,
};
#endif

static struct max77802_regulator_data max77802_regulators[] = {
	{MAX77802_BUCK1, &max77802_buck1_data,},
	{MAX77802_BUCK2, &max77802_buck2_data,},
	{MAX77802_BUCK3, &max77802_buck3_data,},
	{MAX77802_BUCK4, &max77802_buck4_data,},
	{MAX77802_BUCK6, &max77802_buck6_data,},
	{MAX77802_LDO2, &ldo2_init_data,},
	{MAX77802_LDO3, &ldo3_init_data,},
	{MAX77802_LDO4, &ldo4_init_data,},
	{MAX77802_LDO5, &ldo5_init_data,},
	{MAX77802_LDO6, &ldo6_init_data,},
	{MAX77802_LDO8, &ldo8_init_data,},
	{MAX77802_LDO9, &ldo9_init_data,},
	{MAX77802_LDO10, &ldo10_init_data,},
	{MAX77802_LDO11, &ldo11_init_data,},
	{MAX77802_LDO12, &ldo12_init_data,},
	{MAX77802_LDO14, &ldo14_init_data,},
	{MAX77802_LDO15, &ldo15_init_data,},
	{MAX77802_LDO17, &ldo17_init_data,},
	{MAX77802_LDO18, &ldo18_init_data,},
	{MAX77802_LDO19, &ldo19_init_data,},
	{MAX77802_LDO23, &ldo23_init_data,},
	{MAX77802_LDO24, &ldo24_init_data,},
	{MAX77802_LDO25, &ldo25_init_data,},
	{MAX77802_LDO26, &ldo26_init_data,},
	{MAX77802_LDO27, &ldo27_init_data,},
	{MAX77802_LDO28, &ldo28_init_data,},
	{MAX77802_LDO29, &ldo29_init_data,},
	{MAX77802_LDO30, &ldo30_init_data,},
	{MAX77802_LDO32, &ldo32_init_data,},
	{MAX77802_LDO33, &ldo33_init_data,},
	{MAX77802_LDO34, &ldo34_init_data,},
	{MAX77802_LDO35, &ldo35_init_data,},
#if 0
	{MAX77802_P32KH, &max77802_enp32khz_data,},
#endif
};

struct max77802_opmode_data max77802_opmode_data[MAX77802_REG_MAX] = {
	[MAX77802_LDO2] = {MAX77802_LDO2, MAX77802_OPMODE_STANDBY},
	[MAX77802_LDO4] = {MAX77802_LDO4, MAX77802_OPMODE_STANDBY},
	[MAX77802_LDO5] = {MAX77802_LDO5, MAX77802_OPMODE_STANDBY},
	[MAX77802_LDO6] = {MAX77802_LDO6, MAX77802_OPMODE_STANDBY},
	[MAX77802_LDO8] = {MAX77802_LDO8, MAX77802_OPMODE_STANDBY},
	[MAX77802_LDO9] = {MAX77802_LDO9, MAX77802_OPMODE_STANDBY},
	[MAX77802_LDO10] = {MAX77802_LDO10, MAX77802_OPMODE_STANDBY},
	[MAX77802_LDO11] = {MAX77802_LDO11, MAX77802_OPMODE_STANDBY},
	[MAX77802_LDO12] = {MAX77802_LDO12, MAX77802_OPMODE_STANDBY},
	[MAX77802_LDO14] = {MAX77802_LDO14, MAX77802_OPMODE_STANDBY},
	[MAX77802_LDO15] = {MAX77802_LDO15, MAX77802_OPMODE_STANDBY},
	[MAX77802_LDO17] = {MAX77802_LDO17, MAX77802_OPMODE_STANDBY},
	[MAX77802_LDO23] = {MAX77802_LDO23, MAX77802_OPMODE_STANDBY},
	[MAX77802_LDO29] = {MAX77802_LDO29, MAX77802_OPMODE_STANDBY},
	[MAX77802_LDO30] = {MAX77802_LDO30, MAX77802_OPMODE_STANDBY},
	[MAX77802_LDO32] = {MAX77802_LDO32, MAX77802_OPMODE_STANDBY},
	[MAX77802_LDO34] = {MAX77802_LDO34, MAX77802_OPMODE_STANDBY},
	[MAX77802_BUCK1] = {MAX77802_BUCK1, MAX77802_OPMODE_STANDBY},
	[MAX77802_BUCK2] = {MAX77802_BUCK2, MAX77802_OPMODE_STANDBY},
	[MAX77802_BUCK3] = {MAX77802_BUCK3, MAX77802_OPMODE_STANDBY},
	[MAX77802_BUCK4] = {MAX77802_BUCK4, MAX77802_OPMODE_STANDBY},
	[MAX77802_BUCK6] = {MAX77802_BUCK6, MAX77802_OPMODE_STANDBY},
};

struct max77802_platform_data exynos5_max77802_info = {
	.num_regulators = ARRAY_SIZE(max77802_regulators),
	.regulators = max77802_regulators,
	.irq_gpio	= GPIO_AP_PMIC_IRQ,
	.irq_base	= IRQ_BOARD_START,
	.wakeup		= 1,

	.opmode_data = max77802_opmode_data,
	.ramp_rate = MAX77802_RAMP_RATE_25MV,
#if defined(CONFIG_SEC_FACTORY)
	.wtsr_smpl = MAX77802_WTSR_ENABLE,
#else
	.wtsr_smpl = MAX77802_WTSR_ENABLE | MAX77802_SMPL_ENABLE,
#endif

	.buck12346_gpio_dvs = {
		/* Use DVS2 register of each bucks to supply stable power
		 * after sudden reset */
		{GPIO_PMIC_DVS1, 1},
		{GPIO_PMIC_DVS2, 0},
		{GPIO_PMIC_DVS3, 0},
	},
	.buck12346_gpio_selb = {
		GPIO_BUCK1_SEL,
		GPIO_BUCK2_SEL,
		GPIO_BUCK3_SEL,
		GPIO_BUCK4_SEL,
		GPIO_BUCK6_SEL,
	},
	.buck1_voltage[0] = 1000000,	/* 1.0V */
	.buck1_voltage[1] = 1000000,	/* 1.0V */
	.buck1_voltage[2] = 1000000,	/* 1.0V */
	.buck1_voltage[3] = 1000000,	/* 1.0V */
	.buck1_voltage[4] = 1000000,	/* 1.0V */
	.buck1_voltage[5] = 1000000,	/* 1.0V */
	.buck1_voltage[6] = 1000000,	/* 1.0V */
	.buck1_voltage[7] = 1000000,	/* 1.0V */

	.buck2_voltage[0] = 1000000,	/* 1.0V */
	.buck2_voltage[1] = 1000000,	/* 1.0V */
	.buck2_voltage[2] = 1000000,	/* 1.0V */
	.buck2_voltage[3] = 1000000,	/* 1.0V */
	.buck2_voltage[4] = 1000000,	/* 1.0V */
	.buck2_voltage[5] = 1000000,	/* 1.0V */
	.buck2_voltage[6] = 1000000,	/* 1.0V */
	.buck2_voltage[7] = 1000000,	/* 1.0V */

	.buck3_voltage[0] = 1025000,	/* 1.025V */
	.buck3_voltage[1] = 1025000,	/* 1.025V */
	.buck3_voltage[2] = 1025000,	/* 1.025V */
	.buck3_voltage[3] = 1025000,	/* 1.025V */
	.buck3_voltage[4] = 1025000,	/* 1.025V */
	.buck3_voltage[5] = 1025000,	/* 1.025V */
	.buck3_voltage[6] = 1025000,	/* 1.025V */
	.buck3_voltage[7] = 1025000,	/* 1.025V */

	.buck4_voltage[0] = 1025000,	/* 1.025V */
	.buck4_voltage[1] = 1025000,	/* 1.025V */
	.buck4_voltage[2] = 1025000,	/* 1.025V */
	.buck4_voltage[3] = 1025000,	/* 1.025V */
	.buck4_voltage[4] = 1025000,	/* 1.025V */
	.buck4_voltage[5] = 1025000,	/* 1.025V */
	.buck4_voltage[6] = 1025000,	/* 1.025V */
	.buck4_voltage[7] = 1025000,	/* 1.025V */

	.buck6_voltage[0] = 1000000,	/* 1.0V */
	.buck6_voltage[1] = 1000000,	/* 1.0V */
	.buck6_voltage[2] = 1000000,	/* 1.0V */
	.buck6_voltage[3] = 1000000,	/* 1.0V */
	.buck6_voltage[4] = 1000000,	/* 1.0V */
	.buck6_voltage[5] = 1000000,	/* 1.0V */
	.buck6_voltage[6] = 1000000,	/* 1.0V */
	.buck6_voltage[7] = 1000000,	/* 1.0V */

	.jigon_ops = MAX77802_JIGONB_CPULOCK | MAX77802_JIGONB_SMPL_DISABLE,
};

static struct i2c_board_info hs_i2c_devs3_max77802[] __initdata = {
	{
		I2C_BOARD_INFO("max77802", 0x12 >> 1),
		.platform_data = &exynos5_max77802_info,
		.irq		= SMDK5420_PMIC_EINT,
	},
};
#endif

struct exynos5_platform_i2c hs_i2c3_data __initdata = {
	.bus_number = 7,
	.operation_mode = HSI2C_POLLING,
	.speed_mode = HSI2C_FAST_SPD,
	.fast_speed = 400000,
	.high_speed = 2500000,
	.cfg_gpio = NULL,
};

void __init board_chagall_pmic_init(void)
{
	/* This is temporary gpio assignedment code for
	   chagall test board, to be removed soon */
	if(system_rev == 9) {
		exynos5_max77802_info.buck12346_gpio_selb[0]
			= EXYNOS5420_GPA2(6);
		exynos5_max77802_info.buck12346_gpio_selb[1]
			= EXYNOS5420_GPA2(7);
	}
	exynos5_hs_i2c3_set_platdata(&hs_i2c3_data);
	if(system_rev == 9) {
		i2c_register_board_info(7, hs_i2c_devs3_max77802, ARRAY_SIZE(hs_i2c_devs3_max77802));
	} else {
		i2c_register_board_info(7, hs_i2c_devs3_s2mps11, ARRAY_SIZE(hs_i2c_devs3_s2mps11));
	}
	platform_device_register(&exynos5_device_hs_i2c3);
}
