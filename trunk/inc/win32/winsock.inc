;//////////////////////////////////////////////////////////////
;//
;// NASMX Preprocessor
;// Copyright (c) 2005-2010, The NASMX Project
;//
;// winsock.inc
;// Created by Rob Neff
;//

%ifndef __NASMX_WINSOCK_INCLUDED__
%define __NASMX_WINSOCK_INCLUDED__

typedef size_t, SOCKET

%ifndef FD_SETSIZE
%define FD_SETSIZE 64
%endif

NASMX_STRUC FD_SET
    NASMX_RESERVE fd_count, uint32_t, 1
    NASMX_RESERVE fd_array, SOCKET, FD_SETSIZE
NASMX_ENDSTRUC

NASMX_STRUC TIMEVAL
    NASMX_RESERVE tv_sec, int32_t, 1
    NASMX_RESERVE tv_usec, int32_t, 1
NASMX_ENDSTRUC

%define IOCPARM_MASK 7Fh
%define IOC_VOID   20000000h
%define IOC_OUT    40000000h
%define IOC_IN     80000000h
%define IOC_INOUT IOC_IN|IOC_OUT

%define FIONBIO    8004667Eh
%define FIOASYNC   8004667Dh
%define FIONREAD   4004667Fh

%define SIOCSHIWAT 80047300h
%define SIOCGHIWAT 80047301h
%define SIOCSLOWAT 80047302h
%define SIOCGLOWAT 80047303h
%define SIOCATMARK 80047307h

NASMX_STRUC HOSTENT
    NASMX_RESERVE h_name,      NASMX_PTR, 1
    NASMX_RESERVE h_aliases,   NASMX_PTR, 1
    NASMX_RESERVE h_addrtype,  short_t, 1
    NASMX_RESERVE h_length,    short_t, 1
    NASMX_RESERVE h_addr_list, NASMX_PTR, 1
NASMX_ENDSTRUC

NASMX_STRUC NETENT
    NASMX_RESERVE n_name,     NASMX_PTR, 1
    NASMX_RESERVE n_aliases,  NASMX_PTR, 1
    NASMX_RESERVE n_addrtype, short_t, 1
    NASMX_RESERVE n_net,      uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC SERVENT
    NASMX_RESERVE s_name,    NASMX_PTR, 1
    NASMX_RESERVE s_aliases, NASMX_PTR, 1
%ifidni __OUTPUT_FORMAT__,win64
    NASMX_RESERVE s_proto,   NASMX_PTR, 1
    NASMX_RESERVE s_port,    short_t, 1
%else
    NASMX_RESERVE s_port,    short_t, 1
    NASMX_RESERVE s_proto,   NASMX_PTR, 1
%endif
NASMX_ENDSTRUC

NASMX_STRUC PROTOENT
    NASMX_RESERVE p_name,    NASMX_PTR, 1
    NASMX_RESERVE p_aliases, NASMX_PTR, 1
    NASMX_RESERVE p_proto,   short_t, 1
NASMX_ENDSTRUC

%define IPPROTO_IP    0
%define IPPROTO_ICMP  1
%define IPPROTO_IGMP  2
%define IPPROTO_GGP   3
%define IPPROTO_TCP   6
%define IPPROTO_PUP  12
%define IPPROTO_UDP  17
%define IPPROTO_IDP  22
%define IPPROTO_ND   77
%define IPPROTO_RAW 255
%define IPPROTO_MAX 256

%define IPPORT_ECHO           7
%define IPPORT_DISCARD        9
%define IPPORT_SYSTAT        11
%define IPPORT_DAYTIME       13
%define IPPORT_NETSTAT       15
%define IPPORT_FTP           21
%define IPPORT_TELNET        23
%define IPPORT_SMTP          25
%define IPPORT_TIMESERVER    37
%define IPPORT_NAMESERVER    42
%define IPPORT_WHOIS         43
%define IPPORT_MTP           57
%define IPPORT_TFTP          69
%define IPPORT_RJE           77
%define IPPORT_FINGER        79
%define IPPORT_TTYLINK       87
%define IPPORT_SUPDUP        95
%define IPPORT_EXECSERVER   512
%define IPPORT_LOGINSERVER  513
%define IPPORT_CMDSERVER    514
%define IPPORT_EFSSERVER    520
%define IPPORT_BIFFUDP      512
%define IPPORT_WHOSERVER    513
%define IPPORT_ROUTESERVER  520
%define IPPORT_RESERVED    1024

