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

#ifndef __UX_MINIX_ERRNO_H
# define __UX_MINIX_ERRNO_H            1

# ifndef _MINIX
#  error Compilation of this file is only supported on Minix
# endif

# define E2BIG                         7   /* Argument list too long. */
# define EACCES                        13  /* Permission denied. */
# define EADDRINUSE                    58  /* Address in use. */
# define EADDRNOTAVAIL                 71  /* Address not available. */
# define EAFNOSUPPORT                  67  /* Address family not supported. */
# define EAGAIN                        11  /* Resource unavailable, try again. */
# define EALREADY                      72  /* Connection already in progress. */
# define EBADF                         9   /* Bad file descriptor. */
# define EBADMSG                       909 /* Bad message. */
# define EBUSY                         16  /* Device or resource busy. */
# define ECANCELED                     911 /* Operation canceled. */
# define ECHILD                        10  /* No child processes. */
# define ECONNABORTED                  913 /* Connection aborted. */
# define ECONNREFUSED                  59  /* Connection refused. */
# define ECONNRESET                    60  /* Connection reset. */
# define EDEADLK                       35  /* Resource deadlock would occur. */
# define EDESTADDRREQ                  917 /* Destination address required. */
# define EDOM                          33  /* Mathematics argument out of domain of function. */
# define EDQUOT                        919 /* Reserved. */
# define EEXIST                        17  /* File exists. */
# define EFAULT                        14  /* Bad address. */
# define EFBIG                         27  /* File too large. */
# define EHOSTUNREACH                  923 /* Host is unreachable. */
# define EIDRM                         924 /* Identifier removed. */
# define EILSEQ                        925 /* Illegal byte sequence. */
# define EINPROGRESS                   70  /* Operation in progress. */
# define EINTR                         4   /* Interrupted function. */
# define EINVAL                        22  /* Invalid argument. */
# define EIO                           5   /* I/O error. */
# define EISCONN                       57  /* Socket is connected. */
# define EISDIR                        21  /* Is a directory. */
# define ELOOP                         40  /* Too many levels of symbolic links. */
# define EMFILE                        24  /* Too many open files. */
# define EMLINK                        31  /* Too many links. */
# define EMSGSIZE                      73  /* Message too large. */
# define EMULTIHOP                     936 /* Reserved. */
# define ENAMETOOLONG                  36  /* Filename too long. */
# define ENETDOWN                      938 /* Network is down. */
# define ENETRESET                     939 /* Connection aborted by network. */
# define ENETUNREACH                   940 /* Network unreachable. */
# define ENFILE                        23  /* Too many files open in system. */
# define ENOBUFS                       942 /* No buffer space available. */
# define ENODATA                       943 /* No message is available on the STREAM head read queue. */
# define ENODEV                        19  /* No such device. */
# define ENOENT                        2   /* No such file or directory. */
# define ENOEXEC                       8   /* Executable file format error. */
# define ENOLCK                        37  /* No locks available. */
# define ENOLINK                       948 /* Reserved. */
# define ENOMEM                        12  /* Not enough space. */
# define ENOMSG                        950 /* No message of the desired type. */
# define ENOPROTOOPT                   75  /* Protocol not available. */
# define ENOSPC                        28  /* No space left on device. */
# define ENOSR                         953 /* No STREAM resources. */
# define ENOSTR                        954 /* Not a STREAM. */
# define ENOSYS                        38  /* Function not supported. */
# define ENOTCONN                      64  /* The socket is not connected. */
# define ENOTDIR                       20  /* Not a directory. */
# define ENOTEMPTY                     39  /* Directory not empty. */
# define ENOTSOCK                      74  /* Not a socket. */
# define ENOTSUP                       960 /* Not supported. */
# define ENOTTY                        25  /* Inappropriate I/O control operation. */
# define ENXIO                         6   /* No such device or address. */
# define EOPNOTSUPP                    76  /* Operation not supported on socket. */
# define EOVERFLOW                     964 /* Value too large to be stored in data type. */
# define EPERM                         1   /* Operation not permitted. */
# define EPIPE                         32  /* Broken pipe. */
# define EPROTO                        967 /* Protocol error. */
# define EPROTONOSUPPORT               68  /* Protocol not supported. */
# define EPROTOTYPE                    69  /* Protocol wrong type for socket. */
# define ERANGE                        34  /* Result too large. */
# define EROFS                         30  /* Read-only file system. */
# define ESPIPE                        29  /* Invalid seek. */
# define ESRCH                         3   /* No such process. */
# define ESTALE                        974 /* Reserved. */
# define ETIME                         975 /* Stream ioctl() timeout. */
# define ETIMEDOUT                     61  /* Connection timed out. */
# define ETXTBSY                       26  /* Text file busy. */
# define EWOULDBLOCK                   54  /* Operation would block. */
# define EXDEV                         18  /* Cross-device link. */

#endif /*!__UX_MINIX_ERRNO_H*/
