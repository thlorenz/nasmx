;// DEMO5.ASM
;//
;// Copyright (C)2005-2011 The NASMX Project
;//
;// This is a fully UNICODE aware, typedefined demo that demonstrates
;// using NASMX typedef system to make your code truly portable between
;// 32 and 64-bit systems using either ASCII or UNICODE
;//
;// Contributors:
;//    Bryant Keller
;//    Rob Neff
;//
%include '..\..\windemos.inc'

%ifidn __BITS__, 64
;// assert: set call stack for procedure prolog to max
;// invoke param bytes for 64-bit assembly mode
DEFAULT REL
NASMX_PRAGMA CALLSTACK, 96
%endif

entry    demo5

[section .code]

%define __NX_DEBUG__
%ifdef __NX_DEBUG__

proc nx_debug_errmsg, ptrdiff_t pszProcName
locals
    local szBuffer, NASMX_TCHAR, 512
    local err, uint32_t, 1
endlocals
    invoke GetLastError
    mov    uint32_t [var(.err)], eax
    invoke wsprintf, var(.szBuffer), szDebugFmt, uint32_t [var(.err)], ptrdiff_t [argv(.pszProcName)]
    invoke MessageBox, NULL, var(.szBuffer), szDebugtitle, MB_OK
endproc
%endif


proc   WndProc, ptrdiff_t hwnd, dword umsg, ptrdiff_t wparam, ptrdiff_t lparam
uses   __BX, __SI
locals none

.wm_create:
    cmp      dword [argv(.umsg)], WM_CREATE
    jnz      .wm_command

    invoke nx_debug_errmsg, szWmCreate
    invoke   GetClientRect, ptrdiff_t [argv(.hwnd)], rct
    mov  __BX, rct
    mov  __SI, wc
    invoke   CreateWindowEx, NULL, szButton, szString, WS_CHILD + WS_VISIBLE,\
                            0, 0, uint32_t [__BX + RECT.right], uint32_t [__BX + RECT.bottom],\
                            ptrdiff_t [argv(.hwnd)], 500, ptrdiff_t [__SI + WNDCLASSEX.hInstance], NULL
    jmp      .wm_default

.wm_command:
    cmp      dword [argv(.umsg)], WM_COMMAND
    jnz      .wm_destroy

    cmp      ptrdiff_t [argv(.wparam)], 500
    jne      .wm_default

    invoke   MessageBox, NULL, szContent, szTitle, MB_OK
    jmp      .exit

.wm_destroy:
    cmp      dword [argv(.umsg)], WM_DESTROY
    jnz      .wm_default

    invoke   PostQuitMessage, NULL

.wm_default:
    invoke   DefWindowProc, ptrdiff_t [argv(.hwnd)], dword [argv(.umsg)], ptrdiff_t [argv(.wparam)], ptrdiff_t [argv(.lparam)]

.exit:

endproc


proc   WinMain, ptrdiff_t hinst, ptrdiff_t hpinst, ptrdiff_t cmdln, dword dwshow
uses   __BX, __DI
locals none

    invoke   LoadIcon, NULL, IDI_APPLICATION
    cmp      __AX, 0
    jne    .have_hicon
    invoke nx_debug_errmsg, szLoadIcon
    return 1

.have_hicon:
    mov      __CX, wc
    mov      ptrdiff_t [__CX + WNDCLASSEX.hIcon], __AX
    mov      ptrdiff_t [__CX + WNDCLASSEX.hIconSm], __AX
    mov      __AX, ptrdiff_t [argv(.hinst)]
    mov      ptrdiff_t [__CX + WNDCLASSEX.hInstance], __AX
    mov      ptrdiff_t [__CX + WNDCLASSEX.lpszClassName], szClass
    mov      ptrdiff_t [__CX + WNDCLASSEX.lpfnWndProc], WndProc
    invoke   RegisterClassEx, __CX
    cmp      __AX, 0
    jne    .have_class
    invoke nx_debug_errmsg, szRegisterClassEx
    return 1

.have_class:
    mov      __BX, wc
    invoke   CreateWindowEx, WS_EX_TOOLWINDOW, szClass, szTitle, WS_CAPTION + WS_SYSMENU + WS_VISIBLE,\
                             100, 120, 100, 50, NULL, NULL, ptrdiff_t [__BX + WNDCLASSEX.hInstance], NULL
    cmp      __AX, 0
    jne    .have_hwnd
    invoke nx_debug_errmsg, szCreateWindowEx
    return 1

