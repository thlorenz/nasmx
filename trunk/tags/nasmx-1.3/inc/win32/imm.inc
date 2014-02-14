%ifndef __NASMX_IMM_INC__
%define __NASMX_IMM_INC__

%define IMEMENUITEM_STRING_SIZE 80
%define STYLE_DESCRIPTION_SIZE 32

; wParam for WM_IME_CONTROL
%define IMC_GETCANDIDATEPOS 7h
%define IMC_SETCANDIDATEPOS 8h
%define IMC_GETCOMPOSITIONFONT 9h
%define IMC_SETCOMPOSITIONFONT 0Ah
%define IMC_GETCOMPOSITIONWINDOW 0Bh
%define IMC_SETCOMPOSITIONWINDOW 0Ch
%define IMC_GETSTATUSWINDOWPOS 0Fh
%define IMC_SETSTATUSWINDOWPOS 10h
%define IMC_CLOSESTATUSWINDOW 21h
%define IMC_OPENSTATUSWINDOW 22h

; dwAction for ImmNotifyIME
%define NI_OPENCANDIDATE 10h
%define NI_CLOSECANDIDATE 11h
%define NI_SELECTCANDIDATESTR 12h
%define NI_CHANGECANDIDATELIST 13h
%define NI_FINALIZECONVERSIONRESULT 14h
%define NI_COMPOSITIONSTR 15h
%define NI_SETCANDIDATE_PAGESTART 16h
%define NI_SETCANDIDATE_PAGESIZE 17h
%define NI_IMEMENUSELECTED 18h

; lParam for WM_IME_SETCONTEXT
%define ISC_SHOWUICANDIDATEWINDOW 1h
%define ISC_SHOWUICOMPOSITIONWINDOW 80000000h
%define ISC_SHOWUIGUIDELINE 40000000h
%define ISC_SHOWUIALLCANDIDATEWINDOW 0Fh
%define ISC_SHOWUIALL 0C000000Fh

; dwIndex for ImmNotifyIME/NI_COMPOSITIONSTR
%define CPS_COMPLETE 1h
%define CPS_CONVERT 2h
%define CPS_REVERT 3h
%define CPS_CANCEL 4h

; the modifiers of hot key
%define MOD_ALT 1h
%define MOD_CONTROL 2h
%define MOD_SHIFT 4h
%define MOD_LEFT 8000h
%define MOD_RIGHT 4000h
%define MOD_ON_KEYUP 800h
%define MOD_IGNORE_ALL_MODIFIER 400h

; Windows for Simplified Chinese Edition hot key ID from 0x10 - 0x2F
%define IME_CHOTKEY_IME_NONIME_TOGGLE 10h
%define IME_CHOTKEY_SHAPE_TOGGLE 11h
%define IME_CHOTKEY_SYMBOL_TOGGLE 12h

; Windows for Japanese Edition hot key ID from 0x30 - 0x4F
%define IME_JHOTKEY_CLOSE_OPEN 30h

; Windows for Korean Edition hot key ID from 0x50 - 0x6F
%define IME_KHOTKEY_SHAPE_TOGGLE 50h
%define IME_KHOTKEY_HANJACONVERT 51h
%define IME_KHOTKEY_ENGLISH 52h

; Windows for Traditional Chinese Edition hot key ID from 0x70 - 0x8F
%define IME_THOTKEY_IME_NONIME_TOGGLE 70h
%define IME_THOTKEY_SHAPE_TOGGLE 71h
%define IME_THOTKEY_SYMBOL_TOGGLE 72h

; direct switch hot key ID from 0x100 - 0x11F
%define IME_HOTKEY_DSWITCH_FIRST 100h
%define IME_HOTKEY_DSWITCH_LAST 11Fh

; IME private hot key from 0x200 - 0x21F
%define IME_HOTKEY_PRIVATE_FIRST 200h
%define IME_ITHOTKEY_RESEND_RESULTSTR 200h
%define IME_ITHOTKEY_PREVIOUS_COMPOSITION 201h
%define IME_ITHOTKEY_UISTYLE_TOGGLE 202h
%define IME_ITHOTKEY_RECONVERTSTRING 203h
%define IME_HOTKEY_PRIVATE_LAST 21Fh

