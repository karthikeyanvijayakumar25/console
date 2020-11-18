/**
 * @file
 * @ingroup stm32f7_reg
 * @brief Register definitions.
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

#ifndef LIBBSP_ARM_STM32F7_STM32F7_H
#define LIBBSP_ARM_STM32F7_STM32F7_H

#include <bsp/utility.h>
#include <bspopts.h>

#define STM32F7_BASE 0x00

#ifdef STM32F7_FAMILY_F7XXXX

/**
 * @defgroup stm32f7_reg Register Defintions
 * @ingroup RTEMSBSPsARMSTM32F7
 * @brief Register Definitions
 * @{
 */

#define STM32F7_APB1_BASE (STM32F7_BASE + 0x40000000)
#define STM32F7_APB2_BASE (STM32F7_BASE + 0x40010000)
#define STM32F7_AHB1_BASE (STM32F7_BASE + 0x40020000)
#define STM32F7_AHB2_BASE (STM32F7_BASE + 0x50000000)

/**
 * @name STM32f7XXXX GPIO
 * @{
 */

#include <bsp/stm32f7xxxx_gpio.h>
#define STM32F7_GPIO(i) ((volatile stm32f7_gpio *) (STM32F7_BASE + 0x40020000) + (i))

/** @} */

/**
 * @name STM32F7XXXX RCC
 * @{
 */

#include <bsp/stm32f7xxxx_rcc.h>
#define STM32F7_RCC ((volatile stm32f7_rcc *) (STM32F7_AHB1_BASE + 0x3800))

/** @} */

/**
 * @name STM32F7XXXX FLASH
 * @{
 */

#include <bsp/stm32f7xxxx_flash.h>
#define STM32F7_FLASH ((volatile stm32f7_flash *) (STM32F7_BASE + 0x40023C00))

/** @} */

#include <bsp/stm32_i2c.h>

/**
 * @name STM32 I2C
 * @{
 */

#define STM32F7_I2C3 ((volatile stm32f7_i2c *) (STM32F7_BASE + 0x40005C00))
#define STM32F7_I2C2 ((volatile stm32f7_i2c *) (STM32F7_BASE + 0x40005800))
#define STM32F7_I2C1 ((volatile stm32f7_i2c *) (STM32F7_BASE + 0x40005400))

/** @} */

/**
 * @name STM32 USART
 * @{
 */

#include <bsp/stm32_usart.h>
#define STM32F7_USART_1 ((volatile stm32f7_usart *) (STM32F7_BASE + 0x40011000))
#define STM32F7_USART_2 ((volatile stm32f7_usart *) (STM32F7_BASE + 0x40004400))
#define STM32F7_USART_3 ((volatile stm32f7_usart *) (STM32F7_BASE + 0x40004800))
#define STM32F7_USART_4 ((volatile stm32f7_usart *) (STM32F7_BASE + 0x40004c00))
#define STM32F7_USART_5 ((volatile stm32f7_usart *) (STM32F7_BASE + 0x40005000))
#define STM32F7_USART_6 ((volatile stm32f7_usart *) (STM32F7_BASE + 0x40011400))

/** @} */

/**
 * @name STM32f7XXXX PWR
 * @{
 */

#include <bsp/stm32f7xxxx_pwr.h>
#define STM32F7_PWR ((volatile stm32f7_pwr *) (STM32F7_APB1_BASE + 0x7000))

/** @} */

/**
 * @name STM32f7XXXX EXTI
 * @{
 */

#include <bsp/stm32f7xxxx_exti.h>
#define STM32F7_EXTI ((volatile stm32f7_exti *) (STM32F7_APB2_BASE + 0x3c00))

/** @} */

/**
 * @name STM32f7XXXX SYSCFG
 * @{
 */

#include <bsp/stm32f7xxxx_syscfg.h>
#define STM32F7_SYSCFG ((volatile stm32f7_syscfg *) (STM32F7_APB2_BASE + 0x3800))

/** @} */

/**
 * @name STM32f7XXXX FLASH
 * @{
 */

#include <bsp/stm32f7xxxx_flash.h>
#define STM32F7_FLASH ((volatile stm32f7_flash *) (STM32F7_AHB1_BASE + 0x3c00))

/** @} */

/**
 * @name STM32f7XXXX TIM
 * @{
 */

