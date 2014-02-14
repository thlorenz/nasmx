%ifndef __dhcpcsvc_INC__
%define __dhcpcsvc_INC__

IMPORT DhcpAcquireParameters, 4
IMPORT DhcpAcquireParametersByBroadcast, 4
IMPORT DhcpCApiCleanup, 0
IMPORT DhcpCApiInitialize, 4
IMPORT DhcpDeRegisterOptions, 4
IMPORT DhcpDeRegisterParamChange, 12
IMPORT DhcpDelPersistentRequestParams, 8
IMPORT DhcpEnumClasses, 16
IMPORT DhcpFallbackRefreshParams, 4
IMPORT DhcpHandlePnPEvent, 20
IMPORT DhcpLeaseIpAddress, 24
IMPORT DhcpLeaseIpAddressEx, 32
IMPORT DhcpNotifyConfigChange, 28
IMPORT DhcpNotifyConfigChangeEx, 32
IMPORT DhcpNotifyMediaReconnected, 4
IMPORT DhcpOpenGlobalEvent, 0
IMPORT DhcpPersistentRequestParams, 28
IMPORT DhcpRegisterOptions, 16
IMPORT DhcpRegisterParamChange, 28
IMPORT DhcpReleaseIpAddressLease, 8
IMPORT DhcpReleaseIpAddressLeaseEx, 16
IMPORT DhcpReleaseParameters, 4
IMPORT DhcpRemoveDNSRegistrations, 0
IMPORT DhcpRenewIpAddressLease, 16
IMPORT DhcpRenewIpAddressLeaseEx, 24
IMPORT DhcpRequestOptions, 28
IMPORT DhcpRequestParams, 44
IMPORT DhcpStaticRefreshParams, 4
IMPORT DhcpUndoRequestParams, 16
IMPORT McastApiCleanup, 0
IMPORT McastApiStartup, 4
IMPORT McastEnumerateScopes, 20
IMPORT McastGenUID, 4
IMPORT McastReleaseAddress, 12
IMPORT McastRenewAddress, 16
IMPORT McastRequestAddress, 20
IMPORT ServiceMain, 8

%endif