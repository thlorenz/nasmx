%ifndef __mswsock_INC__
%define __mswsock_INC__

IMPORT AcceptEx, 32
IMPORT EnumProtocolsA, 12
IMPORT EnumProtocolsW, 12
IMPORT GetAcceptExSockaddrs, 32
IMPORT GetAddressByNameA, 40
IMPORT GetAddressByNameW, 40
IMPORT GetNameByTypeA, 12
IMPORT GetNameByTypeW, 12
IMPORT GetServiceA, 28
IMPORT GetServiceW, 28
IMPORT GetTypeByNameA, 8
IMPORT GetTypeByNameW, 8
IMPORT MigrateWinsockConfiguration, 12
IMPORT NPLoadNameSpaces, 12
IMPORT SetServiceA, 24
IMPORT SetServiceW, 24
IMPORT TransmitFile, 28
IMPORT WSARecvEx, 16
IMPORT dn_expand, 20
IMPORT getnetbyname, 4
IMPORT inet_network, 4
IMPORT rcmd, 24
IMPORT rexec, 24
IMPORT rresvport, 4
IMPORT s_perror, 8
IMPORT sethostname, 8

%endif