#include <bsp/stm32f7xxxx_tim.h>
#define STM32F7_TIM1 ((volatile stm32f7_tim *) (STM32F7_APB2_BASE + 0x0000))
#define STM32F7_TIM2 ((volatile stm32f7_tim *) (STM32F7_APB1_BASE + 0x0000))
#define STM32F7_TIM3 ((volatile stm32f7_tim *) (STM32F7_APB1_BASE + 0x0400))
#define STM32F7_TIM4 ((volatile stm32f7_tim *) (STM32F7_APB1_BASE + 0x0800))
#define STM32F7_TIM5 ((volatile stm32f7_tim *) (STM32F7_APB1_BASE + 0x0c00))
#define STM32F7_TIM6 ((volatile stm32f7_tim *) (STM32F7_APB1_BASE + 0x1000))
#define STM32F7_TIM7 ((volatile stm32f7_tim *) (STM32F7_APB1_BASE + 0x1400))
#define STM32F7_TIM8 ((volatile stm32f7_tim *) (STM32F7_APB2_BASE + 0x0400))
#define STM32F7_TIM9 ((volatile stm32f7_tim *) (STM32F7_APB2_BASE + 0x4000))
#define STM32F7_TIM10 ((volatile stm32f7_tim *) (STM32F7_APB2_BASE + 0x4400))
#define STM32F7_TIM11 ((volatile stm32f7_tim *) (STM32F7_APB2_BASE + 0x4800))
#define STM32F7_TIM12 ((volatile stm32f7_tim *) (STM32F7_APB1_BASE + 0x1800))
#define STM32F7_TIM13 ((volatile stm32f7_tim *) (STM32F7_APB1_BASE + 0x1c00))
#define STM32F7_TIM14 ((volatile stm32f7_tim *) (STM32F7_APB1_BASE + 0x2000))

/** @} */

/**
 * @name STM32f7XXXX ADC
 * @{
 */

#include <bsp/stm32f7xxxx_adc.h>
#define STM32F7_ADC1 ((volatile stm32f7_adc_chan *) (STM32F7_APB2_BASE + 0x2000))
#define STM32F7_ADC2 ((volatile stm32f7_adc_chan *) (STM32F7_APB2_BASE + 0x2100))
#define STM32F7_ADC3 ((volatile stm32f7_adc_chan *) (STM32F7_APB2_BASE + 0x2200))
#define STM32F7_ADC_COMMON ((volatile stm32f7_adc_com *) (STM32F7_APB2_BASE + 0x2300))

/** @} */

/**
 * @name STM32f7XXXX OTGFS
 * @{
 */

#include <bsp/stm32f7xxxx_otgfs.h>
#define STM32F7_OTGFS_BASE (STM32F7_AHB2_BASE + 0x0000)
#define STM32F7_OTGFS_CORE ((volatile stm32f7_otgfs *) (STM32F7_OTGFS_BASE + 0x000))
#define STM32F7_OTGFS_DEV ((volatile stm32f7_otgfs_dregs *) (STM32F7_OTGFS_BASE + 0x800))
#define STM32F7_OTGFS_INEP ((volatile stm32f7_otgfs_inepregs *) (STM32F7_OTGFS_BASE + 0x900))
#define STM32F7_OTGFS_OUTEP ((volatile stm32f7_otgfs_outepregs *) (STM32F7_OTGFS_BASE + 0xb00))
#define STM32F7_OTGFS_PWRCTL ((volatile stm32f7_otgfs_pwrctlregs *) (STM32F7_OTGFS_BASE + 0xe00))

#define STM32F7_OTGFS_FIFO_BASE (STM32F7_OTGFS_BASE + USB_FIFO_BASE)

/** @} */

#endif /* STM32F7_FAMILY_F7XXXX */

#ifdef STM32F7_FAMILY_F10XXX

/**
 * @name STM32F10 EXTI
 * @{
 */

#include <bsp/stm32f10xxx_exti.h>
#define STM32F7_EXTI ((volatile stm32f7_exti *) (STM32F7_BASE + 0x40010400))

/** @} */

/**
 * @name STM32F10XXX GPIO
 * @{
 */

#include <bsp/stm32f10xxx_gpio.h>
#define STM32F7_GPIO(i) ((volatile stm32f7_gpio *) (STM32F7_BASE + 0x40010800 + i * 0x400))
#define STM32F7_AFIO ((volatile stm32f7_afio *) (STM32F7_BASE + 0x40010000))

/** @} */

/**
 * @name STM32F10XXX RCC
 * @{
 */

#include <bsp/stm32f10xxx_rcc.h>
#define STM32F7_RCC ((volatile stm32f7_rcc *) (STM32F7_BASE + 0x40021000))

/** @} */

/**
 * @name STM32 I2C
 * @{
 */

#include <bsp/stm32_i2c.h>
#define STM32F7_I2C2 ((volatile stm32f7_i2c *) (STM32F7_BASE + 0x40005800))
#define STM32F7_I2C1 ((volatile stm32f7_i2c *) (STM32F7_BASE + 0x40005400))

/** @} */

/**
 * @name STM32 USART
 * @{
 */

#include <bsp/stm32_usart.h>
#define STM32F7_USART_1 ((volatile stm32f7_usart *) (STM32F7_BASE + 0x40013800))
#define STM32F7_USART_2 ((volatile stm32f7_usart *) (STM32F7_BASE + 0x40004400))
#define STM32F7_USART_3 ((volatile stm32f7_usart *) (STM32F7_BASE + 0x40004800))
#define STM32F7_USART_4 ((volatile stm32f7_usart *) (STM32F7_BASE + 0x40004c00))
#define STM32F7_USART_5 ((volatile stm32f7_usart *) (STM32F7_BASE + 0x40005000))

/** @} */

/** @} */

#endif /* STM32F7_FAMILY_F10XXX */

#endif /* LIBBSP_ARM_STM32F7_STM32F7_H */