; parameter of ImmGetCompositionString
%define GCS_COMPREADSTR 1h
%define GCS_COMPREADATTR 2h
%define GCS_COMPREADCLAUSE 4h
%define GCS_COMPSTR 8h
%define GCS_COMPATTR 10h
%define GCS_COMPCLAUSE 20h
%define GCS_CURSORPOS 80h
%define GCS_DELTASTART 100h
%define GCS_RESULTREADSTR 200h
%define GCS_RESULTREADCLAUSE 400h
%define GCS_RESULTSTR 800h
%define GCS_RESULTCLAUSE 1000h

; style bit flags for WM_IME_COMPOSITION
%define CS_INSERTCHAR 2000h
%define CS_NOMOVECARET 4000h

; IME version constants
%define IMEVER_0310 3000Ah
%define IMEVER_0400 40000h

; IME property bits
%define IME_PROP_AT_CARET 10000h
%define IME_PROP_SPECIAL_UI 20000h
%define IME_PROP_CANDLIST_START_FROM_1 40000h
%define IME_PROP_UNICODE 80000h
%define IME_PROP_COMPLETE_ON_UNSELECT 100000h

; IME UICapability bits
%define UI_CAP_2700 1h
%define UI_CAP_ROT90 2h
%define UI_CAP_ROTANY 4h

; ImmSetCompositionString Capability bits
%define SCS_CAP_COMPSTR 1h
%define SCS_CAP_MAKEREAD 2h
%define SCS_CAP_SETRECONVERTSTRING 4h

; IME WM_IME_SELECT inheritance Capability bits
%define SELECT_CAP_CONVERSION 1h
%define SELECT_CAP_SENTENCE 2h

; ID for deIndex of ImmGetGuideLine
%define GGL_LEVEL 1h
%define GGL_INDEX 2h
%define GGL_STRING 3h
%define GGL_PRIVATE 4h

; ID for dwLevel of GUIDELINE Structure
%define GL_LEVEL_NOGUIDELINE 0h
%define GL_LEVEL_FATAL 1h
%define GL_LEVEL_ERROR 2h
%define GL_LEVEL_WARNING 3h
%define GL_LEVEL_INFORMATION 4h

; ID for dwIndex of GUIDELINE Structure
%define GL_ID_UNKNOWN 0h
%define GL_ID_NOMODULE 1h
%define GL_ID_NODICTIONARY 10h
%define GL_ID_CANNOTSAVE 11h
%define GL_ID_NOCONVERT 20h
%define GL_ID_TYPINGERROR 21h
%define GL_ID_TOOMANYSTROKE 22h
%define GL_ID_READINGCONFLICT 23h
%define GL_ID_INPUTREADING 24h
%define GL_ID_INPUTRADICAL 25h
%define GL_ID_INPUTCODE 26h
%define GL_ID_INPUTSYMBOL 27h
%define GL_ID_CHOOSECANDIDATE 28h
%define GL_ID_REVERSECONVERSION 29h
%define GL_ID_PRIVATE_FIRST 8000h
%define GL_ID_PRIVATE_LAST 0FFFFh

; ID for dwIndex of ImmGetProperty
%define IGP_PROPERTY 4h
%define IGP_CONVERSION 8h
%define IGP_SENTENCE 0Ch
%define IGP_UI 10h
%define IGP_SETCOMPSTR 14h
%define IGP_SELECT 18h
%define IGP_GETIMEVERSION -4

; dwIndex for ImmSetCompositionString API
%define SCS_SETSTR GCS_COMPREADSTR|GCS_COMPSTR
%define SCS_CHANGEATTR GCS_COMPREADATTR|GCS_COMPATTR
%define SCS_CHANGECLAUSE GCS_COMPREADCLAUSE|GCS_COMPCLAUSE
%define SCS_SETRECONVERTSTRING 10000h
%define SCS_QUERYRECONVERTSTRING 20000h

