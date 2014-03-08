;//////////////////////////////////////////////////////////////
;//
;// NASMX Preprocessor
;// Copyright (c) 2005-2014, The NASMX Project
;//
;// ddeml.inc
;// Created by Rob Neff
;//

%ifndef __NASMX_DDEML_INCLUDED__
%define __NASMX_DDEML_INCLUDED__

NASMX_STRUC HSZPAIR
    NASMX_RESERVE hszSvc,   ptrdiff_t, 1
    NASMX_RESERVE hszTopic, ptrdiff_t, 1
NASMX_ENDSTRUC

NASMX_STRUC CONVCONTEXT
    NASMX_RESERVE cb,         uint32_t, 1
    NASMX_RESERVE wFlags,     uint32_t, 1
    NASMX_RESERVE wCountryID, uint32_t, 1
    NASMX_RESERVE iCodePage,  int32_t, 1
    NASMX_RESERVE dwLangID,   uint32_t, 1
    NASMX_RESERVE dwSecurity, uint32_t, 1
    NASMX_STRUC qos, SECURITY_QUALITY_OF_SERVICE
        NASMX_RESERVE Length,              int32_t, 1
        NASMX_RESERVE Impersonationlevel,  uint_t, 1
        NASMX_RESERVE ContextTrackingMode, uint8_t, 1
        NASMX_RESERVE EffectiveOnly,       uint8_t, 1
    NASMX_ENDSTRUC
NASMX_ENDSTRUC

NASMX_STRUC CONVINFO
    NASMX_RESERVE cb,            uint32_t, 1
    NASMX_RESERVE hUser,         ptrdiff_t, 1
    NASMX_RESERVE hConvPartner,  ptrdiff_t, 1
    NASMX_RESERVE hszSvcPartner, ptrdiff_t, 1
    NASMX_RESERVE hszServiceReq, ptrdiff_t, 1
    NASMX_RESERVE hszTopic,      ptrdiff_t, 1
    NASMX_RESERVE hszItem,       ptrdiff_t, 1
    NASMX_RESERVE wFmt,          uint32_t, 1
    NASMX_RESERVE wType,         uint32_t, 1
    NASMX_RESERVE wStatus,       uint32_t, 1
    NASMX_RESERVE wConvst,       uint32_t, 1
    NASMX_RESERVE wLastError,    uint32_t, 1
    NASMX_RESERVE hConvList,     ptrdiff_t, 1
    NASMX_STRUC ConvCtxt, CONVCONTEXT
        NASMX_RESERVE cb,         uint32_t, 1
        NASMX_RESERVE wFlags,     uint32_t, 1
        NASMX_RESERVE wCountryID, uint32_t, 1
        NASMX_RESERVE iCodePage,  int32_t, 1
        NASMX_RESERVE dwLangID,   uint32_t, 1
        NASMX_RESERVE dwSecurity, uint32_t, 1
        NASMX_STRUC qos, SECURITY_QUALITY_OF_SERVICE
            NASMX_RESERVE Length,              int32_t, 1
            NASMX_RESERVE Impersonationlevel,  uint_t, 1
            NASMX_RESERVE ContextTrackingMode, uint8_t, 1
            NASMX_RESERVE EffectiveOnly,       uint8_t, 1
        NASMX_ENDSTRUC
    NASMX_ENDSTRUC
    NASMX_RESERVE hwnd,          ptrdiff_t, 1
    NASMX_RESERVE hwndPartner,   ptrdiff_t, 1
NASMX_ENDSTRUC

;// conversation states (usState)
%define XST_NULL            0
%define XST_INCOMPLETE      1
%define XST_CONNECTED       2
%define XST_INIT1           3
%define XST_INIT2           4
%define XST_REQSENT         5
%define XST_DATARCVD        6
%define XST_POKESENT        7
%define XST_POKEACKRCVD     8
%define XST_EXECSENT        9
%define XST_EXECACKRCVD    10
%define XST_ADVSENT        11
%define XST_UNADVSENT      12
%define XST_ADVACKRCVD     13
%define XST_UNADVACKRCVD   14
%define XST_ADVDATASENT    15
%define XST_ADVDATAACKRCVD 16

;// used in LOWORD(dwData1) of XTYP_ADVREQ callbacks...
%define CADV_LATEACK 0FFFFh

