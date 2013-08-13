AUTOMAKE_OPTIONS = foreign
AM_CPPFLAGS = -I$(prefix)/include/openmpi -I$(prefix)/include/openmpi/opal/mca/event/libevent2019/libevent -I$(prefix)/include/openmpi/opal/mca/hwloc/hwloc152/hwloc/include

sources = \
        odls_yarn.h \
        odls_yarn_component.c \
        odls_yarn_module.c

lib_LTLIBRARIES = mca_odls_yarn.la
mca_odls_yarn_la_SOURCES = $(sources) 
mca_odls_yarn_la_LIBADD = -L/Users/caoj7/program/orte/lib -L/Users/caoj7/program/orte/lib/openmpi -lopen-rte -lopen-pal
mca_odls_yarn_la_LDFLAGS = -module -avoid-version 

#lib_LTLIBRARIES = libmca_odls_yarn.la
#libmca_odls_yarn_la_SOURCES = $(sources) 
#libmca_odls_yarn_la_LIBADD = -L/Users/caoj7/program/orte/lib -L/Users/caoj7/program/orte/lib/openmpi -lopen-rte -lopen-pal
#libmca_odls_yarn_la_LDFLAGS = -module -avoid-version 