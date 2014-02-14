%ifndef __NASMX_CRYPTNET_INC__
%define __NASMX_CRYPTNET_INC__

IMPORT CryptGetObjectUrl, 32
IMPORT CryptInstallCancelRetrieval, 16
IMPORT CryptRetrieveObjectByUrlA, 36
IMPORT CryptRetrieveObjectByUrlW, 36
IMPORT CryptUninstallCancelRetrieval, 8

%ifdef UNICODE
%define CryptRetrieveObjectByUrl CryptRetrieveObjectByUrlW
%else  ;// ANSI
%define CryptRetrieveObjectByUrl CryptRetrieveObjectByUrlA
%endif  ;// UNICODE

%endif  ;// __NASMX_CRYPTNET_INC__
