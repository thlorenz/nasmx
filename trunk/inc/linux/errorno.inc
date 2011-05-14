%ifndef __NASMX_ERRNO_INC__
%define __NASMX_ERRNO_INC__
;------------------------------------------------------------------------------
; Error numbers from linux-2.6.38.2/include/asm-generic/errno-base.h
; 18th April 2011
; Note:
; raw syscalls (as opposed to the libc wrappers which return -1 and set errno)
; generate negative return values in EAX for errors, so you should check
; if a syscalls return value is signed, if it is use neg eax and then
; check the value against this list.
;------------------------------------------------------------------------------
EPERM           equ 1                  ;operation not permitted
ENOENT          equ 2                  ;no such file or directory
ESRCH           equ 3                  ;no such process
EINTR           equ 4                  ;interrupted system call
EIO             equ 5                  ;I/O error
ENXIO           equ 6                  ;no such device or address
E2BIG           equ 7                  ;argument list to long
ENOEXEC         equ 8                  ;exec format error
EBADF           equ 9                  ;bad file number
ECHILD          equ 10                 ;no child processes
EAGAIN          equ 11                 ;try again
ENOMEM          equ 12                 ;out of memory
EACCES          equ 13                 ;permission denied
EFAULT          equ 14                 ;bad address
ENOTBLK         equ 15                 ;block device required
EBUSY           equ 16                 ;device or resource busy
EEXIST          equ 17                 ;file exists
EXDEV           equ 18                 ;cross-device link
ENODEV          equ 19                 ;no such device
ENOTDIR         equ 20                 ;no such directory
EISDIR          equ 21                 ;is a directory
EINVAL          equ 22                 ;invalid argument
ENFILE          equ 23                 ;file table overflow
EMFILE          equ 24                 ;too many open files
ENOTTY          equ 25                 ;not a typewriter
ETXTBSY         equ 26                 ;text file busy
EFBIG           equ 27                 ;file too large
ENOSPC          equ 28                 ;no space left on device
ESPIPE          equ 29                 ;illegal seek
EROFS           equ 30                 ;read-only file system
EMLINK          equ 31                 ;too many links
EPIPE           equ 32                 ;broken pipe
EDOM            equ 33                 ;math arg out of domain of func
ERANGE          equ 34                 ;math result not representable
;--------------------------------------------------------------------------
; more error numbers from linux-2.6.38.2/include/asm-generic/errno.h
; 21st April 2011
;--------------------------------------------------------------------------
EDEADLCK        equ 35                 ;resource deadlock would occur
ENAMETOOLONG    equ 36                 ;file name too long
ENOLCK          equ 37                 ;no record locks available
ENOSYS          equ 38                 ;function not implemented
ENOTEMPTY       equ 39                 ;directory not empty
ELOOP           equ 40                 ;too many symbolic links encountered
EWOULDBLOCK     equ EAGAIN             ;operation would block
ENOMSG          equ 42                 ;no message of desired type
EIDRM           equ 43                 ;identifier removed
ECHRNG          equ 44                 ;channel number out of range
EL2NSYNC        equ 45                 ;level 2 not synchronized
EL3HLT          equ 46                 ;level 3 halted
EL3RST          equ 47                 ;level 3 reset
ELNRNG          equ 48                 ;link number out of range
EUNATCH         equ 49                 ;protocol driver not attached
ENOCSI          equ 50                 ;no CSI structure available
EL2HLT          equ 51                 ;level 2 halted
EBADE           equ 52                 ;invalid exchange
EBADR           equ 53                 ;invalid request descriptor
EXFULL          equ 54                 ;exchange full
ENOANO          equ 55                 ;no anode
EBADROC         equ 56                 ;invalid request code
EBADSLT         equ 57                 ;invalid slot
EDEADLOCK       equ EDEADLCK
EBFONT          equ 59                 ;bad font file format
ENOSTR          equ 60                 ;device not a stream
ENODATA         equ 61                 ;no data available
ETIME           equ 62                 ;timer expired
ENOSR           equ 63                 ;out of streams resources
ENONET          equ 64                 ;machine is not on the network
ENOPKG          equ 65                 ;package not installed
EREMOTE         equ 66                 ;object is remote
ENOLINK         equ 67                 ;link has been severed
EADV            equ 68                 ;advertise error
ESRMNT          equ 69                 ;srmount error
ECOMM           equ 70                 ;communication error on send
EPROTO          equ 71                 ;protocol error
EMULTIHOP       equ 72                 ;multihop attempted
EDOTDOT         equ 73                 ;RFS specific error
EBADMSG         equ 74                 ;not a data message
EOVERFLOW       equ 75                 ;value too large for defined data
                                       ;type