%define IMPLINK_IP 155
%define IMPLINK_LOWEXPER 156
%define IMPLINK_HIGHEXPER 158

NASMX_STRUC IN_ADDR
    NASMX_UNION S_un
        NASMX_STRUC S_un_b
            NASMX_RESERVE s_b1, uint8_t, 1
            NASMX_RESERVE s_b2, uint8_t, 1
            NASMX_RESERVE s_b3, uint8_t, 1
            NASMX_RESERVE s_b4, uint8_t, 1
        NASMX_ENDSTRUC
        NASMX_STRUC S_un_w
            NASMX_RESERVE s_w1, uint16_t, 1
            NASMX_RESERVE s_w2, uint16_t, 1
        NASMX_ENDSTRUC
		NASMX_RESERVE S_addr, uint32_t, 1
	NASMX_ENDUNION
NASMX_ENDSTRUC
%define s_addr  IN_ADDR.S_un.S_addr
%define s_host  IN_ADDR.S_un.S_un_b.s_b2
%define s_net   IN_ADDR.S_un.S_un_b.s_b1
%define s_imp   IN_ADDR.S_un.S_un_w.s_w2
%define s_impno IN_ADDR.S_un.S_un_b.s_b4
%define s_lh    IN_ADDR.S_un.S_un_b.s_b3

%define IN_CLASSA_NET 0FF000000h
%define IN_CLASSA_NSHIFT 24
%define IN_CLASSA_HOST 000FFFFFFh
%define IN_CLASSA_MAX 128
%define IN_CLASSB_NET 0FFFF0000h
%define IN_CLASSB_NSHIFT 16
%define IN_CLASSB_HOST 00000FFFFh
%define IN_CLASSB_MAX 65536
%define IN_CLASSC_NET 0FFFFFF00h
%define IN_CLASSC_NSHIFT 8
%define IN_CLASSC_HOST 0000000FFh
%define INADDR_ANY 000000000h
%define INADDR_LOOPBACK 7F000001h
%define INADDR_BROADCAST 0FFFFFFFFh
%define INADDR_NONE 0FFFFFFFFh

NASMX_STRUC SOCKADDR_IN
    NASMX_RESERVE sin_family, int16_t, 1
    NASMX_RESERVE sin_port, uint16_t, 1
    NASMX_STRUC sin_addr, IN_ADDR
        NASMX_UNION S_un
            NASMX_STRUC S_un_b
                NASMX_RESERVE s_b1, uint8_t, 1
                NASMX_RESERVE s_b2, uint8_t, 1
                NASMX_RESERVE s_b3, uint8_t, 1
                NASMX_RESERVE s_b4, uint8_t, 1
            NASMX_ENDSTRUC
            NASMX_STRUC S_un_w
                NASMX_RESERVE s_w1, uint16_t, 1
                NASMX_RESERVE s_w2, uint16_t, 1
            NASMX_ENDSTRUC
		    NASMX_RESERVE S_addr, uint32_t, 1
        NASMX_ENDUNION
    NASMX_ENDSTRUC
    NASMX_RESERVE sin_zero, int8_t, 8
NASMX_ENDSTRUC

%define WSADESCRIPTION_LEN 256
%define WSASYS_STATUS_LEN 128

NASMX_STRUC WSADATA
    NASMX_RESERVE wVersion,       uint16_t, 1
    NASMX_RESERVE wHighVersion,   uint16_t, 1
%ifidni __OUTPUT_FORMAT__,win64
    NASMX_RESERVE iMaxSockets,    uint16_t, 1
    NASMX_RESERVE iMaxUdpDg,      uint16_t, 1
    NASMX_RESERVE lpVendorInfo,   NASMX_PTR, 1
    NASMX_RESERVE szDescription,  int8_t, WSADESCRIPTION_LEN+1
    NASMX_RESERVE szSystemStatus, int8_t, WSASYS_STATUS_LEN+1
%else
    NASMX_RESERVE szDescription,  int8_t, WSADESCRIPTION_LEN+1
    NASMX_RESERVE szSystemStatus, int8_t, WSASYS_STATUS_LEN+1
    NASMX_RESERVE iMaxSockets,    uint16_t, 1
    NASMX_RESERVE iMaxUdpDg,      uint16_t, 1
    NASMX_RESERVE lpVendorInfo,   NASMX_PTR, 1
%endif
NASMX_ENDSTRUC

