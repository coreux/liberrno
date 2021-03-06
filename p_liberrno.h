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

#ifndef P_LIBERRNO_H_
# define P_LIBERRNO_H_                 1

# include <ux/cdefs.h>

# include "errno.h"
# undef errno

int *errno_ux2003(void) __UX_SYM03(errno) __UX_WEAK;
int *errno_global_ux2003(void) __UX_PRIVATE(errno_global);
int set_errno_ux2003(int err) __UX_PRIVATE(set_errno) __UX_WEAK;

#endif /*!P_LIBERRNO_H_*/
