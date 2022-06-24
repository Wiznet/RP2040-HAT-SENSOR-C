/**
 * Copyright (c) 2022 WIZnet Co.,Ltd
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _SENSORS_ROUGH_H_
#define _SENSORS_ROUGH_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

int sensor_init(void) __attribute__((weak));
int sensor_write(uint8_t addr, const uint8_t *src, size_t len, bool nostop) __attribute__((weak));
int sensor_read(uint8_t addr, uint8_t *dst, size_t len, bool nostop) __attribute__((weak));

#ifdef __cplusplus
}
#endif

#endif


