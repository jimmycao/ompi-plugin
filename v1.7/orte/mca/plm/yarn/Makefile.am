AUTOMAKE_OPTIONS = foreign
AM_CPPFLAGS = -I$(prefix)/include/openmpi -I$(prefix)/include/openmpi/opal/mca/event/libevent2019/libevent -I$(prefix)/include/openmpi/opal/mca/hwloc/hwloc152/hwloc/include

sources = \
        plm_yarn.h \
        plm_yarn_component.c \
        plm_yarn_module.c


mcacomponentdir = $(libdir)/openmpi
mcacomponent_LTLIBRARIES = mca_plm_yarn.la
#lib_LTLIBRARIES = mca_plm_yarn.la
mca_plm_yarn_la_SOURCES = $(sources) 
mca_plm_yarn_la_LIBADD = -L/Users/caoj7/program/orte/lib -L/Users/caoj7/program/orte/lib/openmpi -lopen-rte -lopen-pal
mca_plm_yarn_la_LDFLAGS = -module -avoid-version 

#lib_LTLIBRARIES = libmca_plm_yarn.la
#libmca_plm_yarn_la_SOURCES = $(sources) 
#libmca_plm_yarn_la_LIBADD = -L/Users/caoj7/program/orte/lib -L/Users/caoj7/program/orte/lib/openmpi -lopen-rte -lopen-pal
#libmca_plm_yarn_la_LDFLAGS = -module -avoid-version 