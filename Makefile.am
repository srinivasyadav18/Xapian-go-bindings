## Process this file with automake to produce Makefile.in

include ../generic/generic.mk

all : shellscript
## Test programs to be run
AM_TESTS_ENVIRONMENT = \
 abs_builddir='$(abs_builddir)' ;\
 srcdir='$(srcdir)' ;\
 export abs_builddir ;\
 export srcdir ;

BUILT_SOURCES = shellscript.sh

EXTRA_DIST = go.i util.i extra.i extracomments.i except.i \
 generate-go-exceptions \
 smoketest.go \
 $(TESTS) $(BUILT_SOURCES)

shellscript: runscript
	chmod +x shellscript.sh
runscript: shellscript.sh
	./shellscript.sh
