AM_CPPFLAGS = -I$(prefix)/include/openmpi

# main library setup
lib_LTLIBRARIES = libmca_hdclient.la
#noinst_LTLIBRARIES = libmca_hdclient.la
libmca_hdclient_la_SOURCES =

# pkgdata setup
dist_pkgdata_DATA = hamster_protos.pb

# local files
headers = hdclient.h

# Conditionally install the header files
#if WANT_INSTALL_HEADERS
#ortedir = $(includedir)/openmpi/$(subdir)
#nobase_orte_HEADERS = $(headers)
#endif

include base/Makefile.am

distclean-local: 
	rm -f base/static-components.h

install-data-local:
	$(MKDIR_P) $(DESTDIR)$(sysconfdir)/protos/
	$(INSTALL_DATA) hamster_protos.pb $(DESTDIR)$(sysconfdir)/protos/

uninstall-local:
	rm -rf $(DESTDIR)$(sysconfdir)/protos/hamster_protos.pb
