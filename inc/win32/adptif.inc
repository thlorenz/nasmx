%ifndef __adptif_INC__
%define __adptif_INC__

IMPORT CreateSocketPort, 4
IMPORT DeleteSocketPort, 4
IMPORT FwBindFwInterfaceToAdapter, 8
IMPORT FwConnectionRequestFailed, 4
IMPORT FwCreateInterface, 12
IMPORT FwDeleteInterface, 4
IMPORT FwDisableFwInterface, 4
IMPORT FwEnableFwInterface, 4
IMPORT FwGetInterface, 12
IMPORT FwGetNotificationResult, 8
IMPORT FwGetStaticNetbiosNames, 12
IMPORT FwIsStarted, 4
IMPORT FwNotifyConnectionRequest, 12
IMPORT FwSetInterface, 8
IMPORT FwSetStaticNetbiosNames, 12
IMPORT FwStart, 8
IMPORT FwStop, 0
IMPORT FwUnbindFwInterfaceFromAdapter, 4
IMPORT FwUpdateConfig, 4
IMPORT FwUpdateRouteTable, 12
IMPORT GetAdapterNameFromMacAddrW, 12
IMPORT GetAdapterNameW, 12
IMPORT GetFilters, 24
IMPORT IpxAdjustIoCompletionParams, 12
IMPORT IpxCreateAdapterConfigurationPort, 8
IMPORT IpxDeleteAdapterConfigurationPort, 4
IMPORT IpxDoesRouteExist, 8
IMPORT IpxGetAdapterConfig, 8
IMPORT IpxGetAdapterList, 12
IMPORT IpxGetOverlappedResult, 16
IMPORT IpxGetQueuedAdapterConfigurationStatus, 16
IMPORT IpxGetQueuedCompletionStatus, 20
IMPORT IpxPostQueuedCompletionStatus, 16
IMPORT IpxRecvPacket, 24
IMPORT IpxSendPacket, 28
IMPORT IpxWanCreateAdapterConfigurationPort, 8
IMPORT IpxWanQueryInactivityTimer, 12
IMPORT IpxWanSetAdapterConfiguration, 8
IMPORT ServiceMain, 8
IMPORT SetFilters, 24

%endif