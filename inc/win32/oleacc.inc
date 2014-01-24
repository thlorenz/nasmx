%ifndef __NASMX_OLEACC_INC__
%define __NASMX_OLEACC_INC__

IMPORT AccessibleChildren, 20
IMPORT AccessibleObjectFromEvent, 20
IMPORT AccessibleObjectFromPoint, 16
IMPORT AccessibleObjectFromWindow, 16
IMPORT CreateStdAccessibleObject, 16
IMPORT CreateStdAccessibleProxyA, 20
IMPORT CreateStdAccessibleProxyW, 20
IMPORT GetOleaccVersionInfo, 8
IMPORT GetRoleTextA, 12
IMPORT GetRoleTextW, 12
IMPORT GetStateTextA, 12
IMPORT GetStateTextW, 12
IMPORT LresultFromObject, 12
IMPORT ObjectFromLresult, 16
IMPORT WindowFromAccessibleObject, 8

%ifdef UNICODE

%define CreateStdAccessibleProxy CreateStdAccessibleProxyW
%define GetRoleText GetRoleTextW
%define GetStateText GetStateTextW

%else  ;// ANSI

%define CreateStdAccessibleProxy CreateStdAccessibleProxyA
%define GetRoleText GetRoleTextA
%define GetStateText GetStateTextA

%endif  ;// UNICODE

%endif  ;// __NASMX_OLEACC_INC__
