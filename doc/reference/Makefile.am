# Process this file with automake to produce Makefile.in

# see /gtk-doc/examples/Makefile.am

# We require automake 1.6 at least.
AUTOMAKE_OPTIONS = 1.6

# The name of the module, e.g. 'glib'.
DOC_MODULE=gtranslator

# The top-level SGML file. You can change this if you want to.
DOC_MAIN_SGML_FILE=$(DOC_MODULE)-docs.sgml

# The directory containing the source code. Relative to $(srcdir).
# gtk-doc will search all .c & .h files beneath here for inline comments
# documenting the functions and macros.
DOC_SOURCE_DIR=../../src

# Extra options to pass to gtkdoc-scangobj. Not normally needed.
SCANGOBJ_OPTIONS=

# Extra options to supply to gtkdoc-scan.
# e.g. SCAN_OPTIONS=--deprecated-guards="GTK_DISABLE_DEPRECATED" 
SCAN_OPTIONS=

# Extra options to supply to gtkdoc-mkdb.
MKDB_OPTIONS=--sgml-mode --output-format=xml

# Extra options to supply to gtkdoc-mktmpl
# e.g. MKTMPL_OPTIONS=--only-section-tmpl
MKTMPL_OPTIONS=

# Extra options to supply to gtkdoc-fixref. Not normally needed.
# e.g. FIXXREF_OPTIONS=--extra-dir=../gdk-pixbuf/html --extra-dir=../gdk/html
FIXXREF_OPTIONS=

# Used for dependencies. The docs will be rebuilt if any of these change.
HFILE_GLOB= 					\
	$(top_srcdir)/src/*.h			\
	$(top_srcdir)/src/plugin-system/*.h	\
	$(top_srcdir)/src/translation-memory/*.h
	
CFILE_GLOB=					\
	$(top_srcdir)/src/*.c			\
	$(top_srcdir)/src/plugin-system/*.c	\
	$(top_srcdir)/src/translation-memory/*.c

# Header files to ignore when scanning (These are internal to gedit).
IGNORE_HFILES=			\
	actions.h		\
	preferences-dialog.h	\
	draw-spaces.h		\
	module.h		\
	gtranslator-marshall.h	\
	gtranslator-enum-types.h\
	prefs-manager-private.h \
	search-dialog.h		\
	header-dialog.h		\
	comment-dialog.h	

# Images to copy into HTML directory.
HTML_IMAGES= figures/ExtendedClassDiagram.png figures/SingleClassDiagram.png

# Extra SGML files that are included by $(DOC_MAIN_SGML_FILE).
# e.g. content_files=running.sgml building.sgml changes-2.0.sgml
content_files=version.xml

# SGML files where gtk-doc abbrevations (#GtkWidget) are expanded
# These files must be listed here *and* in content_files
# e.g. expand_content_files=running.sgml
expand_content_files=

# CFLAGS and LDFLAGS for compiling gtkdoc-scangobj with your library.
# Only needed if you are using gtkdoc-scangobj to dynamically query widget
# signals and properties.
GTKDOC_CFLAGS=	\
	-I$(top_srcdir)/src			\
	-I$(top_srcdir)/src/plugin-system	\
	-I$(top_srcdir)/src/toolbareditor	\
	-I$(top_srcdir)/src/translation-memory	\
	-I$(top_builddir)/src			\
	-I$(top_srcdir)				\
	-I$(top_builddir)			\
	$(GTRANSLATOR_CFLAGS)

GTKDOC_LIBS=	\
	$(top_builddir)/src/libgtranslator.la	\
	$(GTRANSLATOR_LIBS)

# This includes the standard gtk-doc make rules, copied by gtkdocize.
include $(top_srcdir)/gtk-doc.make

# Other files to distribute
# e.g. EXTRA_DIST += version.xml.in
EXTRA_DIST += version.xml.in

-include $(top_srcdir)/git.mk
