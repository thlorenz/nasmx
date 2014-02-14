%ifndef __NASMX_DEMOS_INC__
%define __NASMX_DEMOS_INC__

;// nasmx.inc should always be the first file included
%include "..\..\..\inc\nasmx.inc"

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
%define WM_ERASEBKGND 14h
%define WM_PAINT 0Fh
%define WM_TIMER 113h
%define WM_KEYDOWN 100h
%define VK_ESCAPE 1Bh
%define SRCCOPY 0CC0020h

%define WM_CLOSE                        0x0010
%define WM_SIZE 5h
%assign	PFD_SUPPORT_OPENGL		0x20
%assign	PFD_MAIN_PLANE			0
%assign	PFD_TYPE_RGBA			0
%assign	PFD_DOUBLEBUFFER		0x1
%assign	PFD_DRAW_TO_WINDOW		0x4

%define IDC_ARROW 32512
%define WM_QUIT                         0x0012
%define SW_SHOW 5
%define PM_REMOVE 1h
%define COLOR_GRAYTEXT 17

%imacro m2m 2
push dword %2
pop dword %1
%endmacro


;/////////////////////////////////////////////////////
;// WINDOWS.INC STRUCTURES
;/////////////////////////////////////////////////////
NASMX_STRUC POINT
	NASMX_RESERVE x, int32_t, 1
	NASMX_RESERVE y, int32_t, 1
NASMX_ENDSTRUC

NASMX_STRUC RECT
    NASMX_RESERVE left,   int32_t, 1
    NASMX_RESERVE top,    int32_t, 1
    NASMX_RESERVE right,  int32_t, 1
    NASMX_RESERVE bottom, int32_t, 1
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


NASMX_STRUC PIXELFORMATDESCRIPTOR
    NASMX_RESERVE nSize, short_t, 1
    NASMX_RESERVE nVersion, short_t, 1
    NASMX_RESERVE dwFlags, int32_t, 1
    NASMX_RESERVE iPixelType, int8_t, 1
    NASMX_RESERVE cColorBits, int8_t, 1
    NASMX_RESERVE cRedBits, int8_t, 1
    NASMX_RESERVE cRedShift, int8_t, 1
    NASMX_RESERVE cGreenBits, int8_t, 1
    NASMX_RESERVE cGreenShift, int8_t, 1
    NASMX_RESERVE cBlueBits, int8_t, 1
    NASMX_RESERVE cBlueShift, int8_t, 1
    NASMX_RESERVE cAlphaBits, int8_t, 1
    NASMX_RESERVE cAlphaShift, int8_t, 1
    NASMX_RESERVE cAccumBits, int8_t, 1
    NASMX_RESERVE cAccumRedBits, int8_t, 1
    NASMX_RESERVE cAccumGreenBits, int8_t, 1
    NASMX_RESERVE cAccumBlueBits, int8_t, 1
    NASMX_RESERVE cAccumAlphaBits, int8_t, 1
    NASMX_RESERVE cDepthBits, int8_t, 1
    NASMX_RESERVE cStencilBits, int8_t, 1
    NASMX_RESERVE cAuxBuffers, int8_t, 1
    NASMX_RESERVE iLayerType, int8_t, 1
    NASMX_RESERVE bReserved, int8_t, 1
    NASMX_RESERVE dwLayerMask, int32_t, 1
    NASMX_RESERVE dwVisibleMask, int32_t, 1
    NASMX_RESERVE dwDamageMask, int32_t, 1
NASMX_ENDSTRUC

IMPORT ExitProcess, 4

IMPORT GetModuleHandleA, 4

IMPORT RegisterClassExA, 4

IMPORT LoadIconA, 8

IMPORT CreateWindowExA, uint_t dwExStyle, ptrdiff_t lpClassName, ptrdiff_t lpWindowName, uint_t dwStyle,\
						int_t x, int_t y, int_t nWidth, int_t nHeight,\
						ptrdiff_t hWndParent, ptrdiff_t hMenu, ptrdiff_t hInstance, ptrdiff_t lpParam

IMPORT MessageBoxA, ptrdiff_t hWnd, ptrdiff_t lpText, ptrdiff_t lpCaption, uint32_t uType


IMPORT DefWindowProcA, ptrdiff_t hWnd, uint_t Msg, ptrdiff_t wParam, ptrdiff_t lParam

IMPORT GetMessageA, 16

IMPORT DispatchMessageA, 4
IMPORT TranslateMessage, 4

IMPORT ShowWindow, 8
IMPORT UpdateWindow, 4

IMPORT PostQuitMessage, 4
IMPORT LoadCursorA, 8

IMPORT PeekMessageA, 20

IMPORT GetClientRect, 8
IMPORT InvalidateRect, 16

IMPORT GetDC, 4


IMPORT ChoosePixelFormat, 8
IMPORT SetPixelFormat, 12
IMPORT wglCreateContext, 4
IMPORT wglMakeCurrent, 8
IMPORT wglDeleteContext, 4

IMPORT glClear, 4
IMPORT glPushMatrix, 0
IMPORT glPopMatrix, 0
extern glRotatef
extern glBegin
IMPORT glEnd, 0
extern glEnable
extern glViewport
IMPORT SwapBuffers, 4
IMPORT glMatrixMode, 4
extern glFrustum
extern glLoadIdentity
extern glTranslatef
IMPORT glLightfv, 12

extern glShadeModel
extern glMaterialfv

IMPORT BeginPaint, 8
IMPORT EndPaint, 8
extern glNormal3f
extern glVertex3f
IMPORT glFinish, 0
IMPORT ReleaseDC, 8
IMPORT Sleep, 4

%endif  ;// __NASMX_DEMOS_INC__