;// conversation status bits (fsStatus)
%define ST_CONNECTED   1h
%define ST_ADVISE      2h
%define ST_ISLOCAL     4h
%define ST_BLOCKED     8h
%define ST_CLIENT     10h
%define ST_TERMINATED 20h
%define ST_INLIST     40h
%define ST_BLOCKNEXT  80h
%define ST_ISSELF    100h

;// DDE constants for wStatus field
%define DDE_FACK       8000h
%define DDE_FBUSY      4000h
%define DDE_FDEFERUPD  4000h
%define DDE_FACKREQ    8000h
%define DDE_FRELEASE   2000h
%define DDE_FREQUESTED 1000h
%define DDE_FAPPSTATUS  0FFh
%define DDE_FNOTPROCESSED 0h
%define DDE_FACKRESERVED (-1-DDE_FACK)|DDE_FBUSY|DDE_FAPPSTATUS
%define DDE_FADVRESERVED (-1-DDE_FACKREQ)|DDE_FDEFERUPD
%define DDE_FDATRESERVED (-1-DDE_FACKREQ)|DDE_FRELEASE|DDE_FREQUESTED
%define DDE_FPOKRESERVED (-1-DDE_FRELEASE)

%define CP_WINANSI    1004
%define CP_WINUNICODE 1200
%ifdef UNICODE
%define CP_WINNEUTRAL   CP_WINUNICODE
%else
%define CP_WINNEUTRAL   CP_WINANSI
%endif

;// transaction types
%define XTYPF_NOBLOCK 2h
%define XTYPF_NODATA 4h
%define XTYPF_ACKREQ 8h
%define XCLASS_MASK 0FC00h
%define XCLASS_BOOL 1000h
%define XCLASS_DATA 2000h
%define XCLASS_FLAGS 4000h
%define XCLASS_NOTIFICATION 8000h
%define XTYP_ERROR 0h|XCLASS_NOTIFICATION|XTYPF_NOBLOCK
%define XTYP_ADVDATA 10h|XCLASS_FLAGS
%define XTYP_ADVREQ 20h|XCLASS_DATA|XTYPF_NOBLOCK
%define XTYP_ADVSTART 30h|XCLASS_BOOL
%define XTYP_ADVSTOP 40h|XCLASS_NOTIFICATION
%define XTYP_EXECUTE 50h|XCLASS_FLAGS
%define XTYP_CONNECT 60h|XCLASS_BOOL|XTYPF_NOBLOCK
%define XTYP_CONNECT_CONFIRM 70h|XCLASS_NOTIFICATION|XTYPF_NOBLOCK
%define XTYP_XACT_COMPLETE 80h|XCLASS_NOTIFICATION
%define XTYP_POKE 90h|XCLASS_FLAGS
%define XTYP_REGISTER 0A0h|XCLASS_NOTIFICATION|XTYPF_NOBLOCK
%define XTYP_REQUEST 0B0h|XCLASS_DATA
%define XTYP_DISCONNECT 0C0h|XCLASS_NOTIFICATION|XTYPF_NOBLOCK
%define XTYP_UNREGISTER 0D0h|XCLASS_NOTIFICATION|XTYPF_NOBLOCK
%define XTYP_WILDCONNECT 0E0h|XCLASS_DATA|XTYPF_NOBLOCK
%define XTYP_MASK 0F0h
%define XTYP_SHIFT 4
%define TIMEOUT_ASYNC 0FFFFFFFFh
%define QID_SYNC 0FFFFFFFFh

;// public strings used in DDE
%define SZDDESYS_TOPIC         NASMX_TEXT("System")
%define SZDDESYS_ITEM_TOPICS   NASMX_TEXT("Topics")
%define SZDDESYS_ITEM_SYSITEMS NASMX_TEXT("SysItems")
%define SZDDESYS_ITEM_RTNMSG   NASMX_TEXT("ReturnMessage")
%define SZDDESYS_ITEM_STATUS   NASMX_TEXT("Status")
%define SZDDESYS_ITEM_FORMATS  NASMX_TEXT("Formats")
%define SZDDESYS_ITEM_HELP     NASMX_TEXT("Help")
%define SZDDE_ITEM_ITEMLIST    NASMX_TEXT("TopicItemList")

%define CBR_BLOCK 0FFFFh