; attribute for COMPOSITIONSTRING Structure
%define ATTR_INPUT 0h
%define ATTR_TARGET_CONVERTED 1h
%define ATTR_CONVERTED 2h
%define ATTR_TARGET_NOTCONVERTED 3h
%define ATTR_INPUT_ERROR 4h
%define ATTR_FIXEDCONVERTED 5h

; bit field for IMC_SETCOMPOSITIONWINDOW, IMC_SETCANDIDATEWINDOW
%define CFS_DEFAULT 0h
%define CFS_RECT 1h
%define CFS_POINT 2h
%define CFS_SCREEN 4h
%define CFS_FORCE_POSITION 20h
%define CFS_CANDIDATEPOS 40h
%define CFS_EXCLUDE 80h

; conversion direction for ImmGetConversionList
%define GCL_CONVERSION 1h
%define GCL_REVERSECONVERSION 2h
%define GCL_REVERSE_LENGTH 3h

; bit field for conversion mode
%define IME_CMODE_ALPHANUMERIC 0h
%define IME_CMODE_NATIVE 1h
%define IME_CMODE_CHINESE IME_CMODE_NATIVE
%define IME_CMODE_HANGEUL IME_CMODE_NATIVE
%define IME_CMODE_JAPANESE IME_CMODE_NATIVE
%define IME_CMODE_KATAKANA 2h
%define IME_CMODE_LANGUAGE 3h
%define IME_CMODE_FULLSHAPE 8h
%define IME_CMODE_ROMAN 10h
%define IME_CMODE_CHARCODE 20h
%define IME_CMODE_HANJACONVERT 40h
%define IME_CMODE_SOFTKBD 80h
%define IME_CMODE_NOCONVERSION 100h
%define IME_CMODE_EUDC 200h
%define IME_CMODE_SYMBOL 400h
%define IME_CMODE_FIXED 800h
%define IME_CMODE_RESERVED 0F0000000h

; bit field for sentence mode
%define IME_SMODE_NONE 0h
%define IME_SMODE_PLAURALCLAUSE 1h
%define IME_SMODE_SINGLECONVERT 2h
%define IME_SMODE_AUTOMATIC 4h
%define IME_SMODE_PHRASEPREDICT 8h
%define IME_SMODE_CONVERSATION 10h
%define IME_SMODE_RESERVED 0F000h

; style of candidate
%define IME_CAND_UNKNOWN 0h
%define IME_CAND_READ 1h
%define IME_CAND_CODE 2h
%define IME_CAND_MEANING 3h
%define IME_CAND_RADICAL 4h
%define IME_CAND_STROKE 5h

; wParam of report message WM_IME_NOTIFY
%define IMN_CLOSESTATUSWINDOW 1h
%define IMN_OPENSTATUSWINDOW 2h
%define IMN_CHANGECANDIDATE 3h
%define IMN_CLOSECANDIDATE 4h
%define IMN_OPENCANDIDATE 5h
%define IMN_SETCONVERSIONMODE 6h
%define IMN_SETSENTENCEMODE 7h
%define IMN_SETOPENSTATUS 8h
%define IMN_SETCANDIDATEPOS 9h
%define IMN_SETCOMPOSITIONFONT 0Ah
%define IMN_SETCOMPOSITIONWINDOW 0Bh
%define IMN_SETSTATUSWINDOWPOS 0Ch
%define IMN_GUIDELINE 0Dh
%define IMN_PRIVATE 0Eh

; wParam of report message WM_IME_REQUEST
%define IMR_COMPOSITIONWINDOW 1
%define IMR_CANDIDATEWINDOW 2
%define IMR_COMPOSITIONFONT 3
%define IMR_RECONVERTSTRING 4
%define IMR_CONFIRMRECONVERTSTRING 5
%define IMR_QUERYCHARPOSITION 6
%define IMR_DOCUMENTFEED 7

; error code of ImmGetCompositionString
%define IMM_ERROR_NODATA -1
%define IMM_ERROR_GENERAL -2

