;//////////////////////////////////////////////////////////////
;//
;// NASMX Preprocessor
;// Copyright (c) 2005-2014, The NASMX Project
;//
;// dde.inc
;// Created by Rob Neff
;//

%ifndef __NASMX_DDE_INCLUDED__
%define __NASMX_DDE_INCLUDED__

%define WM_DDE_FIRST 3E0h
%define WM_DDE_INITIATE   WM_DDE_FIRST
%define WM_DDE_TERMINATE (WM_DDE_FIRST+1)
%define WM_DDE_ADVISE    (WM_DDE_FIRST+2)
%define WM_DDE_UNADVISE  (WM_DDE_FIRST+3)
%define WM_DDE_ACK       (WM_DDE_FIRST+4)
%define WM_DDE_DATA      (WM_DDE_FIRST+5)
%define WM_DDE_REQUEST   (WM_DDE_FIRST+6)
%define WM_DDE_POKE      (WM_DDE_FIRST+7)
%define WM_DDE_EXECUTE   (WM_DDE_FIRST+8)
%define WM_DDE_LAST      (WM_DDE_FIRST+8)

NASMX_STRUC DDEACK
    NASMX_RESERVE usFlags, uint16_t, 1         ; unsigned short bAppReturnCode:8,
                                               ;                      reserved:6,
                                               ;                         fBusy:1,
                                               ;                          fAck:1;
NASMX_ENDSTRUC

NASMX_STRUC DDEADVISE
    NASMX_RESERVE usFlags, uint16_t, 1         ; unsigned short reserved:14,
                                               ;               fDeferUpd:1,
                                               ;                 fAckReq:1;
    NASMX_RESERVE cfFormat, uint16_t, 1
NASMX_ENDSTRUC

NASMX_STRUC DDEDATA
    NASMX_RESERVE usFlags, uint16_t, 1         ; unsigned short unused:12,
                                               ;             fResponse:1,
                                               ;              fRelease:1,
                                               ;              reserved:1,
                                               ;               fAckReq:1;
    NASMX_RESERVE cfFormat, uint16_t, 1
    NASMX_RESERVE Value1,   uint8_t, 1
NASMX_ENDSTRUC

NASMX_STRUC DDEPOKE
    NASMX_RESERVE usFlags, uint16_t, 1         ; unsigned short unused:13,
                                               ;              fRelease:1,
                                               ;             fReserved:2;
    NASMX_RESERVE cfFormat, uint16_t, 1
    NASMX_RESERVE Value1,   uint8_t, 1
NASMX_ENDSTRUC

NASMX_STRUC DDELN
    NASMX_RESERVE usFlags, uint16_t, 1         ; unsigned short unused:13,
                                               ;              fRelease:1,
                                               ;             fDeferUpd:1,
                                               ;               fAckReq:1;
    NASMX_RESERVE cfFormat, uint16_t, 1
NASMX_ENDSTRUC

NASMX_STRUC DDEUP
    NASMX_RESERVE usFlags, uint16_t, 1         ; unsigned short unused:12,
                                               ;                  fAck:1,
                                               ;              fRelease:1,
                                               ;             fReserved:1,
                                               ;               fAckReq:1;
    NASMX_RESERVE cfFormat, uint16_t, 1
    NASMX_RESERVE rgb,      uint8_t, 1
NASMX_ENDSTRUC

IMPORT DdeSetQualityOfService, ptrdiff_t hwndClient, ptrdiff_t pqosNew, ptrdiff_t pqosPrev
IMPORT ImpersonateDdeClientWindow, ptrdiff_t hWndClient, ptrdiff_t hWndServer
IMPORT PackDDElParam, uint_t msg, ptrdiff_t uiLo, ptrdiff_t uiHi
IMPORT UnpackDDElParam, uint_t msg, size_t lParam, ptrdiff_t puiLo, ptrdiff_t puiHi
IMPORT FreeDDElParam, uint_t msg, size_t lParam
IMPORT ReuseDDElParam, size_t lParam, uint_t msgIn, uint_t msgOut, ptrdiff_t uiLo, ptrdiff_t uiHi

%endif  ;  __NASMX_DDE_INCLUDED__
