/**
 * @file
 * @ingroup RTEMSBSPsARMSTM32F7
 * @brief Global BSP definitions.
 */

/*
 * Copyright (c) 2012 Sebastian Huber.  All rights reserved.
 *
 *  embedded brains GmbH
 *  Obere Lagerstr. 30
 *  82178 Puchheim
 *  Germany
 *  <rtems@embedded-brains.de>
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rtems.org/license/LICENSE.
 */

#ifndef LIBBSP_ARM_STM32F7_BSP_H
#define LIBBSP_ARM_STM32F7_BSP_H

/**
 * @defgroup RTEMSBSPsARMSTM32F7 STM32F7
 *
 * @ingroup RTEMSBSPsARM
 *
 * @brief STM32F7 Board Support Package.
 *
 * @{
 */

#include <bspopts.h>
#include <bsp/default-initial-extension.h>

#include <rtems.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define BSP_FEATURE_IRQ_EXTENSION

#define BSP_ARMV7M_IRQ_PRIORITY_DEFAULT (13 << 4)

#define BSP_ARMV7M_SYSTICK_PRIORITY (14 << 4)

#define BSP_ARMV7M_SYSTICK_FREQUENCY STM32F7_HCLK

#ifdef __cplusplus
}
#endif /* __cplusplus */

/** @} */


#endif /* LIBBSP_ARM_STM32F7_BSP_H */
