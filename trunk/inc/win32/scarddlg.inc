%ifndef __NASMX_SCARDDLG_INC__
%define __NASMX_SCARDDLG_INC__

IMPORT GetOpenCardNameA, 4
IMPORT GetOpenCardNameW, 4
IMPORT SCardDlgExtendedError, 0
IMPORT SCardUIDlgSelectCardA, 4
IMPORT SCardUIDlgSelectCardW, 4

%ifdef UNICODE

%define GetOpenCardName GetOpenCardNameW
%define SCardUIDlgSelectCard SCardUIDlgSelectCardW

%else  ;// ANSI

%define GetOpenCardName GetOpenCardNameA
%define SCardUIDlgSelectCard SCardUIDlgSelectCardA

%endif  ;// UNICODE

%endif  ;// __NASMX_SCARDDLG_INC__