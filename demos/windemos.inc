%ifndef __NASMX_DEMOS_INC__
%define __NASMX_DEMOS_INC__

;// nasmx.inc should always be the first file included
%include '..\..\..\inc\nasmx.inc'

;// To speed up assembly we simply copy the values we use in our source
;// from the nasmx/inc/win32 include directory rather than including the
;// entire fileset as this really strains the preprocessor...
;//     %include '..\..\..\inc\win32\windows.inc'
;//     %include '..\..\..\inc\win32\kernel32.inc'
;//     %include '..\..\..\inc\win32\user32.inc'
;//     %include '..\..\..\inc\win32\msvcrt.inc'

;/////////////////////////////////////////////////////
;// WINDOWS.INC DEFINITIONS
;/////////////////////////////////////////////////////
%define MB_OK 0h
%define NULL 0
%define FALSE 0
%define TRUE 1
%define COLOR_BTNFACE 15
%define CS_HREDRAW 2h
%define CS_VREDRAW 1h
%define IDOK 1
%define IDCANCEL 2
%define IDI_APPLICATION 32512

%define CBS_DROPDOWN 2h
%define CBS_SORT 100h

%define LBS_SORT 2h
%define LBS_HASSTRINGS 40h

%define SS_CENTER 1h
%define SS_NOPREFIX 80h

%define MB_ICONHAND 10h
%define MB_ICONQUESTION 20h
%define MB_ICONEXCLAMATION 30h
%define MB_ICONASTERISK 40h
%define MB_ICONERROR MB_ICONHAND
%define MB_ICONINFORMATION MB_ICONASTERISK
%define MB_ICONSTOP MB_ICONHAND
%define MB_ICONWARNING MB_ICONEXCLAMATION

%define STD_INPUT_HANDLE -10
%define STD_OUTPUT_HANDLE -11
%define STD_ERROR_HANDLE -12

%define SW_SHOWNORMAL 1
%define WS_OVERLAPPED 0h
%define WS_EX_TOOLWINDOW 00000080h
%define WS_CHILD 40000000h
%define WS_CAPTION 0C00000h
%define WS_SYSMENU 80000h
%define WS_VISIBLE 10000000h
%define WS_THICKFRAME 40000h
%define WS_GROUP 20000h
%define WS_TABSTOP 10000h
%define WS_MINIMIZEBOX 20000h
%define WS_MAXIMIZEBOX 10000h
%define WS_OVERLAPPEDWINDOW WS_OVERLAPPED|WS_CAPTION|WS_SYSMENU|WS_THICKFRAME|WS_MINIMIZEBOX|WS_MAXIMIZEBOX
%define WS_EX_WINDOWEDGE 00000100h
%define WS_EX_CLIENTEDGE 00000200h
%define WS_EX_OVERLAPPEDWINDOW WS_EX_WINDOWEDGE|WS_EX_CLIENTEDGE

%define WM_CREATE 1h
%define WM_DESTROY 2h
%define WM_SETTEXT 0Ch
%define WM_GETTEXT 0Dh
%define WM_GETTEXTLENGTH 0Eh
%define WM_INITDIALOG 110h
%define WM_COMMAND 111h

;/////////////////////////////////////////////////////
;// WINDOWS.INC STRUCTURES
;/////////////////////////////////////////////////////

NASMX_STRUC WNDCLASSEX
    NASMX_RESERVE cbSize,        uint32_t, 1
    NASMX_RESERVE style,         uint32_t, 1
    NASMX_RESERVE lpfnWndProc,   ptrdiff_t, 1
    NASMX_RESERVE cbClsExtra,    int32_t, 1
    NASMX_RESERVE cbWndExtra,    int32_t, 1
    NASMX_RESERVE hInstance,     ptrdiff_t, 1
    NASMX_RESERVE hIcon,         ptrdiff_t, 1
    NASMX_RESERVE hCursor,       ptrdiff_t, 1
    NASMX_RESERVE hbrBackground, ptrdiff_t, 1
    NASMX_RESERVE lpszMenuName,  ptrdiff_t, 1
    NASMX_RESERVE lpszClassName, ptrdiff_t, 1
    NASMX_RESERVE hIconSm,       ptrdiff_t, 1
NASMX_ENDSTRUC

NASMX_STRUC MSG
    NASMX_RESERVE hwnd,    ptrdiff_t, 1
    NASMX_RESERVE message, uint32_t, 1
    NASMX_RESERVE wParam,  size_t, 1
    NASMX_RESERVE lParam,  size_t, 1
    NASMX_RESERVE time,    uint32_t, 1
	NASMX_STRUC pt, POINT
		NASMX_RESERVE x, int32_t, 1
		NASMX_RESERVE y, int32_t, 1
	NASMX_ENDSTRUC
	%ifidn __OUTPUT_FORMAT__,macho
	    NASMX_RESERVE lPrivate, int32_t, 1
	%elifidn __OUTPUT_FORMAT__,macho32
	    NASMX_RESERVE lPrivate, int32_t, 1
	%elifidn __OUTPUT_FORMAT__,macho64
	    NASMX_RESERVE lPrivate, int64_t, 1
	%endif
NASMX_ENDSTRUC

NASMX_STRUC RECT
    NASMX_RESERVE left,   int32_t, 1
    NASMX_RESERVE top,    int32_t, 1
    NASMX_RESERVE right,  int32_t, 1
    NASMX_RESERVE bottom, int32_t, 1
NASMX_ENDSTRUC

