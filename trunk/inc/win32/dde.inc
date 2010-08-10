%ifndef __DDE_HEADER_INC
%define __DDE_HEADER_INC

%define DDE_FACK 8000h
%define DDE_FBUSY 4000h
%define DDE_FDEFERUPD 4000h
%define DDE_FACKREQ 8000h
%define DDE_FRELEASE 2000h
%define DDE_FREQUESTED 1000h
%define DDE_FAPPSTATUS 0FFh
%define DDE_FNOTPROCESSED 0h
%define DDE_FACKRESERVED (-1-DDE_FACK)|DDE_FBUSY|DDE_FAPPSTATUS
%define DDE_FADVRESERVED (-1-DDE_FACKREQ)|DDE_FDEFERUPD
%define DDE_FDATRESERVED (-1-DDE_FACKREQ)|DDE_FRELEASE|DDE_FREQUESTED
%define DDE_FPOKRESERVED (-1-DDE_FRELEASE)

%define WM_DDE_FIRST 3E0h
%define WM_DDE_INITIATE WM_DDE_FIRST
%define WM_DDE_TERMINATE WM_DDE_FIRST+1
%define WM_DDE_ADVISE WM_DDE_FIRST+2
%define WM_DDE_UNADVISE WM_DDE_FIRST+3
%define WM_DDE_ACK WM_DDE_FIRST+4
%define WM_DDE_DATA WM_DDE_FIRST+5
%define WM_DDE_REQUEST WM_DDE_FIRST+6
%define WM_DDE_POKE WM_DDE_FIRST+7
%define WM_DDE_EXECUTE WM_DDE_FIRST+8
%define WM_DDE_LAST WM_DDE_FIRST+8

NASMX_UNION DDEACK
%ifidni __OUTPUT_FORMAT__,macho
%elifidni __OUTPUT_FORMAT__,macho32
%elifidni __OUTPUT_FORMAT__,macho64
    NASMX_RESERVE usFlags, uint16_t, 1
%else
    NASMX_RESERVE bAppReturnCode, uint16_t, 1  ; unsigned short bAppReturnCode:8,
    NASMX_RESERVE reserved, uint16_t, 1        ;                      reserved:6,
    NASMX_RESERVE fBusy, uint16_t, 1           ;                         fBusy:1,
    NASMX_RESERVE fAck, uint16_t, 1            ;                          fAck:1;
%endif
NASMX_ENDUNION

NASMX_STRUC DDEADVISE
%ifidni __OUTPUT_FORMAT__,macho
%elifidni __OUTPUT_FORMAT__,macho32
%elifidni __OUTPUT_FORMAT__,macho64
    NASMX_RESERVE usFlags, uint16_t, 1
%else
    NASMX_UNION
        NASMX_RESERVE reserved, uint16_t, 1     ; unsigned short reserved:14,
        NASMX_RESERVE fDeferUpd, uint16_t, 1    ;               fDeferUpd:1
        NASMX_RESERVE fAckReq, uint16_t, 1      ;                 fAckReq:1
    NASMX_ENDUNION
%endif
    NASMX_RESERVE cfFormat, uint16_t, 1
NASMX_ENDSTRUC

NASMX_STRUC DDEDATA
%ifidni __OUTPUT_FORMAT__,macho
%elifidni __OUTPUT_FORMAT__,macho32
%elifidni __OUTPUT_FORMAT__,macho64
    NASMX_RESERVE usFlags, uint16_t, 1
%else
    NASMX_UNION
        NASMX_RESERVE unused, uint16_t, 1       ; unsigned short unused:12,
        NASMX_RESERVE fResponse, uint16_t, 1    ;             fResponse:1,
        NASMX_RESERVE fRelease, uint16_t, 1     ;              fRelease:1,
        NASMX_RESERVE reserved, uint16_t, 1     ;              reserved:1,
        NASMX_RESERVE fAckReq, uint16_t, 1      ;               fAckReq:1;
    NASMX_ENDUNION
%endif
    NASMX_RESERVE cfFormat, uint16_t, 1
    NASMX_RESERVE Value1, uint8_t, 1
NASMX_ALIGN 2
NASMX_ENDSTRUC

NASMX_STRUC DDEPOKE
%ifidni __OUTPUT_FORMAT__,macho
%elifidni __OUTPUT_FORMAT__,macho32
%elifidni __OUTPUT_FORMAT__,macho64
    NASMX_RESERVE usFlags, uint16_t, 1
%else
    NASMX_UNION
        NASMX_RESERVE unused, uint16_t, 1       ; unsigned short unused:13,
        NASMX_RESERVE fRelease, uint16_t, 1     ;              fRelease:1,
        NASMX_RESERVE fReserved, uint16_t, 1    ;             fReserved:2;
    NASMX_ENDUNION
%endif
    NASMX_RESERVE cfFormat, uint16_t, 1
    NASMX_RESERVE Value1, uint8_t, 1
NASMX_ALIGN 2
NASMX_ENDSTRUC

NASMX_STRUC DDELN
%ifidni __OUTPUT_FORMAT__,macho
%elifidni __OUTPUT_FORMAT__,macho32
%elifidni __OUTPUT_FORMAT__,macho64
    NASMX_RESERVE usFlags, uint16_t, 1
%else
    NASMX_UNION
        NASMX_RESERVE unused, uint16_t, 1       ; unsigned short unused:13,
        NASMX_RESERVE fRelease, uint16_t, 1     ;              fRelease:1,
        NASMX_RESERVE fDeferUpd, uint16_t, 1    ;             fDeferUpd:1,
        NASMX_RESERVE fAckReq, uint16_t, 1      ;               fAckReq:1;
    NASMX_ENDUNION
%endif
    NASMX_RESERVE cfFormat, uint16_t, 1
NASMX_ENDSTRUC

NASMX_STRUC DDEUP
%ifidni __OUTPUT_FORMAT__,macho
%elifidni __OUTPUT_FORMAT__,macho32
%elifidni __OUTPUT_FORMAT__,macho64
    NASMX_RESERVE usFlags, uint16_t, 1
%else
    NASMX_UNION
        NASMX_RESERVE unused, uint16_t, 1      ; unsigned short unused:12,
        NASMX_RESERVE fAck, uint16_t, 1        ;                  fAck:1,
        NASMX_RESERVE fRelease, uint16_t, 1    ;              fRelease:1,
        NASMX_RESERVE fReserved, uint16_t, 1   ;             fReserved:1,
        NASMX_RESERVE fAckReq, uint16_t, 1     ;               fAckReq:1;
	NASMX_ENDUNION
%endif
    NASMX_RESERVE cfFormat, uint16_t, 1
    NASMX_RESERVE xRGB1, uint8_t, 1
NASMX_ALIGN 2
NASMX_ENDSTRUC

NASMX_STRUC DDEML_MSG_HOOK_DATA
    NASMX_RESERVE uiLo, size_t, 1
    NASMX_RESERVE uiHi, size_t, 1
    NASMX_RESERVE cbData, uint32_t, 1
    NASMX_RESERVE xData, uint32_t, 8
NASMX_ENDSTRUC

%endif  ;  __DDE_HEADER_INC
