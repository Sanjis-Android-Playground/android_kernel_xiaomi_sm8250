/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Minimal boot-mode definitions for the AW8697 RichTap driver.
 * Alioth does not ship the OPLUS boot-mode driver; the haptic code only uses
 * these constants to special-case factory/RF/WLAN boots.
 */
#ifndef _OPLUS_BOOT_H
#define _OPLUS_BOOT_H

enum {
	MSM_BOOT_MODE__NORMAL,
	MSM_BOOT_MODE__FASTBOOT,
	MSM_BOOT_MODE__RECOVERY,
	MSM_BOOT_MODE__FACTORY,
	MSM_BOOT_MODE__RF,
	MSM_BOOT_MODE__WLAN,
	MSM_BOOT_MODE__MOS,
	MSM_BOOT_MODE__CHARGE,
	MSM_BOOT_MODE__SILENCE,
	MSM_BOOT_MODE__SAU,
	MSM_BOOT_MODE__AGING = 998,
	MSM_BOOT_MODE__SAFE = 999,
};

static inline int get_boot_mode(void)
{
	return MSM_BOOT_MODE__NORMAL;
}

#endif /* _OPLUS_BOOT_H */
