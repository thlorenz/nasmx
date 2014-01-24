%ifndef __NASMX_SENSAPI_INC__
%define __NASMX_SENSAPI_INC__

IMPORT IsDestinationReachableA, 8
IMPORT IsDestinationReachableW, 8
IMPORT IsNetworkAlive, 4

%ifdef UNICODE
%define IsDestinationReachable IsDestinationReachableW
%else  ;// ANSI
%define IsDestinationReachable IsDestinationReachableA
%endif  ;// UNICODE

%endif  ;// __NASMX_SENSAPI_INC__
