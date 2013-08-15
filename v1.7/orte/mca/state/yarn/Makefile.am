AUTOMAKE_OPTIONS = foreign
AM_CPPFLAGS = -I$(prefix)/include/openmpi -I$(prefix)/include/openmpi/opal/mca/event/libevent2019/libevent -I$(prefix)/include/openmpi/opal/mca/hwloc/hwloc152/hwloc/include

sources = \
        state_yarn.h \
        state_yarn_component.c \
        state_yarn.c

mcacomponentdir = $(libdir)/openmpi
mcacomponent_LTLIBRARIES = mca_state_yarn.la
mca_state_yarn_la_SOURCES = $(sources) 
mca_state_yarn_la_LIBADD = $(prefix)/lib/libopen-rte.la
#mca_state_yarn_la_LIBADD = -L/Users/caoj7/program/orte/lib -L/Users/caoj7/program/orte/lib/openmpi -lopen-rte -lopen-pal
mca_state_yarn_la_LDFLAGS = -module -avoid-version