; dialog mode of ImmConfigureIME
%define IME_CONFIG_GENERAL 1
%define IME_CONFIG_REGISTERWORD 2
%define IME_CONFIG_SELECTDICTIONARY 3

; flags for ImmEscape
%define IME_ESC_QUERY_SUPPORT 3h
%define IME_ESC_RESERVED_FIRST 4h
%define IME_ESC_RESERVED_LAST 7FFh
%define IME_ESC_PRIVATE_FIRST 800h
%define IME_ESC_PRIVATE_LAST 0FFFh
%define IME_ESC_SEQUENCE_TO_INTERNAL 1001h
%define IME_ESC_GET_EUDC_DICTIONARY 1003h
%define IME_ESC_SET_EUDC_DICTIONARY 1004h
%define IME_ESC_MAX_KEY 1005h
%define IME_ESC_IME_NAME 1006h
%define IME_ESC_SYNC_HOTKEY 1007h
%define IME_ESC_HANJA_MODE 1008h
%define IME_ESC_AUTOMATA 1009h
%define IME_ESC_PRIVATE_HOTKEY 100ah
%define IME_ESC_GETHELPFILENAME 100bh

; style of word registration
%define IME_REGWORD_STYLE_EUDC 1h
%define IME_REGWORD_STYLE_USER_FIRST 80000000h
%define IME_REGWORD_STYLE_USER_LAST 0FFFFh

; dwFlags for ImmAssociateContextEx
%define IACE_CHILDREN 1h
%define IACE_DEFAULT 10h
%define IACE_IGNORENOCONTEXT 20h

; dwFlags for ImmGetImeMenuItems
%define IGIMIF_RIGHTMENU 1

; dwType for ImmGetImeMenuItems
%define IGIMII_CMODE 1h
%define IGIMII_SMODE 2h
%define IGIMII_CONFIGURE 4h
%define IGIMII_TOOLS 8h
%define IGIMII_HELP 10h
%define IGIMII_OTHER 20h
%define IGIMII_INPUTTOOLS 40h

; fType of IMEMENUITEMINFO structure
%define IMFT_RADIOCHECK 1h
%define IMFT_SEPARATOR 2h
%define IMFT_SUBMENU 4h

; fState of IMEMENUITEMINFO structure
%define IMFS_GRAYED MFS_GRAYED
%define IMFS_DISABLED MFS_DISABLED
%define IMFS_CHECKED MFS_CHECKED
%define IMFS_HILITE MFS_HILITE
%define IMFS_ENABLED MFS_ENABLED
%define IMFS_UNCHECKED MFS_UNCHECKED
%define IMFS_UNHILITE MFS_UNHILITE
%define IMFS_DEFAULT MFS_DEFAULT

; type of soft keyboard
; for Windows Tranditional Chinese Edition
%define SOFTKEYBOARD_TYPE_T1 1h
; for Windows Simplified Chinese Edition
%define SOFTKEYBOARD_TYPE_C1 2h