%define IP_OPTIONS          1
%define IP_MULTICAST_IF     2
%define IP_MULTICAST_TTL    3
%define IP_MULTICAST_LOOP   4
%define IP_ADD_MEMBERSHIP   5
%define IP_DROP_MEMBERSHIP  6
%define IP_TTL              7
%define IP_TOS              8
%define IP_DONTFRAGMENT     9

%define IP_DEFAULT_MULTICAST_TTL   1
%define IP_DEFAULT_MULTICAST_LOOP  1
%define IP_MAX_MEMBERSHIPS         20

NASMX_STRUC ip_mreq
    NASMX_STRUC imr_multiaddr, IN_ADDR
        NASMX_UNION S_un
            NASMX_STRUC S_un_b
                NASMX_RESERVE s_b1, uint8_t, 1
                NASMX_RESERVE s_b2, uint8_t, 1
                NASMX_RESERVE s_b3, uint8_t, 1
                NASMX_RESERVE s_b4, uint8_t, 1
            NASMX_ENDSTRUC
            NASMX_STRUC S_un_w
                NASMX_RESERVE s_w1, uint16_t, 1
                NASMX_RESERVE s_w2, uint16_t, 1
            NASMX_ENDSTRUC
		    NASMX_RESERVE S_addr, uint32_t, 1
	    NASMX_ENDUNION
    NASMX_ENDSTRUC
    NASMX_STRUC imr_interface, IN_ADDR
        NASMX_UNION S_un
            NASMX_STRUC S_un_b
                NASMX_RESERVE s_b1, uint8_t, 1
                NASMX_RESERVE s_b2, uint8_t, 1
                NASMX_RESERVE s_b3, uint8_t, 1
                NASMX_RESERVE s_b4, uint8_t, 1
            NASMX_ENDSTRUC
            NASMX_STRUC S_un_w
                NASMX_RESERVE s_w1, uint16_t, 1
                NASMX_RESERVE s_w2, uint16_t, 1
            NASMX_ENDSTRUC
		    NASMX_RESERVE S_addr, uint32_t, 1
	    NASMX_ENDUNION
    NASMX_ENDSTRUC
NASMX_ENDSTRUC

%define INVALID_SOCKET (-1-0)
%define SOCKET_ERROR -1

;// Types
%define SOCK_STREAM    1
%define SOCK_DGRAM     2
%define SOCK_RAW       3
%define SOCK_RDM       4
%define SOCK_SEQPACKET 5

;// Option flags per-socket.
%define SO_DEBUG         0001h
%define SO_ACCEPTCONN    0002h
%define SO_REUSEADDR     0004h
%define SO_KEEPALIVE     0008h
%define SO_DONTROUTE     0010h
%define SO_BROADCAST     0020h
%define SO_USELOOPBACK   0040h
%define SO_LINGER        0080h
%define SO_OOBINLINE     0100h
%define SOL_SOCKET      0FFFFh
%define SO_DONTLINGER (-1-SO_LINGER)
%define SO_SNDBUF        1001h
%define SO_RCVBUF        1002h
%define SO_SNDLOWAT      1003h
%define SO_RCVLOWAT      1004h
%define SO_SNDTIMEO      1005h
%define SO_RCVTIMEO      1006h
%define SO_ERROR         1007h
%define SO_TYPE          1008h

;// Options for connect and disconnect data and options.  Used only by
;// non-TCP/IP transports such as DECNet, OSI TP4, etc.
%define SO_CONNDATA      7000h
%define SO_CONNOPT       7001h
%define SO_DISCDATA      7002h
%define SO_DISCOPT       7003h
%define SO_CONNDATALEN   7004h
%define SO_CONNOPTLEN    7005h
%define SO_DISCDATALEN   7006h
%define SO_DISCOPTLEN    7007h

;// Option for opening sockets for synchronous access.
%define SO_OPENTYPE      7008h

%define SO_SYNCHRONOUS_ALERT    10h
%define SO_SYNCHRONOUS_NONALERT 20h

;// Other NT-specific options.
%define SO_MAXDG        7009h
%define SO_MAXPATHDG    700Ah
%define SO_UPDATE_ACCEPT_CONTEXT 700Bh
%define SO_CONNECT_TIME 700Ch

;// TCP options.
%define TCP_NODELAY   0001h
%define TCP_BSDURGENT 7000h

