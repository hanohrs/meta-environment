# $Id$

include $(top_srcdir)/Makefile.java.meta

ACLOCAL_AMFLAGS = -I .

SUBDIRS = lib resources

TOOLNAME = graph-painter

pkgdata_DATA = $(TOOLNAME).idef

EXTRA_DIST += $(TOOLNAME).idef.src

CLEANFILES += $(TOOLNAME).idef

%.idef: %.idef.src Makefile
	sed -e 's@__PKGDATA__@$(datadir)@g'\
	    -e 's@__LOCAL_JARS__@$(INSTALLED_JARS)@g'\
	    -e "s@__EXTERNAL_JARS__@$(EXTERNAL_JARS)@g"\
	    -e 's@__JARFILE__@$(JAVA_JAR)@g'\
	     < $< > $@
