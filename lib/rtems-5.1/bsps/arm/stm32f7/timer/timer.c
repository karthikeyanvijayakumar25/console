/*
 * timer.c
 *
 *  Created on: Nov 29, 2020
 *      Author: embeddeduser
 */
#include <bsp.h>
#include <bsp/timer.h>
#include <bsp/irq.h>
#include <rtems/score/armv7m.h>
#include <rtems/btimer.h>
#include <stm32f7xx_hal.h>
#include <stm32f7xx_it.h>

static bool benchmark_timer_find_average_overhead;

extern TIM_HandleTypeDef htim5;
extern void MX_TIM5_Init(void);

/*
 * Initialize Systick/HAL  timer
 */
void hal_timer_initialize(void)
{
   /* Setup HAL tick timer */
    _ARMV7M_Set_exception_priority_and_handler(
           ARMV7M_VECTOR_IRQ(STM32F7_IRQ_TIM7),
           BSP_ARMV7M_IRQ_PRIORITY_DEFAULT,
           TIM7_IRQHandler
    );
}

/*
 * Initialize Benchmark timer
 */
void benchmark_timer_initialize(void)
{
   if (HAL_TIM_Base_GetState(&htim5) == HAL_TIM_STATE_RESET)
   {
      MX_TIM5_Init();
   }
   else
   {
      HAL_TIM_Base_Stop(&htim5);
      __HAL_TIM_SetCounter(&htim5, 0);
   }

   HAL_TIM_Base_Start(&htim5);
}

/*
 * Benchmark timer Read function
 */
benchmark_timer_t benchmark_timer_read(void)
{
  if (benchmark_timer_find_average_overhead)
  {
     /* Overhead is always less than 1 micro-second */
     return 0;
  }
  else
  {
     return __HAL_TIM_GetCounter(&htim5);
  }
}

/*
 * Benchmark timer Disable Subtracting Average Overhead.
 */
void benchmark_timer_disable_subtracting_average_overhead(
  bool find_flag
)
{
  benchmark_timer_find_average_overhead = find_flag;
}




