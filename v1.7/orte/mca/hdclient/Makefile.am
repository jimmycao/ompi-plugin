AM_CPPFLAGS = -I$(prefix)/include/openmpi

# main library setup
#mcacomponentdir = $(libdir)/openmpi
#mcacomponent_LTLIBRARIES = mca_hdclient.la
#mca_hdclient_la_SOURCES =
#mca_odls_yarn_la_LDFLAGS = -module -avoid-version 
#-----------------
lib_LTLIBRARIES = libmca_hdclient.la
#noinst_LTLIBRARIES = libmca_hdclient.la
libmca_hdclient_la_SOURCES =

# pkgdata setup
dist_pkgdata_DATA = hamster_protos.pb

# local files
headers = hdclient.h
ortedir = $(includedir)/openmpi/$(subdir)
nobase_orte_HEADERS = $(headers)

include base/Makefile.am

distclean-local: 
	rm -f base/static-components.h

install-data-local:
	$(MKDIR_P) $(DESTDIR)$(sysconfdir)/protos/
	$(INSTALL_DATA) hamster_protos.pb $(DESTDIR)$(sysconfdir)/protos/

uninstall-local:
	rm -rf $(DESTDIR)$(sysconfdir)/protos/hamster_protos.pb
	
	
	
#mcacomponentdir = $(libdir)/openmpi
#mcacomponent_LTLIBRARIES = mca_plm_yarn.la
#lib_LTLIBRARIES = mca_plm_yarn.la
#mca_plm_yarn_la_SOURCES = $(sources) 
#mca_plm_yarn_la_LIBADD = -L/Users/caoj7/program/orte/lib -L/Users/caoj7/program/orte/lib/openmpi -lopen-rte -lopen-pal
#mca_plm_yarn_la_LDFLAGS = -module -avoid-version 