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

int *errno_ux2003(void) UX_SYM03_(errno) UX_WEAK_;
int *errno_global_ux2003(void) UX_PRIVATE_(errno_global);
int set_errno_ux2003(int err) UX_PRIVATE_(set_errno) UX_WEAK_;

#endif /*!P_LIBERRNO_H_*/
