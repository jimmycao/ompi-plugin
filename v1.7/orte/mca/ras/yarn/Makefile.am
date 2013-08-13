AUTOMAKE_OPTIONS = foreign
AM_CPPFLAGS = -I$(prefix)/include/openmpi -I$(prefix)/include/openmpi/opal/mca/event/libevent2019/libevent -I$(prefix)/include/openmpi/opal/mca/hwloc/hwloc152/hwloc/include

sources = \
        ras_yarn.h \
        ras_yarn_component.c \
        ras_yarn_module.c

lib_LTLIBRARIES = mca_ras_yarn.la
mca_ras_yarn_la_SOURCES = $(sources) 
mca_ras_yarn_la_LIBADD = -L/Users/caoj7/program/orte/lib -L/Users/caoj7/program/orte/lib/openmpi -lopen-rte -lopen-pal
mca_ras_yarn_la_LDFLAGS = -module -avoid-version 

#lib_LTLIBRARIES = libmca_ras_yarn.la
#libmca_ras_yarn_la_SOURCES = $(sources) 
#libmca_ras_yarn_la_LIBADD = -L/Users/caoj7/program/orte/lib -L/Users/caoj7/program/orte/lib/openmpi -lopen-rte -lopen-pal
#libmca_ras_yarn_la_LDFLAGS = -module -avoid-version 