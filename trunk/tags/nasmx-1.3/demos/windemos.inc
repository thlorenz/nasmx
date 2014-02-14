%ifndef __NASMX_DEMOS_INC__
%define __NASMX_DEMOS_INC__

;// nasmx.inc should always be the first file included.
;// If you get the following nasm error:
;//     fatal: unable to open include file 'nasmx.inc'
;// then you need to specify the full directory path to the NASMX
;// include directory using either the NASMENV environment variable or the
;// -I include switch from the command line.
;// For reference see the setpaths.bat file in the NASMX root directory.
%include 'nasmx.inc'

;// To speed up assembly we simply copy the values we use in our source
;// from the nasmx/inc/win32 include directory rather than including the
;// entire fileset as this really strains the preprocessor...
;//     %include 'win32\windows.inc'
;//     %include 'win32\kernel32.inc'
;//     %include 'win32\user32.inc'
;//     %include 'win32\msvcrt.inc'
;//
;// If you will be using additional Windows defines and structures for
;// your programs we recommend that you create your own include header
;// or simply include the above mentioned files in your source code.

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

%define IDC_ARROW 32512
%define IDC_IBEAM 32513
%define IDC_WAIT 32514
%define IDC_CROSS 32515
%define IDC_UPARROW 32516
%define IDC_SIZE 32640
%define IDC_ICON 32641

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
%define WM_CLOSE 10h
%define WM_INITDIALOG 110h
%define WM_COMMAND 111h
%define WM_ERASEBKGND 14h
%define WM_PAINT 0Fh
%define WM_TIMER 113h
%define WM_KEYDOWN 100h
%define VK_ESCAPE 1Bh
%define SRCCOPY 0CC0020h

;/////////////////////////////////////////////////////
;// WINDOWS.INC STRUCTURES
;/////////////////////////////////////////////////////

NASMX_STRUC POINT
	NASMX_RESERVE x, int32_t, 1
	NASMX_RESERVE y, int32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC RECT
	NASMX_RESERVE left,    int32_t, 1
	NASMX_RESERVE top,     int32_t, 1
	NASMX_RESERVE right,   int32_t, 1
	NASMX_RESERVE bottom,  int32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC PALETTEENTRY
    NASMX_RESERVE peRed,   int8_t, 1
    NASMX_RESERVE peGreen, int8_t, 1
    NASMX_RESERVE peBlue,  int8_t, 1
    NASMX_RESERVE peFlags, int8_t, 1
NASMX_ENDSTRUC

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

NASMX_STRUC BITMAPINFOHEADER
    NASMX_RESERVE biSize, int32_t, 1
    NASMX_RESERVE biWidth, int32_t, 1
    NASMX_RESERVE biHeight, int32_t, 1
    NASMX_RESERVE biPlanes, short_t, 1
    NASMX_RESERVE biBitCount, short_t, 1
    NASMX_RESERVE biCompression, int32_t, 1
    NASMX_RESERVE biSizeImage, int32_t, 1
    NASMX_RESERVE biXPelsPerMeter, int32_t, 1
    NASMX_RESERVE biYPelsPerMeter, int32_t, 1
    NASMX_RESERVE biClrUsed, int32_t, 1
    NASMX_RESERVE biClrImportant, int32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC PAINTSTRUCT
    NASMX_RESERVE hdc,         ptrdiff_t, 1
    NASMX_RESERVE fErase,      int32_t, 1
	NASMX_STRUC rcPaint, RECT
		NASMX_RESERVE left,    int32_t, 1
		NASMX_RESERVE top,     int32_t, 1
		NASMX_RESERVE right,   int32_t, 1
		NASMX_RESERVE bottom,  int32_t, 1
	NASMX_ENDSTRUC
    NASMX_RESERVE fRestore,    int32_t, 1
    NASMX_RESERVE fIncUpdate,  int32_t, 1
    NASMX_RESERVE rgbReserved, int8_t, 32 
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
IMPORT DestroyWindow, ptrdiff_t hWnd
IMPORT EndDialog, ptrdiff_t hDlg, size_t nResult
IMPORT GetClientRect, ptrdiff_t hWnd, ptrdiff_t lpRect
IMPORT PostQuitMessage, dword nExitCode
IMPORT ShowWindow, ptrdiff_t hWnd, dword nCmdShow
IMPORT TranslateMessage, ptrdiff_t lpMsg
IMPORT UpdateWindow, ptrdiff_t hWnd
IMPORT InvalidateRect, ptrdiff_t hWnd, ptrdiff_t lpRect, dword bErase
IMPORT SetTimer, ptrdiff_t hWnd, size_t nIDEvent, dword uElapse, ptrdiff_t lpTimerFunc
IMPORT KillTimer, ptrdiff_t hWnd, size_t nIDEvent

IMPORT CreateDCA, 16
IMPORT CreateDIBSection, 24
IMPORT SelectObject, 8
IMPORT DeleteObject, 4
IMPORT DeleteDC, 4
IMPORT CreateCompatibleDC, 4
IMPORT BeginPaint, 8
IMPORT BitBlt, 36
IMPORT EndPaint, 8
IMPORT CreateCompatibleBitmap, 12

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
IMPORT MessageBoxW, ptrdiff_t hWnd, ptrdiff_t lpText, ptrdiff_t lpCaption, uint32_t uType
%define MessageBox MessageBoxW
IMPORT CreateWindowExW, uint_t dwExStyle, ptrdiff_t lpClassName, ptrdiff_t lpWindowName, uint_t dwStyle,\
                        int_t x, int_t y, int_t nWidth, int_t nHeight,\
                        ptrdiff_t hWndParent, ptrdiff_t hMenu, ptrdiff_t hInstance, ptrdiff_t lpParam
%define CreateWindowEx CreateWindowExW
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
IMPORT PostMessageW, ptrdiff_t hWnd, dword Msg, size_t wParam, size_t lParam
%define PostMessage PostMessageW
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
IMPORT PostMessageA, ptrdiff_t hWnd, dword Msg, size_t wParam, size_t lParam
%define PostMessage PostMessageA
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
