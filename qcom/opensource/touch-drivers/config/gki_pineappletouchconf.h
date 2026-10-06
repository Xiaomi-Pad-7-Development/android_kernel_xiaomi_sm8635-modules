/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2022, Qualcomm Innovation Center, Inc. All rights reserved.
 */

/*
 * focaltech_3683g and goodix_berlin_driver are intentionally NOT enabled.
 * Both are clients of the LineageOS xiaomi_touch API (enum touch_id,
 * TOUCH_FILTER_*, register_xiaomi_touch_client, notify_oneshot_sensor).
 * uke needs Xiaomi's OSS Touchfeature v2 core instead, because the p82
 * NT36532 driver calls get_raw_data_base / notify_raw_data_update /
 * add_common_data_to_buf / register_touch_panel and friends, none of which
 * the LineageOS core exports. The two client generations cannot coexist.
 * Neither module appears in any uke module list, so nothing is orphaned.
 * NOTE: this is pineapple-wide; peridot/cliffs sharing this tree would lose
 * these drivers. A compatibility shim over the v2 core is required before
 * this can be upstreamed.
 */
#define CONFIG_TOUCHSCREEN_XIAOMI_TOUCHFEATURE 1
#define CONFIG_TOUCHSCREEN_NT36xxx_HOSTDL_SPI 1
#define CONFIG_TOUCHSCREEN_NVT_DEBUG_FS 1
#define TOUCH_THP_SUPPORT 1
#define TOUCH_IS_TDDI 1
#define TOUCH_STYLUS_SUPPORT 1
#define DISABLE_POWER_STATUS 1
#define CONFIG_TOUCHSCREEN_NT36XXX_I2C 1
#define CONFIG_TOUCHSCREEN_ATMEL_MXT 1
#define CONFIG_QTS_ENABLE 1
#define CONFIG_TOUCH_FOCALTECH 1