/**
 * @file
 *
 * @brief Returns a text for an internal error code.
 *
 * @ingroup ClassicFatal
 */

/*
 * Copyright (c) 2012, 2018 embedded brains GmbH.  All rights reserved.
 *
 *  embedded brains GmbH
 *  Dornierstr. 4
 *  82178 Puchheim
 *  Germany
 *  <rtems@embedded-brains.de>
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rtems.org/license/LICENSE.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <rtems/fatal.h>

static const char *const internal_error_text[] = {
  "INTERNAL_ERROR_NO_CONFIGURATION_TABLE",
  "INTERNAL_ERROR_NO_CPU_TABLE",
  "INTERNAL_ERROR_TOO_LITTLE_WORKSPACE",
  "INTERNAL_ERROR_WORKSPACE_ALLOCATION",
  "INTERNAL_ERROR_INTERRUPT_STACK_TOO_SMALL",
  "INTERNAL_ERROR_THREAD_EXITTED",
  "INTERNAL_ERROR_INCONSISTENT_MP_INFORMATION",
  "INTERNAL_ERROR_INVALID_NODE",
  "INTERNAL_ERROR_NO_MPCI",
  "INTERNAL_ERROR_BAD_PACKET",
  "INTERNAL_ERROR_OUT_OF_PACKETS",
  "INTERNAL_ERROR_OUT_OF_GLOBAL_OBJECTS",
  "INTERNAL_ERROR_OUT_OF_PROXIES",
  "INTERNAL_ERROR_INVALID_GLOBAL_ID",
  "INTERNAL_ERROR_BAD_STACK_HOOK",
  "INTERNAL_ERROR_BAD_ATTRIBUTES",
  "INTERNAL_ERROR_IMPLEMENTATION_KEY_CREATE_INCONSISTENCY",
  "INTERNAL_ERROR_IMPLEMENTATION_BLOCKING_OPERATION_CANCEL",
  "INTERNAL_ERROR_THREAD_QUEUE_ENQUEUE_FROM_BAD_STATE",
  "INTERNAL_ERROR_UNLIMITED_AND_MAXIMUM_IS_0",
  "INTERNAL_ERROR_SHUTDOWN_WHEN_NOT_UP",
  "INTERNAL_ERROR_GXX_KEY_ADD_FAILED",
  "INTERNAL_ERROR_GXX_MUTEX_INIT_FAILED",
  "INTERNAL_ERROR_NO_MEMORY_FOR_HEAP",
  "INTERNAL_ERROR_CPU_ISR_INSTALL_VECTOR",
  "INTERNAL_ERROR_RESOURCE_IN_USE",
  "INTERNAL_ERROR_RTEMS_INIT_TASK_ENTRY_IS_NULL",
  "INTERNAL_ERROR_POSIX_INIT_THREAD_ENTRY_IS_NULL",
  "INTERNAL_ERROR_THREAD_QUEUE_DEADLOCK",
  "INTERNAL_ERROR_THREAD_QUEUE_ENQUEUE_STICKY_FROM_BAD_STATE",
  "INTERNAL_ERROR_BAD_THREAD_DISPATCH_DISABLE_LEVEL",
  "INTERNAL_ERROR_BAD_THREAD_DISPATCH_ENVIRONMENT",
  "INTERNAL_ERROR_RTEMS_INIT_TASK_CREATE_FAILED",
  "INTERNAL_ERROR_POSIX_INIT_THREAD_CREATE_FAILED",
  "INTERNAL_ERROR_LIBIO_USER_ENV_KEY_CREATE_FAILED",
  "INTERNAL_ERROR_LIBIO_SEM_CREATE_FAILED",
  "INTERNAL_ERROR_LIBIO_STDOUT_FD_OPEN_FAILED",
  "INTERNAL_ERROR_LIBIO_STDERR_FD_OPEN_FAILED",
  "INTERNAL_ERROR_ILLEGAL_USE_OF_FLOATING_POINT_UNIT",
  "INTERNAL_ERROR_ARC4RANDOM_GETENTROPY_FAIL",
  "INTERNAL_ERROR_NO_MEMORY_FOR_PER_CPU_DATA"
};

const char *rtems_internal_error_text( rtems_fatal_code error )
{
  size_t i = error;
  const char *text = "?";

  if ( i < RTEMS_ARRAY_SIZE( internal_error_text ) ) {
    text = internal_error_text[ i ];
  }

  return text;
}