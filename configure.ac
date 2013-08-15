#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([ompi-plugin], [0.8], [])
AC_CONFIG_SRCDIR([v1.7/orte/mca/odls/yarn/odls_yarn.h])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_AUX_DIR([config])
AC_CONFIG_MACRO_DIR([m4])


AM_INIT_AUTOMAKE(1.8 foreign -Wall -Werror)

# Checks for programs.
AC_PROG_CXX
AC_PROG_AWK
AC_PROG_CC
AC_PROG_CPP
AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_MAKE_SET
AC_PROG_RANLIB

#if we will create lib
AM_PROG_AR
AC_PROG_LIBTOOL
LT_INIT

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([arpa/inet.h fcntl.h netdb.h netinet/in.h stddef.h stdint.h stdlib.h string.h sys/param.h sys/socket.h sys/time.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_C_INLINE
AC_TYPE_INT16_T
AC_TYPE_INT32_T
AC_TYPE_INT64_T
AC_TYPE_INT8_T
AC_TYPE_SIZE_T
AC_TYPE_UINT16_T
AC_TYPE_UINT32_T
AC_TYPE_UINT64_T
AC_TYPE_UINT8_T

# Checks for library functions.
AC_FUNC_MALLOC
AC_FUNC_REALLOC
AC_FUNC_STRTOD
AC_CHECK_FUNCS([bzero gethostbyname gethostname gettimeofday memmove memset socket strchr strdup strstr strtol strtoul])

AC_CONFIG_FILES([Makefile
                 common/Makefile
                 v1.7/Makefile
                 v1.7/orte/Makefile
                 v1.7/orte/mca/Makefile
                 v1.7/orte/mca/odls/Makefile
                 v1.7/orte/mca/odls/yarn/Makefile
                 v1.7/orte/mca/plm/Makefile
                 v1.7/orte/mca/plm/yarn/Makefile
                 v1.7/orte/mca/ras/Makefile
                 v1.7/orte/mca/ras/yarn/Makefile
                 v1.7/orte/mca/state/Makefile
                 v1.7/orte/mca/state/yarn/Makefile])
AC_OUTPUT