.have_hwnd:
    mov      __CX, hWnd
    mov      ptrdiff_t [__CX], __AX

    invoke   ShowWindow, __CX, ptrdiff_t [argv(.dwshow)]
    mov      __CX, hWnd
    invoke   UpdateWindow, __CX

    .msgloop:
        invoke   GetMessage, message, NULL, NULL, NULL
        cmp      eax, dword 0
        je       .exit
        invoke   TranslateMessage, message
        invoke   DispatchMessage, message
        jmp      .msgloop

.exit:

    mov      eax, dword [message + MSG.wParam]

endproc


proc   demo5
locals none

    invoke GetModuleHandle, NULL
    cmp    __AX, 0
    jne    .have_hinst
    invoke nx_debug_errmsg, szGetModuleHandle
    return 1

.have_hinst:
    mov    __CX, hInstance
    mov    ptrdiff_t [__CX], __AX
    invoke WinMain, __CX, NULL, NULL, SW_SHOWNORMAL
    cmp    __AX, 0
    je     .exit
    invoke nx_debug_errmsg, szWinMain

.exit:
    invoke ExitProcess, NULL

endproc

[section .bss]
    hInstance:   reserve(ptrdiff_t) 1
    hWnd:        reserve(ptrdiff_t) 1

[section .data]
    szDebugtitle: declare(NASMX_TCHAR) NASMX_TEXT("DEBUG Error"), 0x0
    szDebugFmt: declare(NASMX_TCHAR) NASMX_TEXT("Error 0x%04x in %s"), 0x0
    szGetModuleHandle:  declare(NASMX_TCHAR) NASMX_TEXT("GetModuleHandle"), 0x0
    szWinMain:  declare(NASMX_TCHAR) NASMX_TEXT("WinMain"), 0x0
    szLoadIcon:  declare(NASMX_TCHAR) NASMX_TEXT("LoadIcon"), 0x0
    szRegisterClassEx: declare(NASMX_TCHAR) NASMX_TEXT("RegisterClassEx"), 0x0
    szCreateWindowEx:  declare(NASMX_TCHAR) NASMX_TEXT("CreateWindowEx"), 0x0
    szWmCreate:        declare(NASMX_TCHAR) NASMX_TEXT("WndProc WM_CREATE"), 0x0
    szButton:  declare(NASMX_TCHAR) NASMX_TEXT("BUTTON"), 0x0
    szString:  declare(NASMX_TCHAR) NASMX_TEXT("Click Me!"), 0x0
    szContent: declare(NASMX_TCHAR) NASMX_TEXT("Win64Nasm Demo #5"), 0x0
    szTitle:   declare(NASMX_TCHAR) NASMX_TEXT("Demo5"), 0x0
    szClass:   declare(NASMX_TCHAR) NASMX_TEXT("Demo5Class"), 0x0

%ifidni __OUTPUT_FORMAT__, win64
ALIGN 16
%endif
    NASMX_ISTRUC wc, WNDCLASSEX
        NASMX_AT cbSize,         WNDCLASSEX_size
        NASMX_AT style,          CS_VREDRAW + CS_HREDRAW
        NASMX_AT lpfnWndProc,    NULL
        NASMX_AT cbClsExtra,     NULL
        NASMX_AT cbWndExtra,     NULL
        NASMX_AT hInstance,      NULL
        NASMX_AT hIcon,          NULL
        NASMX_AT hCursor,        NULL
        NASMX_AT hbrBackground,  COLOR_BTNFACE + 1
        NASMX_AT lpszMenuName,   NULL
        NASMX_AT lpszClassName,  NULL
        NASMX_AT hIconSm,        NULL
    NASMX_IENDSTRUC

%ifidni __OUTPUT_FORMAT__, win64
ALIGN 16
%endif
    NASMX_ISTRUC message, MSG
        NASMX_AT hwnd,       NULL
        NASMX_AT message,    NULL
        NASMX_AT wParam,     NULL
        NASMX_AT lParam,     NULL
        NASMX_AT time,       NULL
        NASMX_ISTRUC pt, POINT
            NASMX_AT x,          NULL
            NASMX_AT y,          NULL
        NASMX_IENDSTRUC
    NASMX_IENDSTRUC

%ifidni __OUTPUT_FORMAT__, win64
ALIGN 16
%endif
    NASMX_ISTRUC rct, RECT
        NASMX_AT left,           NULL
        NASMX_AT top,            NULL
        NASMX_AT right,          NULL
        NASMX_AT bottom,         NULL
    NASMX_IENDSTRUC
