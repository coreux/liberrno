## Copyright 2013 Mo McRoberts.
##
##  Licensed under the Apache License, Version 2.0 (the "License");
##  you may not use this file except in compliance with the License.
##  You may obtain a copy of the License at
##
##      http://www.apache.org/licenses/LICENSE-2.0
##
##  Unless required by applicable law or agreed to in writing, software
##  distributed under the License is distributed on an "AS IS" BASIS,
##  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
##  See the License for the specific language governing permissions and
##  limitations under the License.

ACLOCAL_AMFLAGS = -I .

EXTRA_DIST = regen-acinclude.sh README liberrno-uninstalled.pc.in liberrno.pc.in

DIST_SUBDIRS = ux

SUBDIRS = ux .

noinst_DATA = liberrno-uninstalled.pc

pcdir = @libdir@/pkgconfig

if BUILD_STANDALONE
lib_LTLIBRARIES = liberrno.la
pc_DATA = liberrno.pc
else
noinst_LTLIBRARIES = liberrno.la
noinst_DATA += liberrno.pc
endif

include_HEADERS = errno.h

liberrno_la_SOURCES = p_liberrno.h \
	errno.c

liberrno_la_CPPFLAGS = @AM_CPPFLAGS@ @UX_CPPFLAGS@

liberrno_la_LDFLAGS = -avoid-version

dist_doc_DATA = LICENSE-2.0
