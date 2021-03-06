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

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include "p_liberrno.h"

static int global_errno;

int *
errno_global_ux2003(void)
{
	return &global_errno;
}

/* Default implementation of the function which returns a pointer
 * to errno; when using pthreads, this implementation is overridden.
 */
 
int *
errno_ux2003(void)
{
	return errno_global_ux2003();
}

/* Default implementation of the function which is called from syscall
 * stubs to set the errno value
 */
int
set_errno_ux2003(int err)
{
	global_errno = err;
	return err;
}