;// Callback filter flags for use with standard apps.
%define CBF_FAIL_SELFCONNECTIONS    1000h
%define CBF_FAIL_CONNECTIONS        2000h
%define CBF_FAIL_ADVISES            4000h
%define CBF_FAIL_EXECUTES           8000h
%define CBF_FAIL_POKES             10000h
%define CBF_FAIL_REQUESTS          20000h
%define CBF_FAIL_ALLSVRXACTIONS    3F000h
%define CBF_SKIP_CONNECT_CONFIRMS  40000h
%define CBF_SKIP_REGISTRATIONS     80000h
%define CBF_SKIP_UNREGISTRATIONS  100000h
%define CBF_SKIP_DISCONNECTS      200000h
%define CBF_SKIP_ALLNOTIFICATIONS 3C0000h

;// Application command flags
%define APPCMD_CLIENTONLY  10h
%define APPCMD_FILTERINITS 20h
%define APPCMD_MASK      0FF0h

;// Application classification flags
%define APPCLASS_STANDARD 0h
%define APPCLASS_MASK 0Fh

%define EC_ENABLEALL 0
%define EC_ENABLEONE ST_BLOCKNEXT
%define EC_DISABLE ST_BLOCKED
%define EC_QUERYWAITING 2
%define DNS_REGISTER 1h
%define DNS_UNREGISTER 2h
%define DNS_FILTERON 4h
%define DNS_FILTEROFF 8h
%define HDATA_APPOWNED 1h

%define DMLERR_NO_ERROR 0
%define DMLERR_FIRST               4000h
%define DMLERR_ADVACKTIMEOUT       4000h
%define DMLERR_BUSY                4001h
%define DMLERR_DATAACKTIMEOUT      4002h
%define DMLERR_DLL_NOT_INITIALIZED 4003h
%define DMLERR_DLL_USAGE           4004h
%define DMLERR_EXECACKTIMEOUT      4005h
%define DMLERR_INVALIDPARAMETER    4006h
%define DMLERR_LOW_MEMORY          4007h
%define DMLERR_MEMORY_ERROR        4008h
%define DMLERR_NOTPROCESSED        4009h
%define DMLERR_NO_CONV_ESTABLISHED 400Ah
%define DMLERR_POKEACKTIMEOUT      400Bh
%define DMLERR_POSTMSG_FAILED      400Ch
%define DMLERR_REENTRANCY          400Dh
%define DMLERR_SERVER_DIED         400Eh
%define DMLERR_SYS_ERROR           400Fh
%define DMLERR_UNADVACKTIMEOUT     4010h
%define DMLERR_UNFOUND_QUEUE_ID    4011h
%define DMLERR_LAST                4011h

%ifndef NODDEMLSPY

NASMX_STRUC DDEML_MSG_HOOK_DATA
    NASMX_RESERVE uiLo,   size_t, 1
    NASMX_RESERVE uiHi,   size_t, 1
    NASMX_RESERVE cbData, uint32_t, 1
    NASMX_RESERVE xData,  uint32_t, 8
NASMX_ENDSTRUC

NASMX_STRUC MONMSGSTRUCT
    NASMX_RESERVE cb,     uint32_t, 1
    NASMX_RESERVE hwndTo, ptrdiff_t, 1
    NASMX_RESERVE dwTime, uint32_t, 1
    NASMX_RESERVE htask,  ptrdiff_t, 1
    NASMX_RESERVE wMsg,   uint32_t, 1
    NASMX_RESERVE wParam, size_t, 1
    NASMX_RESERVE lParam, size_t, 1
    NASMX_STRUC dmhd, DDEML_MSG_HOOK_DATA
        NASMX_RESERVE uiLo,   size_t, 1
        NASMX_RESERVE uiHi,   size_t, 1
        NASMX_RESERVE cbData, uint32_t, 1
        NASMX_RESERVE xData,  uint32_t, 8
    NASMX_ENDSTRUC
NASMX_ENDSTRUC