ENOTUNIQ        equ 76                 ;name not unique on network
EBADFD          equ 77                 ;file descriptor in bad state
EREMCHG         equ 78                 ;remote address changed
ELIBACC         equ 79                 ;cannot access a needed shared lib
ELIBBAD         equ 80                 ;accessing a corrupted shared lib
ELIBSCN         equ 81                 ;.lib section in a.out corrupted
ELIBMAX         equ 82                 ;attempting to link in too many shared
                                       ;libraries
ELIBEXEC        equ 83                 ;cannot exec a shared lib directly
EILSEQ          equ 84                 ;illegal byte sequence
ERESTART        equ 85                 ;interrupted system call should be
                                       ;restarted
ESTRPIPE        equ 86                 ;streams pipe error
EUSERS          equ 87                 ;too many users
ENOTSOCK        equ 88                 ;socket operation on non-socket
EDESTADDRREQ    equ 89                 ;destination address required
EMSGSIZE        equ 90                 ;message too long
EPROTOTYPE      equ 91                 ;protocol wrong type for socket
ENOPROTOOPT     equ 92                 ;protocol not available
EPROTONOSUPPORT equ 93                 ;protocol not supported
ESOCKTNOSUPPORT equ 94                 ;socket type not supported
EOPNOTSUPP      equ 95                 ;operation not supported on transport
                                       ;endpoint
EPFNOSUPPORT    equ 96                 ;protocol family not supported
EAFNOSUPPORT    equ 97                 ;address family not supported by protocol
EADDRINUSE      equ 98                 ;address already in use
EADDRNOTAVAIL   equ 99                 ;cannot assign requested address
ENETDOWN        equ 100                ;network is down
ENETUNREACH     equ 101                ;network is unreachable
ENETRESET       equ 102                ;network dropped connection because of
                                       ;reset
ECONNABORTED    equ 103                ;software caused connection abort
ECONNRESET      equ 104                ;connection reset by peer
ENOBUFS         equ 105                ;no buffer space available
EISCONN         equ 106                ;transport endpoint is already connected
ENOTCONN        equ 107                ;transport endpoint is not connected
ESHUTDOWN       equ 108                ;cannot send after transport endpoint
                                       ;shutdown
ETOOMANYREFS    equ 109                ;too many references : cannot splice
ETIMEDOUT       equ 110                ;connection timed out
ECONNREFUSED    equ 111                ;connection refused
EHOSTDOWN       equ 112                ;host is down
EHOSTUNREACH    equ 113                ;no route to host
EALREADY        equ 114                ;operation already in progress
EINPROGRESS     equ 115                ;operation now in progress
ESTALE          equ 116                ;stale NFS file handle
EUCLEAN         equ 117                ;structure needs cleaning
ENOTNAM         equ 118                ;not a XENIX named type file
ENAVAIL         equ 119                ;no XENIX semaphores available
EISNAM          equ 120                ;is a named file type
EREMOTEIO       equ 121                ;remote I/O error
EDQUOT          equ 122                ;quota exceeded
ENOMEDIUM       equ 123                ;no medium found
EMEDIUMTYPE     equ 124                ;wrong medium type
ECANCELED       equ 125                ;operation canceled
ENOKEY          equ 126                ;required key not available
EKEYEXPIRED     equ 127                ;key has expired
EKEYREVOKED     equ 128                ;key has been revoked
EKEYREJECTED    equ 129                ;key was rejected by service
;for robust mutexes
EOWNERDEAD      equ 130                ;owner died
ENOTRECOVERABLE equ 131                ;state not recoverable
ERFKILL         equ 132                ;operation not possible due to RF-kill

%endif  ;  __NASMX_ERRNO_INC__