IMPORT ImmAssociateContext, 8
IMPORT ImmAssociateContextEx, 12
IMPORT ImmConfigureIMEA, 16
IMPORT ImmConfigureIMEW, 16
IMPORT ImmCreateContext, 0
IMPORT ImmCreateIMCC, 4
IMPORT ImmCreateSoftKeyboard, 16
IMPORT ImmDestroyContext, 4
IMPORT ImmDestroyIMCC, 4
IMPORT ImmDestroySoftKeyboard, 4
IMPORT ImmDisableIME, 4
IMPORT ImmDisableTextFrameService, 4
IMPORT ImmEnumInputContext, 12
IMPORT ImmEnumRegisterWordA, 24
IMPORT ImmEnumRegisterWordW, 24
IMPORT ImmEscapeA, 16
IMPORT ImmEscapeW, 16
IMPORT ImmGenerateMessage, 4
IMPORT ImmGetCandidateListA, 16
IMPORT ImmGetCandidateListCountA, 8
IMPORT ImmGetCandidateListCountW, 8
IMPORT ImmGetCandidateListW, 16
IMPORT ImmGetCandidateWindow, 12
IMPORT ImmGetCompositionFontA, 8
IMPORT ImmGetCompositionFontW, 8
IMPORT ImmGetCompositionStringA, 16
IMPORT ImmGetCompositionStringW, 16
IMPORT ImmGetCompositionWindow, 8
IMPORT ImmGetContext, 4
IMPORT ImmGetConversionListA, 24
IMPORT ImmGetConversionListW, 24
IMPORT ImmGetConversionStatus, 12
IMPORT ImmGetDefaultIMEWnd, 4
IMPORT ImmGetDescriptionA, 12
IMPORT ImmGetDescriptionW, 12
IMPORT ImmGetGuideLineA, 16
IMPORT ImmGetGuideLineW, 16
IMPORT ImmGetHotKey, 16
IMPORT ImmGetIMCCLockCount, 4
IMPORT ImmGetIMCCSize, 4
IMPORT ImmGetIMCLockCount, 4
IMPORT ImmGetIMEFileNameA, 12
IMPORT ImmGetIMEFileNameW, 12
IMPORT ImmGetImeMenuItemsA, 24
IMPORT ImmGetImeMenuItemsW, 24
IMPORT ImmGetOpenStatus, 4
IMPORT ImmGetProperty, 8
IMPORT ImmGetRegisterWordStyleA, 12
IMPORT ImmGetRegisterWordStyleW, 12
IMPORT ImmGetStatusWindowPos, 8
IMPORT ImmGetVirtualKey, 4
IMPORT ImmInstallIMEA, 8
IMPORT ImmInstallIMEW, 8
IMPORT ImmIsIME, 4
IMPORT ImmIsUIMessageA, 16
IMPORT ImmIsUIMessageW, 16
IMPORT ImmLockIMC, 4
IMPORT ImmLockIMCC, 4
IMPORT ImmNotifyIME, 16
IMPORT ImmReSizeIMCC, 8
IMPORT ImmRegisterWordA, 16
IMPORT ImmRegisterWordW, 16
IMPORT ImmReleaseContext, 8
IMPORT ImmRequestMessageA, 12
IMPORT ImmRequestMessageW, 12
IMPORT ImmSetCandidateWindow, 8
IMPORT ImmSetCompositionFontA, 8
IMPORT ImmSetCompositionFontW, 8
IMPORT ImmSetCompositionStringA, 24
IMPORT ImmSetCompositionStringW, 24
IMPORT ImmSetCompositionWindow, 8
IMPORT ImmSetConversionStatus, 12
IMPORT ImmSetHotKey, 16
IMPORT ImmSetOpenStatus, 8
IMPORT ImmSetStatusWindowPos, 8
IMPORT ImmShowSoftKeyboard, 8
IMPORT ImmSimulateHotKey, 8
IMPORT ImmUnlockIMC, 4
IMPORT ImmUnlockIMCC, 4
IMPORT ImmUnregisterWordA, 16
IMPORT ImmUnregisterWordW, 16

NASMX_STRUC COMPOSITIONFORM
    NASMX_RESERVE dwStyle, int32_t, 1
	NASMX_STRUC ptCurrentPos, POINT
		NASMX_RESERVE x, int32_t, 1
		NASMX_RESERVE y, int32_t, 1
	NASMX_ENDSTRUC
	NASMX_STRUC rcArea, RECT
		NASMX_RESERVE left, int32_t, 1
		NASMX_RESERVE top, int32_t, 1
		NASMX_RESERVE right, int32_t, 1
		NASMX_RESERVE bottom, int32_t, 1
	NASMX_ENDSTRUC
NASMX_ENDSTRUC

NASMX_STRUC CANDIDATEFORM
    NASMX_RESERVE dwIndex, int32_t, 1
    NASMX_RESERVE dwStyle, int32_t, 1
    NASMX_STRUC ptCurrentPos, POINT
		NASMX_RESERVE x, int32_t, 1
		NASMX_RESERVE y, int32_t, 1
	NASMX_ENDSTRUC
	NASMX_STRUC rcArea, RECT
		NASMX_RESERVE left, int32_t, 1
		NASMX_RESERVE top, int32_t, 1
		NASMX_RESERVE right, int32_t, 1
		NASMX_RESERVE bottom, int32_t, 1
	NASMX_ENDSTRUC