;// Address families.
%define AF_UNSPEC     0
%define AF_UNIX       1
%define AF_INET       2
%define AF_IMPLINK    3
%define AF_PUP        4
%define AF_CHAOS      5
%define AF_IPX        6
%define AF_NS         6
%define AF_ISO        7
%define AF_OSI AF_ISO
%define AF_ECMA       8
%define AF_DATAKIT    9
%define AF_CCITT     10
%define AF_SNA       11
%define AF_DECnet    12
%define AF_DLI       13
%define AF_LAT       14
%define AF_HYLINK    15
%define AF_APPLETALK 16
%define AF_NETBIOS   17
%define AF_VOICEVIEW 18
%define AF_FIREFOX   19
%define AF_UNKNOWN1  20
%define AF_BAN       21

%define AF_MAX       22

;// Structure used by kernel to store most addresses.
NASMX_STRUC SOCKADDR
    NASMX_RESERVE sa_family, uint16_t, 1
    NASMX_RESERVE sa_data, int8_t, 14
NASMX_ENDSTRUC

;// Structure used by kernel to pass protocol
;// information in raw sockets.
NASMX_STRUC SOCKPROTO
    NASMX_RESERVE sp_family, uint16_t, 1
    NASMX_RESERVE sp_protocol, uint16_t, 1
NASMX_ENDSTRUC

;// Protocol families, same as address families for now.
%define PF_UNSPEC      AF_UNSPEC
%define PF_UNIX        AF_UNIX
%define PF_INET        AF_INET
%define PF_IMPLINK     AF_IMPLINK
%define PF_PUP         AF_PUP
%define PF_CHAOS       AF_CHAOS
%define PF_NS          AF_NS
%define PF_IPX         AF_IPX
%define PF_ISO         AF_ISO
%define PF_OSI         AF_OSI
%define PF_ECMA        AF_ECMA
%define PF_DATAKIT     AF_DATAKIT
%define PF_CCITT       AF_CCITT
%define PF_SNA         AF_SNA
%define PF_DECnet      AF_DECnet
%define PF_DLI         AF_DLI
%define PF_LAT         AF_LAT
%define PF_HYLINK      AF_HYLINK
%define PF_APPLETALK   AF_APPLETALK
%define PF_VOICEVIEW   AF_VOICEVIEW
%define PF_FIREFOX     AF_FIREFOX
%define PF_UNKNOWN1    AF_UNKNOWN1
%define PF_BAN         AF_BAN

%define PF_MAX         AF_MAX

;// Structure used for manipulating linger option.
NASMX_STRUC LINGER
    NASMX_RESERVE l_onoff, uint16_t, 1
    NASMX_RESERVE l_linger, uint16_t, 1
NASMX_ENDSTRUC

;// Level number for (get/set)sockopt() to apply to socket itself.
%define SOL_SOCKET     0ffffh

;// Maximum queue length specifiable by listen.
%define SOMAXCONN      5

%define MSG_OOB       01h
%define MSG_PEEK      02h
%define MSG_DONTROUTE 04h
%define MSG_MAXIOVLEN 16

%define MSG_PARTIAL 8000h

;// Define constant based on rfc883, used by gethostbyxxxx() calls.
%define MAXGETHOSTSTRUCT 1024

;// Define flags to be used with the WSAAsyncSelect() call.
%define FD_READ    01h
%define FD_WRITE   02h
%define FD_OOB     04h
%define FD_ACCEPT  08h
%define FD_CONNECT 10h
%define FD_CLOSE   20h

;// WinSock error codes are also defined in winerror.h
;// Hence the IFDEF.

%ifndef WSABASEERR

;// All Windows Sockets error constants are biased by WSABASEERR from
;// the "normal"
%define WSABASEERR 10000

;// Windows Sockets definitions of regular Microsoft C error constants
%define WSAEINTR                (WSABASEERR+4)
%define WSAEBADF                (WSABASEERR+9)
%define WSAEACCES               (WSABASEERR+13)
%define WSAEFAULT               (WSABASEERR+14)
%define WSAEINVAL               (WSABASEERR+22)
%define WSAEMFILE               (WSABASEERR+24)

