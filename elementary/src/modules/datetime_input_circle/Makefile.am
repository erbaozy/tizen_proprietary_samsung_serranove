
MAINTAINERCLEANFILES = Makefile.in

AM_CPPFLAGS = \
-DELM_INTERNAL_API_ARGESFSDFEFC=1 \
-I. \
-I$(top_builddir) \
-I$(top_srcdir) \
-I$(top_srcdir)/src/lib \
-I$(top_builddir)/src/lib \
-DPACKAGE_DATA_DIR=\"$(pkgdatadir)\" \
-DPACKAGE_LIB_DIR=\"$(libdir)\" \
-DELEMENTARY_BUILD \
@ELEMENTARY_CFLAGS@

pkgdir = $(pkglibdir)/modules/datetime_input_circle/$(MODULE_ARCH)
pkg_LTLIBRARIES = module.la

module_la_SOURCES = datetime_input_circle.c

module_la_LIBADD = @ELEMENTARY_LIBS@ $(top_builddir)/src/lib/libelementary.la
module_la_LDFLAGS = -no-undefined -module -avoid-version
module_la_LIBTOOLFLAGS = --tag=disable-static
