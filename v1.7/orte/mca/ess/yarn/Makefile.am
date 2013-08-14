AUTOMAKE_OPTIONS = foreign
AM_CPPFLAGS = -I$(prefix)/include/openmpi -I$(prefix)/include/openmpi/opal/mca/event/libevent2019/libevent -I$(prefix)/include/openmpi/opal/mca/hwloc/hwloc152/hwloc/include

sources = \
        ess_yarn.h \
        ess_yarn_component.c \
        ess_yarn_module.c


mcacomponentdir = $(libdir)/openmpi
mcacomponent_LTLIBRARIES = mca_ess_yarn.la
mca_ess_yarn_la_SOURCES = $(sources)
mca_ess_yarn_la_LIBADD = -L/Users/caoj7/program/orte/lib -lopen-rte -lopen-pal -L/Users/caoj7/program/orte/lib/openmpi
mca_ess_yarn_la_LDFLAGS = -module -avoid-version