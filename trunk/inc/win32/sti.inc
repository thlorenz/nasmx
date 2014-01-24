%ifndef __NASMX_STI_INC__
%define __NASMX_STI_INC__

IMPORT MigrateRegisteredSTIAppsForWIAEvents, 16
IMPORT RegSTIforWia, 16
IMPORT StiCreateInstanceA, 16
IMPORT StiCreateInstanceW, 16
%ifdef UNICODE
%define StiCreateInstance StiCreateInstanceW
%else  ;// ANSI
%define StiCreateInstance StiCreateInstanceA
%endif  ;// UNICODE

%endif  ;// __NASMX_STI_INC__