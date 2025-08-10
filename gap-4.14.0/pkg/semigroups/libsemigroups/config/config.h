/* config/config.h.  Generated from config.h.in by configure.  */
/* config/config.h.in.  Generated from configure.ac by autoheader.  */

/* define if building with backward-cpp enabled */
#define BACKWARD_ENABLED 1

/* define if building in debug mode */
/* #undef DEBUG */

/* define if building with eigen */
#define EIGEN_ENABLED 1

/* define if building with stats mode */
#define ENABLE_STATS 1

/* define if building with fmt */
/* #undef FMT_ENABLED */

/* define if the compiler supports basic C++14 syntax */
#define HAVE_CXX14 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the 'gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the 'pthread' library (-lpthread). */
#define HAVE_LIBPTHREAD 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if your system has a GNU libc compatible 'malloc' function, and
   to 0 otherwise. */
#define HAVE_MALLOC 1

/* Define to 1 if you have the 'memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the 'pow' function. */
#define HAVE_POW 1

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD 1

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Have PTHREAD_PRIO_INHERIT. */
#define HAVE_PTHREAD_PRIO_INHERIT 1

/* Define to 1 if the system has the type 'ptrdiff_t'. */
#define HAVE_PTRDIFF_T 1

/* Define to 1 if you have the 'sqrt' function. */
#define HAVE_SQRT 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <x86intrin.h> header file. */
/* #undef HAVE_X86INTRIN_H */

/* Define to 1 if the system has the type '_Bool'. */
#define HAVE__BOOL 1

/* Define to 1 if the system has the `__builtin_clzll' built-in function */
#define HAVE___BUILTIN_CLZLL 1

/* Define to 1 if the system has the `__builtin_popcountl' built-in function
   */
#define HAVE___BUILTIN_POPCOUNTL 1

/* define if building with HPCombi */
/* #undef HPCOMBI_ENABLED */

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "libsemigroups"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "jdm3@st-andrews.ac.uk"

/* Define to the full name of this package. */
#define PACKAGE_NAME "libsemigroups"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "libsemigroups 2.7.3"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "libsemigroups"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.7.3"

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* The size of 'void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* Define to 1 if all of the C89 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* define as 1 if we should try and use the __builtin_clzlll function if
   available */
#define USE_CLZLL 1

/* define as 1 if we should try and use the __builtin_popcntl function if
   available */
#define USE_POPCNT 1

/* define if building in verbose mode */
/* #undef VERBOSE */

/* Version number of package */
#define VERSION "2.7.3"

/* Define for Solaris 2.5.1 so the uint64_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT64_T */

/* Define to '__inline__' or '__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to the type of a signed integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int64_t */

/* Define to rpl_malloc if the replacement function should be used. */
/* #undef malloc */

/* Define as 'unsigned int' if <stddef.h> doesn't define. */
/* #undef size_t */

/* Define to the type of an unsigned integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint64_t */
