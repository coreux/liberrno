/*
 * Copyright 2013 Mo McRoberts.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

/*

http://pubs.opengroup.org/onlinepubs/009695399/basedefs/errno.h.html

Inclusion of the <string.h> header may also make visible all symbols from <stddef.h>.

*/

#ifndef __UX_ERRNO_H
# define __UX_ERRNO_H                  1

# include <ux/cdefs.h>

# undef errno

__UX_BEGIN_DECLS

int *__ux_get_errno(void) __UX_SYM03(errno);

__UX_END_DECLS

# define errno                         (*__ux_get_errno())

/* errno values are part of the ABI between the libc and the operating system
 * kernel, and as a consequence must match up properly.
 */

# if defined(__APPLE__)
#  include <ux/darwin/errno.h>
# elif defined(__linux__)
#  include <ux/linux/errno.h>
# elif defined(__sun__) && defined(__svr4__)
#  include <ux/solaris/errno.h>
# elif defined(_MINIX)
#  include <ux/minix/errno.h>
# elif defined(__BEOS__) || defined(__HAIKU__)
#  include <ux/beos/errno.h>
# elif defined(__FreeBSD__)
#  include <ux/freebsd/errno.h>
# elif defined(__OpenBSD__)
#  include <ux/openbsd/errno.h>
# elif defined(__NetBSD__)
#  include <ux/netbsd/errno.h>
# elif defined(__QNXNTO__)
#  include <ux/neutrino/errno.h>
# elif defined(__CYGWIN__)
#  include <ux/cygwin/errno.h>
# elif defined(__INTERIX) || defined(__OPENNT)
#  include <ux/interix/errno.h>
# elif (defined(__WIN32__) || defined(__WIN64__)|| defined(_WIN32) || defined(_WIN64)) && !defined(_VC_NODEFAULTLIB)
#  include <ux/msvcrt/errno.h>
# endif

#endif /*!__UX_ERRNO_H*/