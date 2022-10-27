/*
 * Copyright 2014-2016 Freescale Semiconductor, Inc.
 * Copyright 2016-2018 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#ifndef __FSL_DEVICE_REGISTERS_H__
#define __FSL_DEVICE_REGISTERS_H__

/*
 * Include the cpu specific register header files.
 *
 * The CPU macro should be declared in the project or makefile.
 */
#if (defined(CPU_MKV30F128VFM10) || defined(CPU_MKV30F128VLF10) || defined(CPU_MKV30F128VLH10) || \
    defined(CPU_MKV30F64VFM10) || defined(CPU_MKV30F64VLF10) || defined(CPU_MKV30F64VLH10))

#define KV30F12810_SERIES

/* CMSIS-style register definitions */
#include "MKV30F12810.h"
/* CPU specific feature definitions */
#include "MKV30F12810_features.h"

#else
    #error "No valid CPU defined!"
#endif

#endif /* __FSL_DEVICE_REGISTERS_H__ */

/*******************************************************************************
 * EOF
 ******************************************************************************/
