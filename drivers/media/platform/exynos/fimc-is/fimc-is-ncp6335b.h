/*
 * Samsung Exynos5 SoC series FIMC-IS driver
 *
 * exynos5 fimc-is core functions
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <linux/i2c.h>
#include <linux/slab.h>
#include "fimc-is-core.h"

enum{
	NCP6335B_VOUT_0P875 = 0xAC,
	NCP6335B_VOUT_0P900 = 0xB0,
	NCP6335B_VOUT_0P925 = 0xB4,
	NCP6335B_VOUT_0P950 = 0xB8,
	NCP6335B_VOUT_0P975 = 0xBC,
	NCP6335B_VOUT_1P000 = 0xC0,
};

int ncp6335b_get_vout_val(int sel);
int ncp6335b_set_voltage(struct i2c_client *client, int vout);
int ncp6335b_read_voltage(struct i2c_client *client);

