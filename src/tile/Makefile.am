#############
# libniftyled Makefile.am
# v0.4 - Daniel Hiepler <daniel@niftylight.de>


include $(top_srcdir)/src/Makefile.global.am

EXTRA_DIST = _tile.h


# targets
noinst_LTLIBRARIES = libtile.la

# sources
libtile_la_SOURCES = \
	tile.c

# cflags
libtile_la_CFLAGS = \
	$(COMMON_CFLAGS_N)

# linker flags
libtile_la_LDFLAGS = \
	$(COMMON_LDFLAGS_N)