NASMX_ENDSTRUC

NASMX_STRUC CANDIDATELIST
    NASMX_RESERVE dwSize, int32_t, 1
    NASMX_RESERVE dwStyle, int32_t, 1
    NASMX_RESERVE dwCount, int32_t, 1
    NASMX_RESERVE dwSelection, int32_t, 1
    NASMX_RESERVE dwPageStart, int32_t, 1
    NASMX_RESERVE dwPageSize, int32_t, 1
    NASMX_RESERVE dwOffset1, int32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC REGISTERWORD
    NASMX_RESERVE lpReading, ptrdiff_t, 1
    NASMX_RESERVE lpWord, ptrdiff_t, 1
NASMX_ENDSTRUC

NASMX_STRUC RECONVERTSTRING
    NASMX_RESERVE dwSize, int32_t, 1
    NASMX_RESERVE dwVersion, int32_t, 1
    NASMX_RESERVE dwStrLen, int32_t, 1
    NASMX_RESERVE dwStrOffset, int32_t, 1
    NASMX_RESERVE dwCompStrLen, int32_t, 1
    NASMX_RESERVE dwCompStrOffset, int32_t, 1
    NASMX_RESERVE dwTargetStrLen, int32_t, 1
    NASMX_RESERVE dwTargetStrOffset, int32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC STYLEBUF
    NASMX_RESERVE dwStyle, int32_t, 1
    NASMX_RESERVE szDescription, NASMX_TCHAR, STYLE_DESCRIPTION_SIZE
NASMX_ENDSTRUC

NASMX_STRUC IMEMENUITEMINFO
    NASMX_RESERVE cbSize, uint32_t, 1
    NASMX_RESERVE fType, uint32_t, 1
    NASMX_RESERVE fState, uint32_t, 1
    NASMX_RESERVE wID, uint32_t, 1
    NASMX_RESERVE hbmpChecked, ptrdiff_t, 1
    NASMX_RESERVE hbmpUnchecked, ptrdiff_t, 1
    NASMX_RESERVE dwItemData, int32_t, 1
    NASMX_RESERVE szString, NASMX_TCHAR, IMEMENUITEM_STRING_SIZE
    NASMX_RESERVE hbmpItem, ptrdiff_t, 1
NASMX_ENDSTRUC

NASMX_STRUC IMECHARPOSITION
    NASMX_RESERVE dwSize, uint32_t, 1
    NASMX_RESERVE dwCharPos, uint32_t, 1
    NASMX_STRUC pt, POINT
        NASMX_RESERVE x, int32_t, 1
        NASMX_RESERVE y, int32_t, 1
    NASMX_ENDSTRUC
    NASMX_RESERVE cLineHeight, uint32_t, 1
    NASMX_STRUC rcDocument, RECT
        NASMX_RESERVE left, int32_t, 1
        NASMX_RESERVE top, int32_t, 1
        NASMX_RESERVE right, int32_t, 1
        NASMX_RESERVE bottom, int32_t, 1
    NASMX_ENDSTRUC
NASMX_ENDSTRUC



%ifdef UNICODE

