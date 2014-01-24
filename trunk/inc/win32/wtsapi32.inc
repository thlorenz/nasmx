%ifndef __NASMX_WTSAPI32_INC__
%define __NASMX_WTSAPI32_INC__

IMPORT WTSCloseServer, 4
IMPORT WTSDisconnectSession, 12
IMPORT WTSEnumerateProcessesA, 20
IMPORT WTSEnumerateProcessesW, 20
IMPORT WTSEnumerateServersA, 20
IMPORT WTSEnumerateServersW, 20
IMPORT WTSEnumerateSessionsA, 20
IMPORT WTSEnumerateSessionsW, 20
IMPORT WTSFreeMemory, 4
IMPORT WTSLogoffSession, 12
IMPORT WTSOpenServerA, 4
IMPORT WTSOpenServerW, 4
IMPORT WTSQuerySessionInformationA, 20
IMPORT WTSQuerySessionInformationW, 20
IMPORT WTSQueryUserConfigA, 20
IMPORT WTSQueryUserConfigW, 20
IMPORT WTSQueryUserToken, 8
IMPORT WTSRegisterSessionNotification, 8
IMPORT WTSSendMessageA, 40
IMPORT WTSSendMessageW, 40
IMPORT WTSSetSessionInformationA, 20
IMPORT WTSSetSessionInformationW, 20
IMPORT WTSSetUserConfigA, 20
IMPORT WTSSetUserConfigW, 20
IMPORT WTSShutdownSystem, 8
IMPORT WTSTerminateProcess, 12
IMPORT WTSUnRegisterSessionNotification, 4
IMPORT WTSVirtualChannelClose, 4
IMPORT WTSVirtualChannelOpen, 12
IMPORT WTSVirtualChannelPurgeInput, 4
IMPORT WTSVirtualChannelPurgeOutput, 4
IMPORT WTSVirtualChannelQuery, 16
IMPORT WTSVirtualChannelRead, 20
IMPORT WTSVirtualChannelWrite, 16
IMPORT WTSWaitSystemEvent, 12

%ifdef UNICODE

%define WTSEnumerateProcesses WTSEnumerateProcessesW
%define WTSEnumerateServers WTSEnumerateServersW
%define WTSEnumerateSessions WTSEnumerateSessionsW
%define WTSOpenServer WTSOpenServerW
%define WTSQuerySessionInformation WTSQuerySessionInformationW
%define WTSQueryUserConfig WTSQueryUserConfigW
%define WTSSendMessage WTSSendMessageW
%define WTSSetSessionInformation WTSSetSessionInformationW
%define WTSSetUserConfig WTSSetUserConfigW

%else  ;// ANSI

%define WTSEnumerateProcesses WTSEnumerateProcessesA
%define WTSEnumerateServers WTSEnumerateServersA
%define WTSEnumerateSessions WTSEnumerateSessionsA
%define WTSOpenServer WTSOpenServerA
%define WTSQuerySessionInformation WTSQuerySessionInformationA
%define WTSQueryUserConfig WTSQueryUserConfigA
%define WTSSendMessage WTSSendMessageA
%define WTSSetSessionInformation WTSSetSessionInformationA
%define WTSSetUserConfig WTSSetUserConfigA

%endif

%endif  ;// __NASMX_WTSAPI32_INC__