;// Windows Sockets definitions of regular Berkeley error constants
%define WSAEWOULDBLOCK          (WSABASEERR+35)
%define WSAEINPROGRESS          (WSABASEERR+36)
%define WSAEALREADY             (WSABASEERR+37)
%define WSAENOTSOCK             (WSABASEERR+38)
%define WSAEDESTADDRREQ         (WSABASEERR+39)
%define WSAEMSGSIZE             (WSABASEERR+40)
%define WSAEPROTOTYPE           (WSABASEERR+41)
%define WSAENOPROTOOPT          (WSABASEERR+42)
%define WSAEPROTONOSUPPORT      (WSABASEERR+43)
%define WSAESOCKTNOSUPPORT      (WSABASEERR+44)
%define WSAEOPNOTSUPP           (WSABASEERR+45)
%define WSAEPFNOSUPPORT         (WSABASEERR+46)
%define WSAEAFNOSUPPORT         (WSABASEERR+47)
%define WSAEADDRINUSE           (WSABASEERR+48)
%define WSAEADDRNOTAVAIL        (WSABASEERR+49)
%define WSAENETDOWN             (WSABASEERR+50)
%define WSAENETUNREACH          (WSABASEERR+51)
%define WSAENETRESET            (WSABASEERR+52)
%define WSAECONNABORTED         (WSABASEERR+53)
%define WSAECONNRESET           (WSABASEERR+54)
%define WSAENOBUFS              (WSABASEERR+55)
%define WSAEISCONN              (WSABASEERR+56)
%define WSAENOTCONN             (WSABASEERR+57)
%define WSAESHUTDOWN            (WSABASEERR+58)
%define WSAETOOMANYREFS         (WSABASEERR+59)
%define WSAETIMEDOUT            (WSABASEERR+60)
%define WSAECONNREFUSED         (WSABASEERR+61)
%define WSAELOOP                (WSABASEERR+62)
%define WSAENAMETOOLONG         (WSABASEERR+63)
%define WSAEHOSTDOWN            (WSABASEERR+64)
%define WSAEHOSTUNREACH         (WSABASEERR+65)
%define WSAENOTEMPTY            (WSABASEERR+66)
%define WSAEPROCLIM             (WSABASEERR+67)
%define WSAEUSERS               (WSABASEERR+68)
%define WSAEDQUOT               (WSABASEERR+69)
%define WSAESTALE               (WSABASEERR+70)
%define WSAEREMOTE              (WSABASEERR+71)

;// Extended Windows Sockets error constant definitions
%define WSASYSNOTREADY          (WSABASEERR+91)
%define WSAVERNOTSUPPORTED      (WSABASEERR+92)
%define WSANOTINITIALISED       (WSABASEERR+93)
%define WSAEDISCON              (WSABASEERR+101)
%define WSAHOST_NOT_FOUND       (WSABASEERR+1001)
%define WSATRY_AGAIN            (WSABASEERR+1002)
%define WSANO_RECOVERY          (WSABASEERR+1003)
%define WSANO_DATA              (WSABASEERR+1004)

%define HOST_NOT_FOUND WSAHOST_NOT_FOUND
%define TRY_AGAIN      WSATRY_AGAIN
%define NO_RECOVERY    WSANO_RECOVERY
%define NO_DATA        WSANO_DATA
%define WSANO_ADDRESS  WSANO_DATA
%define NO_ADDRESS     WSANO_ADDRESS

;// WinSock error codes are also defined in winerror.h
;// Hence the IFDEF.
%endif  ;// ifndef WSABASEERR

%define EWOULDBLOCK     WSAEWOULDBLOCK
%define EINPROGRESS     WSAEINPROGRESS
%define EALREADY        WSAEALREADY
%define ENOTSOCK        WSAENOTSOCK
%define EDESTADDRREQ    WSAEDESTADDRREQ
%define EMSGSIZE        WSAEMSGSIZE
%define EPROTOTYPE      WSAEPROTOTYPE
%define ENOPROTOOPT     WSAENOPROTOOPT
%define EPROTONOSUPPORT WSAEPROTONOSUPPORT
%define ESOCKTNOSUPPORT WSAESOCKTNOSUPPORT
%define EOPNOTSUPP      WSAEOPNOTSUPP
%define EPFNOSUPPORT    WSAEPFNOSUPPORT
%define EAFNOSUPPORT    WSAEAFNOSUPPORT
%define EADDRINUSE      WSAEADDRINUSE
%define EADDRNOTAVAIL   WSAEADDRNOTAVAIL
%define ENETDOWN        WSAENETDOWN
%define ENETUNREACH     WSAENETUNREACH
%define ENETRESET       WSAENETRESET
%define ECONNABORTED    WSAECONNABORTED
%define ECONNRESET      WSAECONNRESET
%define ENOBUFS         WSAENOBUFS
%define EISCONN         WSAEISCONN
%define ENOTCONN        WSAENOTCONN
%define ESHUTDOWN       WSAESHUTDOWN
%define ETOOMANYREFS    WSAETOOMANYREFS
%define ETIMEDOUT       WSAETIMEDOUT
%define ECONNREFUSED    WSAECONNREFUSED
%define ELOOP           WSAELOOP
%define ENAMETOOLONG    WSAENAMETOOLONG
%define EHOSTDOWN       WSAEHOSTDOWN
%define EHOSTUNREACH    WSAEHOSTUNREACH
%define ENOTEMPTY       WSAENOTEMPTY
%define EPROCLIM        WSAEPROCLIM
%define EUSERS          WSAEUSERS
%define EDQUOT          WSAEDQUOT
%define ESTALE          WSAESTALE
%define EREMOTE         WSAEREMOTE