NASMX_STRUC MONCBSTRUCT
    NASMX_RESERVE cb,      uint32_t, 1
    NASMX_RESERVE dwTime,  uint32_t, 1
    NASMX_RESERVE htask,   int32_t, 1
    NASMX_RESERVE dwRet,   uint32_t, 1
    NASMX_RESERVE wType,   uint32_t, 1
    NASMX_RESERVE wFmt,    uint32_t, 1
    NASMX_RESERVE hConv,   ptrdiff_t, 1
    NASMX_RESERVE hsz1,    ptrdiff_t, 1
    NASMX_RESERVE hsz2,    ptrdiff_t, 1
    NASMX_RESERVE hData,   ptrdiff_t, 1
    NASMX_RESERVE dwData1, size_t, 1
    NASMX_RESERVE dwData2, size_t, 1
    NASMX_STRUC cc, CONVCONTEXT
        NASMX_RESERVE cb,         uint32_t, 1
        NASMX_RESERVE wFlags,     uint32_t, 1
        NASMX_RESERVE wCountryID, uint32_t, 1
        NASMX_RESERVE iCodePage,  int32_t, 1
        NASMX_RESERVE dwLangID,   uint32_t, 1
        NASMX_RESERVE dwSecurity, uint32_t, 1
        NASMX_STRUC qos, SECURITY_QUALITY_OF_SERVICE
            NASMX_RESERVE Length,              int32_t, 1
            NASMX_RESERVE Impersonationlevel,  uint_t, 1
            NASMX_RESERVE ContextTrackingMode, uint8_t, 1
            NASMX_RESERVE EffectiveOnly,       uint8_t, 1
        NASMX_ENDSTRUC
    NASMX_ENDSTRUC
    NASMX_RESERVE cbData,  uint32_t, 1
    NASMX_RESERVE Data,    uint32_t, 8
NASMX_ENDSTRUC

NASMX_STRUC MONHSZSTRUCTA
    NASMX_RESERVE cb,       uint32_t, 1
    NASMX_RESERVE fsAction, int32_t, 1
    NASMX_RESERVE dwTime,   uint32_t, 1
    NASMX_RESERVE hsz,      ptrdiff_t, 1
    NASMX_RESERVE htask,    ptrdiff_t, 1
    NASMX_RESERVE str,      char_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MONHSZSTRUCTW
    NASMX_RESERVE cb,       uint32_t, 1
    NASMX_RESERVE fsAction, int32_t, 1
    NASMX_RESERVE dwTime,   uint32_t, 1
    NASMX_RESERVE hsz,      ptrdiff_t, 1
    NASMX_RESERVE htask,    ptrdiff_t, 1
    NASMX_RESERVE str,      wchar_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MONERRSTRUCT
    NASMX_RESERVE cb,         uint32_t, 1
    NASMX_RESERVE wLastError, uint32_t, 1
    NASMX_RESERVE dwTime,     uint32_t, 1
    NASMX_RESERVE hTask,      ptrdiff_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MONLINKSTRUCT
    NASMX_RESERVE cb,           uint32_t, 1
    NASMX_RESERVE dwTime,       uint32_t, 1
    NASMX_RESERVE htask,        ptrdiff_t, 1
    NASMX_RESERVE fEstablished, int32_t, 1
    NASMX_RESERVE fNoData,      int32_t, 1
    NASMX_RESERVE hszSvc,       ptrdiff_t, 1
    NASMX_RESERVE hszTopic,     ptrdiff_t, 1
    NASMX_RESERVE hszItem,      ptrdiff_t, 1
    NASMX_RESERVE wFmt,         uint32_t, 1
    NASMX_RESERVE fServer,      int32_t, 1
    NASMX_RESERVE hConvServer,  ptrdiff_t, 1
    NASMX_RESERVE hConvClient,  ptrdiff_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MONCONVSTRUCT
    NASMX_RESERVE cb,          uint32_t, 1
    NASMX_RESERVE fConnect,    int32_t, 1
    NASMX_RESERVE dwTime,      uint32_t, 1
    NASMX_RESERVE hTask,       ptrdiff_t, 1
    NASMX_RESERVE hszSvc,      ptrdiff_t, 1
    NASMX_RESERVE hszTopic,    ptrdiff_t, 1
    NASMX_RESERVE hConvClient, ptrdiff_t, 1
    NASMX_RESERVE hConvServer, ptrdiff_t, 1
NASMX_ENDSTRUC

%define MAX_MONITORS 4
%define APPCLASS_MONITOR 1h
%define XTYP_MONITOR 0F0h|XCLASS_NOTIFICATION|XTYPF_NOBLOCK