;/////////////////////////////////////////////////////
;// KERNEL32.INC PROTOTYPES
;/////////////////////////////////////////////////////
IMPORT ExitProcess, 4
IMPORT GetConsoleMode, 8
IMPORT GetLastError, 0
IMPORT GetProcessHeap, 0
IMPORT GetStdHandle, 4
IMPORT HeapAlloc, 12
IMPORT HeapFree, 12
IMPORT ReadFile, 20
IMPORT SetConsoleMode, 8
IMPORT WaitForSingleObject, 8
IMPORT WriteFile, 20

;/////////////////////////////////////////////////////
;// USER32.INC PROTOTYPES
;/////////////////////////////////////////////////////
IMPORT EndDialog, 8
IMPORT GetClientRect, 8
IMPORT PostQuitMessage, 4
IMPORT ShowWindow, 8
IMPORT TranslateMessage, 4
IMPORT UpdateWindow, 4


;/////////////////////////////////////////////////////
;// MSVCRT.INC PROTOTYPES
;/////////////////////////////////////////////////////
;//
;// C runtime functions must be handled with care when
;// switching between 32 and 64 bit mode since in 32 bit
;// mode they are defined as cdecl while in 64 bit mode
;// they are defined as default ( fastcall ).
;// VarArg functions such as printf should never be defined
;// ( prototyped ) to include a bytecount
%ifidn __BITS__,64
IMPORT printf
IMPORT scanf
%else
IMPORT cdecl, printf
IMPORT cdecl, scanf
IMPORT cdecl, _getch
%endif

%ifdef UNICODE

;/////////////////////////////////////////////////////
;// KERNEL32.INC UNICODE PROTOTYPES
;/////////////////////////////////////////////////////
IMPORT GetModuleHandleW, 4
%define GetModuleHandle GetModuleHandleW

;/////////////////////////////////////////////////////
;// USER32.INC UNICODE PROTOTYPES
;/////////////////////////////////////////////////////
;//
;// The following shows how to properly prototype an imported
;// windows function using NASMX syntax.
;// TODO: This will eventually be done for all imported functions.
;// IMPORT MessageBoxW, 16
IMPORT MessageBoxW, ptrdiff_t hWnd, ptrdiff_t lpText, ptrdiff_t lpCaption, uint32_t uType
%define MessageBox MessageBoxW
;// IMPORT CreateWindowExW, 48
IMPORT CreateWindowExW, uint_t dwExStyle, ptrdiff_t lpClassName, ptrdiff_t lpWindowName, uint_t dwStyle,\
                        int_t x, int_t y, int_t nWidth, int_t nHeight,\
                        ptrdiff_t hWndParent, ptrdiff_t hMenu, ptrdiff_t hInstance, ptrdiff_t lpParam
%define CreateWindowEx CreateWindowExW
;// IMPORT DefWindowProcW, 16
IMPORT DefWindowProcW, ptrdiff_t hWnd, uint_t Msg, ptrdiff_t wParam, ptrdiff_t lParam
%define DefWindowProc DefWindowProcW
IMPORT DialogBoxParamW, 20
%define DialogBoxParam DialogBoxParamW
IMPORT DispatchMessageW, 4
%define DispatchMessage DispatchMessageW
IMPORT GetMessageW, 16
%define GetMessage GetMessageW
IMPORT LoadIconW, 8
%define LoadIcon LoadIconW
IMPORT RegisterClassExW, 4
%define RegisterClassEx RegisterClassExW
IMPORT SendDlgItemMessageW, 20
%define SendDlgItemMessage SendDlgItemMessageW
%ifidni __OUTPUT_FORMAT__,win64
IMPORT wsprintfW
%else
IMPORT cdecl, wsprintfW
%endif
%define wsprintf wsprintfW

%else  ;// ANSI

;/////////////////////////////////////////////////////
;// KERNEL32.INC ANSI PROTOTYPES
;/////////////////////////////////////////////////////
IMPORT GetModuleHandleA, 4
%define GetModuleHandle GetModuleHandleA

;/////////////////////////////////////////////////////
;// USER32.INC ANSI PROTOTYPES
;/////////////////////////////////////////////////////
IMPORT CreateWindowExA, uint_t dwExStyle, ptrdiff_t lpClassName, ptrdiff_t lpWindowName, uint_t dwStyle,\
						int_t x, int_t y, int_t nWidth, int_t nHeight,\
						ptrdiff_t hWndParent, ptrdiff_t hMenu, ptrdiff_t hInstance, ptrdiff_t lpParam
%define CreateWindowEx CreateWindowExA
;// IMPORT DefWindowProcA, 16
IMPORT DefWindowProcA, ptrdiff_t hWnd, uint_t Msg, ptrdiff_t wParam, ptrdiff_t lParam
%define DefWindowProc DefWindowProcA
IMPORT DialogBoxParamA, 20
%define DialogBoxParam DialogBoxParamA
IMPORT DispatchMessageA, 4
%define DispatchMessage DispatchMessageA
IMPORT GetMessageA, 16
%define GetMessage GetMessageA
IMPORT LoadIconA, 8
%define LoadIcon LoadIconA
IMPORT MessageBoxA, ptrdiff_t hWnd, ptrdiff_t lpText, ptrdiff_t lpCaption, uint32_t uType
%define MessageBox MessageBoxA
IMPORT RegisterClassExA, 4
%define RegisterClassEx RegisterClassExA
IMPORT SendDlgItemMessageA, 20
%define SendDlgItemMessage SendDlgItemMessageA
%ifidni __OUTPUT_FORMAT__,win64
IMPORT wsprintfA
%else
IMPORT cdecl, wsprintfA
%endif
%define wsprintf wsprintfA

%endif  ;// UNICODE

%endif  ;// __NASMX_DEMOS_INC__
