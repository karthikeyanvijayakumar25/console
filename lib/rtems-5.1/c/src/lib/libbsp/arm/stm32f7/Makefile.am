ACLOCAL_AMFLAGS = -I ../../../../aclocal

include $(top_srcdir)/../../../../automake/compile.am
include $(top_srcdir)/../../bsp.am

###############################################################################
#                  Data                                                       #
###############################################################################

dist_project_lib_DATA = ../../../../../../bsps/arm/stm32f7/start/bsp_specs

start.$(OBJEXT): ../../../../../../bsps/arm/shared/start/start.S
	$(CPPASCOMPILE) -o $@ -c $<
project_lib_DATA = start.$(OBJEXT)

project_lib_DATA += linkcmds
dist_project_lib_DATA += ../../../../../../bsps/arm/stm32f7/start/linkcmds.stm32f7

###############################################################################
#                  Header                                                     #
###############################################################################

###############################################################################
#                  LibBSP                                                     #
###############################################################################

project_lib_LIBRARIES = librtemsbsp.a
librtemsbsp_a_CPPFLAGS = $(AM_CPPFLAGS)
librtemsbsp_a_SOURCES =

librtemsbsp_a_CPPFLAGS += -DUSE_HAL_DRIVER -DSTM32F767xx
librtemsbsp_a_CPPFLAGS += -I$(RTEMS_SOURCE_ROOT)/bsps/arm/stm32f7/hal/Core/Inc
librtemsbsp_a_CPPFLAGS += -I$(RTEMS_SOURCE_ROOT)/bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Inc
librtemsbsp_a_CPPFLAGS += -I$(RTEMS_SOURCE_ROOT)/bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy
librtemsbsp_a_CPPFLAGS += -I$(RTEMS_SOURCE_ROOT)/bsps/arm/stm32f7/hal/Drivers/CMSIS/Device/ST/STM32F7xx/Include
librtemsbsp_a_CPPFLAGS += -I$(RTEMS_SOURCE_ROOT)/bsps/arm/stm32f7/hal/Drivers/CMSIS/Include

# Shared
librtemsbsp_a_SOURCES += ../../../../../../bsps/shared/dev/getentropy/getentropy-cpucounter.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/shared/start/bspfatal-default.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/shared/start/bspgetworkarea-default.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/shared/dev/cpucounter/cpucounterfrequency.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/shared/dev/cpucounter/cpucounterread.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/shared/start/sbrk.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/shared/start/stackalloc.c

# Startup
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/shared/start/bsp-start-memcpy.S
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/start/bspstart.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/start/bspstarthook.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/start/bspreset.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/start/io.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/start/rcc.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/start/start-config-io.c

# IRQ
librtemsbsp_a_SOURCES += ../../../../../../bsps/shared/irq/irq-default-handler.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/shared/irq/irq-armv7m.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/shared/irq/irq-dispatch-armv7m.c

# Console
librtemsbsp_a_SOURCES += ../../../../../../bsps/shared/dev/serial/legacy-console.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/shared/dev/serial/legacy-console-control.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/shared/dev/serial/legacy-console-select.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/console/console-config.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/console/usart.c

# I2C
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/i2c/i2c.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/i2c/i2c-config.c

# Clock
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/shared/clock/clock-armv7m.c

# Timer
librtemsbsp_a_SOURCES += ../../../../../../bsps/shared/dev/btimer/btimer-stub.c

# Cache
librtemsbsp_a_SOURCES += ../../../../../../bsps/shared/cache/nocache.c

# Benchmark Timer
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/timer/timer.c

# HAL
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_crc_ex.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_wwdg.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dac.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_crc.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dma.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dma_ex.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_spi.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_pwr_ex.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_rtc_ex.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_rtc.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_pwr.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_rcc.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_i2c_ex.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_rcc_ex.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_tim.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_flash.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_gpio.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_tim_ex.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_iwdg.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_adc.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_i2c.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_adc_ex.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_cortex.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_flash_ex.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_uart.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_dac_ex.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_eth.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Core/Src/main.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Core/Src/system_stm32f7xx.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Core/Src/stm32f7xx_it.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Core/Src/stm32f7xx_hal_timebase_tim.c
librtemsbsp_a_SOURCES += ../../../../../../bsps/arm/stm32f7/hal/Core/Src/stm32f7xx_hal_msp.c



###############################################################################
#                  Special Rules                                              #
###############################################################################


include $(srcdir)/../../../../../../bsps/shared/irq-sources.am
include $(srcdir)/../../../../../../bsps/shared/shared-sources.am
include $(srcdir)/../../../../../../bsps/arm/stm32f7/headers.am