%define ImmConfigureIME ImmConfigureIMEW
%define ImmEnumRegisterWord ImmEnumRegisterWordW
%define ImmEscape ImmEscapeW
%define ImmGetCandidateListCount ImmGetCandidateListCountW
%define ImmGetCandidateList ImmGetCandidateListW
%define ImmGetCompositionFont ImmGetCompositionFontW
%define ImmGetCompositionString ImmGetCompositionStringW
%define ImmGetConversionList ImmGetConversionListW
%define ImmGetDescription ImmGetDescriptionW
%define ImmGetGuideLine ImmGetGuideLineW
%define ImmGetIMEFileName ImmGetIMEFileNameW
%define ImmGetImeMenuItems ImmGetImeMenuItemsW
%define ImmGetRegisterWordStyle ImmGetRegisterWordStyleW
%define ImmInstallIME ImmInstallIMEW
%define ImmIsUIMessage ImmIsUIMessageW
%define ImmRegisterWord ImmRegisterWordW
%define ImmRequestMessage ImmRequestMessageW
%define ImmSetCompositionFont ImmSetCompositionFontW
%define ImmSetCompositionString ImmSetCompositionStringW
%define ImmUnregisterWord ImmUnregisterWordW
%define ImmConfigureIME ImmConfigureIMEW
%define ImmEnumRegisterWord ImmEnumRegisterWordW
%define ImmGetCandidateListCount ImmGetCandidateListCountW
%define ImmGetCandidateList ImmGetCandidateListW
%define ImmGetCompositionFont ImmGetCompositionFontW
%define ImmGetCompositionString ImmGetCompositionStringW
%define ImmGetConversionList ImmGetConversionListW
%define ImmGetDescription ImmGetDescriptionW
%define ImmGetGuideLine ImmGetGuideLineW
%define ImmGetIMEFileName ImmGetIMEFileNameW
%define ImmGetImeMenuItems ImmGetImeMenuItemsW
%define ImmGetRegisterWordStyle ImmGetRegisterWordStyleW
%define ImmInstallIME ImmInstallIMEW
%define ImmIsUIMessage ImmIsUIMessageW
%define ImmRegisterWord ImmRegisterWordW
%define ImmRequestMessage ImmRequestMessageW
%define ImmSetCompositionFont ImmSetCompositionFontW
%define ImmSetCompositionString ImmSetCompositionStringW
%define ImmUnregisterWord ImmUnregisterWordW

%else

%define ImmConfigureIME ImmConfigureIMEA
%define ImmEnumRegisterWord ImmEnumRegisterWordA
%define ImmEscape ImmEscapeA
%define ImmGetCandidateList ImmGetCandidateListA
%define ImmGetCandidateListCount ImmGetCandidateListCountA
%define ImmGetCompositionFont ImmGetCompositionFontA
%define ImmGetCompositionString ImmGetCompositionStringA
%define ImmGetConversionList ImmGetConversionListA
%define ImmGetDescription ImmGetDescriptionA
%define ImmGetGuideLine ImmGetGuideLineA
%define ImmGetIMEFileName ImmGetIMEFileNameA
%define ImmGetImeMenuItems ImmGetImeMenuItemsA
%define ImmGetRegisterWordStyle ImmGetRegisterWordStyleA
%define ImmInstallIME ImmInstallIMEA
%define ImmIsUIMessage ImmIsUIMessageA
%define ImmRegisterWord ImmRegisterWordA
%define ImmRequestMessage ImmRequestMessageA
%define ImmSetCompositionFont ImmSetCompositionFontA
%define ImmSetCompositionString ImmSetCompositionStringA
%define ImmUnregisterWord ImmUnregisterWordA
%define ImmConfigureIME ImmConfigureIMEA
%define ImmEnumRegisterWord ImmEnumRegisterWordA
%define ImmGetCandidateList ImmGetCandidateListA
%define ImmGetCandidateListCount ImmGetCandidateListCountA
%define ImmGetCompositionFont ImmGetCompositionFontA
%define ImmGetCompositionString ImmGetCompositionStringA
%define ImmGetConversionList ImmGetConversionListA
%define ImmGetDescription ImmGetDescriptionA
%define ImmGetGuideLine ImmGetGuideLineA
%define ImmGetIMEFileName ImmGetIMEFileNameA
%define ImmGetImeMenuItems ImmGetImeMenuItemsA
%define ImmGetRegisterWordStyle ImmGetRegisterWordStyleA
%define ImmInstallIME ImmInstallIMEA
%define ImmIsUIMessage ImmIsUIMessageA
%define ImmRegisterWord ImmRegisterWordA
%define ImmRequestMessage ImmRequestMessageA
%define ImmSetCompositionFont ImmSetCompositionFontA
%define ImmSetCompositionString ImmSetCompositionStringA
%define ImmUnregisterWord ImmUnregisterWordA

%endif


%endif  ; __NASMX_IMM_INC__
