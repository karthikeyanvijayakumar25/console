#
# BSP specific settings. To be included in application Makefiles
#
# This support will be removed from RTEMS. Please consider other
# ways to build applications.
#

RTEMS_API = 5

RTEMS_CPU = arm
RTEMS_BSP = stm32f7

prefix = /opt/rtems-5
exec_prefix = /opt/rtems-5/arm-rtems5

CC_FOR_TARGET = arm-rtems5-gcc --pipe
CXX_FOR_TARGET = arm-rtems5-g++
AS_FOR_TARGET = arm-rtems5-as
AR_FOR_TARGET = arm-rtems5-ar
NM_FOR_TARGET = arm-rtems5-nm
LD_FOR_TARGET = arm-rtems5-ld
SIZE_FOR_TARGET = arm-rtems5-size
OBJCOPY_FOR_TARGET = arm-rtems5-objcopy

CC= $(CC_FOR_TARGET)
CXX= $(CXX_FOR_TARGET)
AS= $(AS_FOR_TARGET)
LD= $(LD_FOR_TARGET)
NM= $(NM_FOR_TARGET)
AR= $(AR_FOR_TARGET)
SIZE= $(SIZE_FOR_TARGET)
OBJCOPY= $(OBJCOPY_FOR_TARGET)

export CC
export CXX
export AS
export LD
export NM
export AR
export SIZE
export OBJCOPY

RTEMS_ROOT  ?= $(prefix)
PROJECT_ROOT = $(RTEMS_ROOT)
RTEMS_CUSTOM = $(RTEMS_ROOT)/make/custom/$(RTEMS_BSP).cfg
RTEMS_SHARE  = $(RTEMS_ROOT)/share/rtems$(RTEMS_API)

RTEMS_USE_OWN_PDIR = no
RTEMS_HAS_POSIX_API = yes
RTEMS_HAS_ITRON_API = no
RTEMS_HAS_CPLUSPLUS = yes

export RTEMS_BSP
export RTEMS_CUSTOM
export PROJECT_ROOT
