/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 if you have the declaration of `pthread_attr_getaffinity_np',
   and to 0 if you don't. */
#define HAVE_DECL_PTHREAD_ATTR_GETAFFINITY_NP 1

/* Define to 1 if you have the declaration of `pthread_attr_getguardsize', and
   to 0 if you don't. */
#define HAVE_DECL_PTHREAD_ATTR_GETGUARDSIZE 1

/* Define to 1 if you have the declaration of `pthread_attr_getstack', and to
   0 if you don't. */
#define HAVE_DECL_PTHREAD_ATTR_GETSTACK 1

/* Define to 1 if you have the declaration of `pthread_attr_setaffinity_np',
   and to 0 if you don't. */
#define HAVE_DECL_PTHREAD_ATTR_SETAFFINITY_NP 1

/* Define to 1 if you have the declaration of `pthread_attr_setguardsize', and
   to 0 if you don't. */
#define HAVE_DECL_PTHREAD_ATTR_SETGUARDSIZE 1

/* Define to 1 if you have the declaration of `pthread_attr_setstack', and to
   0 if you don't. */
#define HAVE_DECL_PTHREAD_ATTR_SETSTACK 1

/* Define to 1 if you have the declaration of `pthread_getaffinity_np', and to
   0 if you don't. */
#define HAVE_DECL_PTHREAD_GETAFFINITY_NP 1

/* Define to 1 if you have the declaration of `pthread_getattr_np', and to 0
   if you don't. */
#define HAVE_DECL_PTHREAD_GETATTR_NP 1

/* Define to 1 if you have the declaration of `pthread_setaffinity_np', and to
   0 if you don't. */
#define HAVE_DECL_PTHREAD_SETAFFINITY_NP 1

/* Define to 1 if you have the declaration of `rcmd', and to 0 if you don't.
   */
#define HAVE_DECL_RCMD 0

/* Define to 1 if you have the declaration of `_Timecounter_Time_second', and
   to 0 if you don't. */
#define HAVE_DECL__TIMECOUNTER_TIME_SECOND 0

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* mprotect(const void *, ...) */
/* #undef HAVE_MPROTECT_CONST */

/* Define to 1 if you have the `pthread_attr_getaffinity_np' function. */
/* #undef HAVE_PTHREAD_ATTR_GETAFFINITY_NP */

/* Define to 1 if you have the `pthread_attr_getguardsize' function. */
/* #undef HAVE_PTHREAD_ATTR_GETGUARDSIZE */

/* Define to 1 if you have the `pthread_attr_getstack' function. */
/* #undef HAVE_PTHREAD_ATTR_GETSTACK */

/* Define to 1 if you have the `pthread_attr_setaffinity_np' function. */
/* #undef HAVE_PTHREAD_ATTR_SETAFFINITY_NP */

/* Define to 1 if you have the `pthread_attr_setguardsize' function. */
/* #undef HAVE_PTHREAD_ATTR_SETGUARDSIZE */

/* Define to 1 if you have the `pthread_attr_setstack' function. */
/* #undef HAVE_PTHREAD_ATTR_SETSTACK */

/* Define to 1 if the system has the type `pthread_barrier_t'. */
#define HAVE_PTHREAD_BARRIER_T 1

/* Define to 1 if you have the `pthread_getaffinity_np' function. */
/* #undef HAVE_PTHREAD_GETAFFINITY_NP */

/* Define to 1 if you have the `pthread_getattr_np' function. */
/* #undef HAVE_PTHREAD_GETATTR_NP */

/* pthread_mutex_getprioceiling(const pthread_mutex_t *, ...) */
#define HAVE_PTHREAD_MUTEX_GETCEILING_CONST /**/

/* Define to 1 if the system has the type `pthread_rwlock_t'. */
#define HAVE_PTHREAD_RWLOCK_T 1

/* Define to 1 if you have the `pthread_setaffinity_np' function. */
/* #undef HAVE_PTHREAD_SETAFFINITY_NP */

/* pthread_setschedparam(..., const struct sched_param *) */
#define HAVE_PTHREAD_SETSCHEDPARAM_CONST /**/

/* Define to 1 if the system has the type `pthread_spinlock_t'. */
#define HAVE_PTHREAD_SPINLOCK_T 1

/* Define to 1 if you have the <stdatomic.h> header file. */
/* #undef HAVE_STDATOMIC_H */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if the system has the type `struct _Priority_Node'. */
#define HAVE_STRUCT__PRIORITY_NODE 1

/* Define to 1 if the system has the type `struct _pthread_cleanup_context'.
   */
#define HAVE_STRUCT__PTHREAD_CLEANUP_CONTEXT 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://devel.rtems.org/newticket"

/* Define to the full name of this package. */
#define PACKAGE_NAME "rtems-cpukit"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "rtems-cpukit 5.1.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "rtems-cpukit"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "5.1.0"

/* if RTEMS_DEBUG is enabled */
/* #undef RTEMS_DEBUG */

/* if driver manager api is supported */
/* #undef RTEMS_DRVMGR_STARTUP */

/* if multiprocessing is enabled */
/* #undef RTEMS_MULTIPROCESSING */

/* if networking is enabled */
#define RTEMS_NETWORKING 1

/* if using newlib */
#define RTEMS_NEWLIB 1

/* PARAVIRT is enabled */
/* #undef RTEMS_PARAVIRT */

/* if posix api is supported */
#define RTEMS_POSIX_API 1

/* if profiling is enabled */
#define RTEMS_PROFILING 1

/* if SMP is enabled */
/* #undef RTEMS_SMP */

/* RTEMS version string */
#define RTEMS_VERSION "5.1.0"

/* The size of `blkcnt_t', as computed by sizeof. */
#define SIZEOF_BLKCNT_T 4

/* The size of `blksize_t', as computed by sizeof. */
#define SIZEOF_BLKSIZE_T 4

/* The size of `mode_t', as computed by sizeof. */
#define SIZEOF_MODE_T 4

/* The size of `off_t', as computed by sizeof. */
#define SIZEOF_OFF_T 8

/* The size of `size_t', as computed by sizeof. */
#define SIZEOF_SIZE_T 4

/* The size of `time_t', as computed by sizeof. */
#define SIZEOF_TIME_T 8

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if ada/gnat bindings are built-in */
/* #undef __RTEMS_ADA__ */

/* major version portion of an RTEMS release */
#define __RTEMS_MAJOR__ 5

/* minor version portion of an RTEMS release */
#define __RTEMS_MINOR__ 1

/* revision version portion of an RTEMS release */
#define __RTEMS_REVISION__ 0

/* sizeof(blkcnt_t) */
#define __RTEMS_SIZEOF_BLKCNT_T__ 4

/* sizeof(blksize_t) */
#define __RTEMS_SIZEOF_BLKSIZE_T__ 4

/* sizeof(mode_t) */
#define __RTEMS_SIZEOF_MODE_T__ 4

/* sizeof(off_t) */
#define __RTEMS_SIZEOF_OFF_T__ 8

/* sizeof(time_t) */
#define __RTEMS_SIZEOF_TIME_T__ 8
