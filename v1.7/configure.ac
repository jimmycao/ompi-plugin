#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.58])
AC_INIT([ompi-plugin-1.7.2], [0.8], [])
AC_CONFIG_SRCDIR([orte/mca/odls/yarn/odls_yarn.h])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_AUX_DIR([config])
AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE(1.8 foreign -Wall -Werror)
# Checks for programs.
AC_PROG_CC

#if we will create lib
AM_PROG_AR
AC_PROG_LIBTOOL
LT_INIT

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([arpa/inet.h fcntl.h inttypes.h netdb.h netinet/in.h stdint.h stdlib.h string.h sys/ioctl.h sys/socket.h unistd.h utime.h utmp.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_HEADER_STDBOOL
AC_TYPE_UID_T
#AC_TYPE_INT32_T
AC_TYPE_PID_T
#AC_TYPE_SIZE_T
#AC_TYPE_SSIZE_T
#AC_TYPE_UINT16_T
#AC_TYPE_UINT32_T

# Checks for library functions.
AC_FUNC_CHOWN
AC_FUNC_MALLOC
AC_FUNC_REALLOC
AC_CHECK_FUNCS([bzero inet_ntoa mkdir rmdir setenv socket strdup strrchr strstr strtoul utime])

AC_CONFIG_FILES([Makefile
               	orte/Makefile
               	orte/mca/Makefile
               	orte/mca/odls/Makefile
               	orte/mca/plm/Makefile
               	orte/mca/ras/Makefile
               	orte/mca/state/Makefile
               	orte/mca/odls/yarn/Makefile
               	orte/mca/plm/yarn/Makefile
               	orte/mca/ras/yarn/Makefile
               	orte/mca/state/yarn/Makefile
               	orte/mca/hdclient/Makefile
                 ])
AC_OUTPUT