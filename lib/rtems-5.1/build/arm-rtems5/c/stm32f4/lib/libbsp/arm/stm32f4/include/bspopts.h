/* BSP dependent options file */
/* automatically generated -- DO NOT EDIT!! */

#ifndef __BSP_OPTIONS_H
#define __BSP_OPTIONS_H

/* include/bspopts.tmp.  Generated from bspopts.h.in by configure.  */
/* bspopts.h.in.  Generated from configure.ac by autoheader.  */

/* If defined to a non-zero value, print a message and wait until pressed
   before resetting board when application exits. */
#define BSP_PRESS_KEY_FOR_RESET 0

/* If defined to a non-zero value, prints the exception context when an
   unexpected exception occurs. */
#define BSP_PRINT_EXCEPTION_CONTEXT 1

/* If defined to a non-zero value, reset the board when the application exits.
   */
#define BSP_RESET_BOARD_AT_EXIT 1

/* If defined to a non-zero value, prints the some information in case of a
   fatal error. */
#define BSP_VERBOSE_FATAL_EXTENSION 1







/* The RTEMS BSP name */
#define RTEMS_BSP stm32f4

/* enable I2C 1 */
/* #undef STM32F4_ENABLE_I2C1 */

/* enable I2C 2 */
/* #undef STM32F4_ENABLE_I2C2 */

/* enable UART 4 */
/* #undef STM32F4_ENABLE_UART_4 */

/* enable UART 5 */
/* #undef STM32F4_ENABLE_UART_5 */

/* enable USART 1 */
/* #undef STM32F4_ENABLE_USART_1 */

/* enable USART 2 */
/* #undef STM32F4_ENABLE_USART_2 */

/* enable USART 3 */
#define STM32F4_ENABLE_USART_3 1

/* enable USART 6 */
/* #undef STM32F4_ENABLE_USART_6 */

/* Chip belongs to the STM32F10XXX family. */
/* #undef STM32F4_FAMILY_F10XXX */

/* Chip belongs to the STM32F4XXXX family. */
#define STM32F4_FAMILY_F4XXXX 1

/* HCLK frequency in Hz */
#define STM32F4_HCLK 16000000

/* HSE oscillator frequency in Hz */
#define STM32F4_HSE_OSCILLATOR 8000000

/* PCLK1 frequency in Hz */
#define STM32F4_PCLK1 16000000

/* PCLK2 frequency in Hz */
#define STM32F4_PCLK2 16000000

/* SYSCLK frequency in Hz */
#define STM32F4_SYSCLK 16000000

/* baud for USARTs */
#define STM32F4_USART_BAUD 115200

#endif /* __BSP_OPTIONS_H */