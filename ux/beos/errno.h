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

#ifndef UX_BEOS_ERRNO_H_
# define UX_BEOS_ERRNO_H_              1

# ifndef __BEOS__
#  error Compilation of this file is only supported on BeOS
# endif

# define E2BIG                         -2147454975 /* Argument list too long. */
# define EACCES                        -2147483646 /* Permission denied. */
# define EADDRINUSE                    -2147454954 /* Address in use. */
# define EADDRNOTAVAIL                 -2147454953 /* Address not available. */
# define EAFNOSUPPORT                  -2147454955 /* Address family not supported. */
# define EAGAIN                        -2147483637 /* Resource unavailable, try again. */
# define EALREADY                      -2147454939 /* Connection already in progress. */
# define EBADF                         -2147459072 /* Bad file descriptor. */
# define EBADMSG                       909 /* Bad message. */
# define EBUSY                         -2147483634 /* Device or resource busy. */
# define ECANCELED                     911 /* Operation canceled. */
# define ECHILD                        -2147454974 /* No child processes. */
# define ECONNABORTED                  -2147454949 /* Connection aborted. */
# define ECONNREFUSED                  -2147454944 /* Connection refused. */
# define ECONNRESET                    -2147454948 /* Connection reset. */
# define EDEADLK                       -2147454973 /* Resource deadlock would occur. */
# define EDESTADDRREQ                  917 /* Destination address required. */
# define EDOM                          -2147454960 /* Mathematics argument out of domain of function. */
# define EDQUOT                        919 /* Reserved. */
# define EEXIST                        -2147459070 /* File exists. */
# define EFAULT                        -2147478783 /* Bad address. */
# define EFBIG                         -2147454972 /* File too large. */
# define EHOSTUNREACH                  -2147454943 /* Host is unreachable. */
# define EIDRM                         924 /* Identifier removed. */
# define EILSEQ                        -2147454938 /* Illegal byte sequence. */
# define EINPROGRESS                   -2147454940 /* Operation in progress. */
# define EINTR                         -2147483638 /* Interrupted function. */
# define EINVAL                        -2147483643 /* Invalid argument. */
# define EIO                           -2147483647 /* I/O error. */
# define EISCONN                       -2147454947 /* Socket is connected. */
# define EISDIR                        -2147459063 /* Is a directory. */
# define ELOOP                         -2147459060 /* Too many levels of symbolic links. */
# define EMFILE                        -2147459062 /* Too many open files. */
# define EMLINK                        -2147454971 /* Too many links. */
# define EMSGSIZE                      -2147454934 /* Message too large. */
# define EMULTIHOP                     936 /* Reserved. */
# define ENAMETOOLONG                  -2147459068 /* Filename too long. */
# define ENETDOWN                      -2147454952 /* Network is down. */
# define ENETRESET                     -2147454950 /* Connection aborted by network. */
# define ENETUNREACH                   -2147454951 /* Network unreachable. */
# define ENFILE                        -2147454970 /* Too many files open in system. */
# define ENOBUFS                       -2147454941 /* No buffer space available. */
# define ENODATA                       943 /* No message is available on the STREAM head read queue. */
# define ENODEV                        -2147454969 /* No such device. */
# define ENOENT                        -2147459069 /* No such file or directory. */
# define ENOEXEC                       -2147478782 /* Executable file format error. */
# define ENOLCK                        -2147454968 /* No locks available. */
# define ENOLINK                       948 /* Reserved. */
# define ENOMEM                        -2147483648 /* Not enough space. */
# define ENOMSG                        -2147454937 /* No message of the desired type. */
# define ENOPROTOOPT                   -2147454942 /* Protocol not available. */
# define ENOSPC                        -2147459065 /* No space left on device. */
# define ENOSR                         953 /* No STREAM resources. */
# define ENOSTR                        954 /* Not a STREAM. */
# define ENOSYS                        -2147454967 /* Function not supported. */
# define ENOTCONN                      -2147454946 /* The socket is not connected. */
# define ENOTDIR                       -2147459067 /* Not a directory. */
# define ENOTEMPTY                     -2147459066 /* Directory not empty. */
# define ENOTSOCK                      -2147454932 /* Not a socket. */
# define ENOTSUP                       960 /* Not supported. */
# define ENOTTY                        -2147454966 /* Inappropriate I/O control operation. */
# define ENXIO                         -2147454965 /* No such device or address. */
# define EOPNOTSUPP                    -2147454933 /* Operation not supported on socket. */
# define EOVERFLOW                     -2147454935 /* Value too large to be stored in data type. */
# define EPERM                         -2147483633 /* Operation not permitted. */
# define EPIPE                         -2147459059 /* Broken pipe. */
# define EPROTO                        967 /* Protocol error. */
# define EPROTONOSUPPORT               -2147454957 /* Protocol not supported. */
# define EPROTOTYPE                    -2147454958 /* Protocol wrong type for socket. */
# define ERANGE                        -2147454959 /* Result too large. */
# define EROFS                         -2147459064 /* Read-only file system. */
# define ESPIPE                        -2147454964 /* Invalid seek. */
# define ESRCH                         -2147454963 /* No such process. */
# define ESTALE                        -2147454936 /* Reserved. */
# define ETIME                         975 /* Stream ioctl() timeout. */
# define ETIMEDOUT                     -2147483639 /* Connection timed out. */
# define ETXTBSY                       977 /* Text file busy. */
# define EWOULDBLOCK                   -2147483637 /* Operation would block. */
# define EXDEV                         -2147459061 /* Cross-device link. */

#endif /*!UX_BEOS_ERRNO_H_*/
