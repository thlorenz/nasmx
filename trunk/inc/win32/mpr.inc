%ifndef __mpr_INC__
%define __mpr_INC__

IMPORT MultinetGetConnectionPerformanceA, 8
IMPORT MultinetGetConnectionPerformanceW, 8
IMPORT WNetAddConnection2A, 16
IMPORT WNetAddConnection2W, 16
IMPORT WNetAddConnection3A, 20
IMPORT WNetAddConnection3W, 20
IMPORT WNetAddConnectionA, 12
IMPORT WNetAddConnectionW, 12
IMPORT WNetCancelConnection2A, 12
IMPORT WNetCancelConnection2W, 12
IMPORT WNetCancelConnectionA, 8
IMPORT WNetCancelConnectionW, 8
IMPORT WNetCloseEnum, 4
IMPORT WNetConnectionDialog1A, 4
IMPORT WNetConnectionDialog1W, 4
IMPORT WNetConnectionDialog, 8
IMPORT WNetDisconnectDialog1A, 4
IMPORT WNetDisconnectDialog1W, 4
IMPORT WNetDisconnectDialog, 8
IMPORT WNetEnumResourceA, 16
IMPORT WNetEnumResourceW, 16
IMPORT WNetGetConnectionA, 12
IMPORT WNetGetConnectionW, 12
IMPORT WNetGetLastErrorA, 20
IMPORT WNetGetLastErrorW, 20
IMPORT WNetGetNetworkInformationA, 8
IMPORT WNetGetNetworkInformationW, 8
IMPORT WNetGetProviderNameA, 12
IMPORT WNetGetProviderNameW, 12
IMPORT WNetGetResourceInformationA, 16
IMPORT WNetGetResourceInformationW, 16
IMPORT WNetGetResourceParentA, 12
IMPORT WNetGetResourceParentW, 12
IMPORT WNetGetUniversalNameA, 16
IMPORT WNetGetUniversalNameW, 16
IMPORT WNetGetUserA, 12
IMPORT WNetGetUserW, 12
IMPORT WNetOpenEnumA, 20
IMPORT WNetOpenEnumW, 20
IMPORT WNetSetLastErrorA, 12
IMPORT WNetSetLastErrorW, 12
IMPORT WNetUseConnectionA, 32
IMPORT WNetUseConnectionW, 32

%endif