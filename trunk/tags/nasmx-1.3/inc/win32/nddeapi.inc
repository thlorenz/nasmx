%ifndef __NASMX_NDDEAPI_INC__
%define __NASMX_NDDEAPI_INC__

IMPORT NDdeGetErrorStringA, 12
IMPORT NDdeGetErrorStringW, 12
IMPORT NDdeGetShareSecurityA, 24
IMPORT NDdeGetShareSecurityW, 24
IMPORT NDdeGetTrustedShareA, 20
IMPORT NDdeGetTrustedShareW, 20
IMPORT NDdeIsValidAppTopicListA, 4
IMPORT NDdeIsValidAppTopicListW, 4
IMPORT NDdeIsValidShareNameA, 4
IMPORT NDdeIsValidShareNameW, 4
IMPORT NDdeSetShareSecurityA, 16
IMPORT NDdeSetShareSecurityW, 16
IMPORT NDdeSetTrustedShareA, 12
IMPORT NDdeSetTrustedShareW, 12
IMPORT NDdeShareAddA, 20
IMPORT NDdeShareAddW, 20
IMPORT NDdeShareDelA, 12
IMPORT NDdeShareDelW, 12
IMPORT NDdeShareEnumA, 24
IMPORT NDdeShareEnumW, 24
IMPORT NDdeShareGetInfoA, 28
IMPORT NDdeShareGetInfoW, 28
IMPORT NDdeShareSetInfoA, 24
IMPORT NDdeShareSetInfoW, 24
IMPORT NDdeTrustedShareEnumA, 24
IMPORT NDdeTrustedShareEnumW, 24

%ifdef UNICODE

%define NDdeGetErrorString NDdeGetErrorStringW
%define NDdeGetShareSecurity NDdeGetShareSecurityW
%define NDdeGetTrustedShare NDdeGetTrustedShareW
%define NDdeIsValidAppTopicList NDdeIsValidAppTopicListW
%define NDdeIsValidShareName NDdeIsValidShareNameW
%define NDdeSetShareSecurity NDdeSetShareSecurityW
%define NDdeSetTrustedShare NDdeSetTrustedShareW
%define NDdeShareAdd NDdeShareAddW
%define NDdeShareDel NDdeShareDelW
%define NDdeShareEnum NDdeShareEnumW
%define NDdeShareGetInfo NDdeShareGetInfoW
%define NDdeShareSetInfo NDdeShareSetInfoW
%define NDdeTrustedShareEnum NDdeTrustedShareEnumW

%else  ;// ANSI

%define NDdeGetErrorString NDdeGetErrorStringA
%define NDdeGetShareSecurity NDdeGetShareSecurityA
%define NDdeGetTrustedShare NDdeGetTrustedShareA
%define NDdeIsValidAppTopicList NDdeIsValidAppTopicListA
%define NDdeIsValidShareName NDdeIsValidShareNameA
%define NDdeSetShareSecurity NDdeSetShareSecurityA
%define NDdeSetTrustedShare NDdeSetTrustedShareA
%define NDdeShareAdd NDdeShareAddA
%define NDdeShareDel NDdeShareDelA
%define NDdeShareEnum NDdeShareEnumA
%define NDdeShareGetInfo NDdeShareGetInfoA
%define NDdeShareSetInfo NDdeShareSetInfoA
%define NDdeTrustedShareEnum NDdeTrustedShareEnumA

%endif  ;// UNICODE

%endif  ;// __NASMX_NDDEAPI_INC__
