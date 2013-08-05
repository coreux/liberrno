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

AC_INIT([liberrno],[master])
AM_INIT_AUTOMAKE([foreign])
AC_CONFIG_MACRO_DIR([m4])
AM_MAINTAINER_MODE

BT_PROG_XCODE
AC_PROG_CC
AC_PROG_CC_C99
BT_PROG_CC_WARN
LT_INIT
AC_CHECK_HEADER([ux/cdefs.h],,[AC_MSG_ERROR([cannot locate required ux/cdefs.h; ensure the UX include package is installed])])

AC_CONFIG_FILES([Makefile
ux/Makefile
ux/beos/Makefile
ux/darwin/Makefile
ux/linux/Makefile
ux/minix/Makefile
ux/solaris/Makefile
])

AC_OUTPUT