%define MH_CREATE  1
%define MH_KEEP    2
%define MH_DELETE  3
%define MH_CLEANUP 4
%define MF_HSZ_INFO   1000000h
%define MF_SENDMSGS   2000000h
%define MF_POSTMSGS   4000000h
%define MF_CALLBACKS  8000000h
%define MF_ERRORS    10000000h
%define MF_LINKS     20000000h
%define MF_CONV      40000000h
%define MF_MASK     0FF000000h
%endif  ;// ifndef NODDEMLSPY

IMPORT DdeInitializeA, ptrdiff_t pidInst, ptrdiff_t pfnCallback, dword afCmd, dword ulRes
IMPORT DdeInitializeW, ptrdiff_t pidInst, ptrdiff_t pfnCallback, dword afCmd, dword ulRes
IMPORT DdeUninitialize, dword idInst
IMPORT DdeConnectList, dword idInst, ptrdiff_t hszService, ptrdiff_t hszTopic,  ptrdiff_t hConvList, ptrdiff_t pCC
IMPORT DdeQueryNextServer, ptrdiff_t hConvList, ptrdiff_t hConvPrev
IMPORT DdeDisconnectList, ptrdiff_t hConvList
IMPORT DdeConnect, dword idInst, ptrdiff_t hszService, ptrdiff_t hszTopic, ptrdiff_t pCC
IMPORT DdeDisconnect, ptrdiff_t hConv
IMPORT DdeReconnect, ptrdiff_t hConv
IMPORT DdeQueryConvInfo, ptrdiff_t hConv, dword idTransaction, ptrdiff_t pConvInfo
IMPORT DdeSetUserHandle, ptrdiff_t hConv, dword id, ptrdiff_t hUser
IMPORT DdeAbandonTransaction, dword idInst, ptrdiff_t hConv, dword idTransaction
IMPORT DdePostAdvise, dword idInst, ptrdiff_t hszTopic, ptrdiff_t hszItem
IMPORT DdeEnableCallback, dword idInst, ptrdiff_t hConv, uint_t wCmd
IMPORT DdeImpersonateClient, ptrdiff_t hConv
IMPORT DdeNameService, dword idInst, ptrdiff_t hsz1, ptrdiff_t hsz2, uint_t afCmd
IMPORT DdeClientTransaction, ptrdiff_t pData, dword cbData, ptrdiff_t hConv, ptrdiff_t hszItem, uint_t wFmt, uint_t wType, dword dwTimeout, ptrdiff_t pdwResult
IMPORT DdeCreateDataHandle, dword idInst, ptrdiff_t pSrc, dword cb, dword cbOff, ptrdiff_t hszItem, uint_t wFmt, uint_t afCmd
IMPORT DdeAddData, ptrdiff_t hData, ptrdiff_t pSrc, dword cb, dword cbOff
IMPORT DdeGetData, ptrdiff_t hData, ptrdiff_t pDst, dword cbMax, dword cbOff
IMPORT DdeAccessData, ptrdiff_t hData, ptrdiff_t pcbDataSize
IMPORT DdeUnaccessData, ptrdiff_t hData
IMPORT DdeFreeDataHandle, ptrdiff_t hData
IMPORT DdeGetLastError, dword idInst
IMPORT DdeCreateStringHandleA, dword idInst, ptrdiff_t psz, int_t iCodePage
IMPORT DdeCreateStringHandleW, dword idInst, ptrdiff_t psz, int_t iCodePage
IMPORT DdeQueryStringA, dword idInst, ptrdiff_t hsz, ptrdiff_t psz, dword cchMax, int_t iCodePage
IMPORT DdeQueryStringW, dword idInst, ptrdiff_t hsz, ptrdiff_t psz, dword cchMax, int_t iCodePage
IMPORT DdeFreeStringHandle, dword idInst, ptrdiff_t hsz
IMPORT DdeKeepStringHandle, dword idInst, ptrdiff_t hsz
IMPORT DdeCmpStringHandles, ptrdiff_t hsz1, ptrdiff_t hsz2

%ifdef UNICODE
%define DdeInitialize  DdeInitializeW
%define DdeCreateStringHandle  DdeCreateStringHandleW
%define DdeQueryString  DdeQueryStringW
%else
%define DdeInitialize  DdeInitializeA
%define DdeCreateStringHandle  DdeCreateStringHandleA
%define DdeQueryString  DdeQueryStringA
%endif

%endif  ;  __NASMX_DDEML_INCLUDED__