NASMX_STRUC TRANSMIT_FILE_BUFFERS
    NASMX_RESERVE Head,       NASMX_PTR, 1
    NASMX_RESERVE HeadLength, uint16_t, 1
    NASMX_RESERVE Tail,       NASMX_PTR, 1
    NASMX_RESERVE TailLength, uint16_t, 1
NASMX_ENDSTRUC

%define TF_DISCONNECT   01h
%define TF_REUSE_SOCKET 02h
%define TF_WRITE_BEHIND 04h

%define IP_REVERSE      01h
%define IP_FLAG_DF      02h

NASMX_STRUC IP_OPTION_INFORMATION
    NASMX_RESERVE Ttl,   uint8_t, 1
    NASMX_RESERVE Tos,   uint8_t, 1
    NASMX_RESERVE Flags, uint8_t, 1
    NASMX_RESERVE OptionsSize, uint8_t, 1
    NASMX_RESERVE OptionsData, uint32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC ICMP_HDR
    NASMX_RESERVE icmp_type,  int8_t, 1
    NASMX_RESERVE icmp_code,  int8_t, 1
    NASMX_RESERVE icmp_cksum, int16_t, 1
    NASMX_RESERVE icmp_id,    int16_t, 1
    NASMX_RESERVE icmp_seq,   int16_t, 1
    NASMX_RESERVE icmp_data,  int8_t, 1
NASMX_ENDSTRUC

NASMX_STRUC IP_HDR
    NASMX_RESERVE ip_hlv,   int8_t, 1
    NASMX_RESERVE ip_tos,   int8_t, 1
    NASMX_RESERVE ip_len,   short_t, 1
    NASMX_RESERVE ip_id,    int16_t, 1
    NASMX_RESERVE ip_off,   int16_t, 1
    NASMX_RESERVE ip_ttl,   int8_t, 1
    NASMX_RESERVE ip_p,     int8_t, 1
    NASMX_RESERVE ip_cksum, int16_t, 1
    NASMX_RESERVE ip_src,   int32_t, 1
    NASMX_RESERVE ip_dest,  int32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC ICMP_ECHO_REPLY
    NASMX_STRUC Address, IN_ADDR
        NASMX_UNION S_un
            NASMX_STRUC S_un_b
                NASMX_RESERVE s_b1, uint8_t, 1
                NASMX_RESERVE s_b2, uint8_t, 1
                NASMX_RESERVE s_b3, uint8_t, 1
                NASMX_RESERVE s_b4, uint8_t, 1
            NASMX_ENDSTRUC
            NASMX_STRUC S_un_w
                NASMX_RESERVE s_w1, uint16_t, 1
                NASMX_RESERVE s_w2, uint16_t, 1
            NASMX_ENDSTRUC
            NASMX_RESERVE S_addr,   uint32_t, 1
        NASMX_ENDUNION
    NASMX_ENDSTRUC
    NASMX_RESERVE Status, uint32_t, 1
    NASMX_RESERVE RoundTripTime, uint32_t, 1
    NASMX_RESERVE DataSize, uint16_t, 1
    NASMX_RESERVE Reserved, uint16_t, 1
    NASMX_RESERVE Data, ptr32_t, 1
    NASMX_STRUC Options, IP_OPTION_INFORMATION
        NASMX_RESERVE Ttl,         uint8_t, 1
        NASMX_RESERVE Tos,         uint8_t, 1
        NASMX_RESERVE Flags,       uint8_t, 1
        NASMX_RESERVE OptionsSize, uint8_t, 1
        NASMX_RESERVE OptionsData, ptr32_t, 1
    NASMX_ENDSTRUC
;    NASMX_RESERVE zData, char_t, 250
NASMX_ENDSTRUC

%endif  ; __NASMX_WINSOCK_INCLUDED__
