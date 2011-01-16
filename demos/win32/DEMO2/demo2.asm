;// DEMO2.ASM
;//
;// Copyright (C)2005-2010 The NASMX Project
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

entry demo2

[section .text]

proc    WndProc, ptrdiff_t hwnd, dword umsg, ptrdiff_t wparam, ptrdiff_t lparam
locals none

.wm_create:
    cmp      dword [argv(.umsg)], WM_CREATE
    jnz      .wm_destroy
    invoke   GetClientRect, size_t [argv(.hwnd)], rct
    invoke   CreateWindowEx, NULL, szStatic, szTitle, WS_CHILD + WS_VISIBLE + SS_CENTER, 0, 0, dword [rct + RECT.right], dword [rct + RECT.bottom], size_t [argv(.hwnd)], 500, size_t [wc + WNDCLASSEX.hInstance], NULL
    return   0

.wm_destroy:
    cmp      dword [argv(.umsg)], WM_DESTROY
    jnz      .wm_default
    invoke   PostQuitMessage, NULL
    return   0

.wm_default:
    invoke   DefWindowProc, size_t [argv(.hwnd)], dword [argv(.umsg)], size_t [argv(.wparam)], size_t [argv(.lparam)]
    
endproc

proc    WinMain, ptrdiff_t hinst, ptrdiff_t hpinst, ptrdiff_t cmdln, dword dwshow
locals none

    invoke   LoadIcon, NULL, IDI_APPLICATION
    mov      ptrdiff_t [wc + WNDCLASSEX.hIcon], __AX
    mov      ptrdiff_t [wc + WNDCLASSEX.hIconSm], __AX
    mov      ptrdiff_t [wc + WNDCLASSEX.lpszClassName], szClass
    mov      ptrdiff_t [wc + WNDCLASSEX.lpfnWndProc], WndProc
    mov      __AX, ptrdiff_t [argv(.hinst)]
    mov      ptrdiff_t [wc + WNDCLASSEX.hInstance], __AX
    invoke   RegisterClassEx, wc
    invoke   CreateWindowEx, WS_EX_TOOLWINDOW, szClass, szTitle, WS_CAPTION + WS_SYSMENU + WS_VISIBLE, 100, 120, 200, 100, NULL, NULL, size_t [wc + WNDCLASSEX.hInstance], NULL
    mov      ptrdiff_t [hWnd], __AX

    invoke   ShowWindow, hWnd, size_t [argv(.dwshow)]
    invoke   UpdateWindow, hWnd

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


proc    demo2
locals none

    invoke   GetModuleHandle, NULL
    mov      size_t [hInstance], __AX
    invoke   WinMain, hInstance, NULL, NULL, SW_SHOWNORMAL
    invoke   ExitProcess, NULL

endproc


[section .bss]
    hInstance:   reserve(ptrdiff_t) 1
    hWnd:        reserve(ptrdiff_t) 1

[section .data]
    szStatic: declare(NASMX_TCHAR) NASMX_TEXT("STATIC"), 0x0
    szTitle:  declare(NASMX_TCHAR) NASMX_TEXT("Demo2"), 0x0
    szClass:  declare(NASMX_TCHAR) NASMX_TEXT("Demo2Class"), 0x0

    NASMX_ISTRUC wc, WNDCLASSEX
        NASMX_AT cbSize,        sizeof(WNDCLASSEX)
        NASMX_AT style,         CS_VREDRAW + CS_HREDRAW
        NASMX_AT lpfnWndProc,   NULL
        NASMX_AT cbClsExtra,    NULL
        NASMX_AT cbWndExtra,    NULL
        NASMX_AT hInstance,     NULL
        NASMX_AT hIcon,         NULL
        NASMX_AT hCursor,       NULL
        NASMX_AT hbrBackground, COLOR_BTNFACE + 1
        NASMX_AT lpszMenuName,  NULL
        NASMX_AT lpszClassName, NULL
        NASMX_AT hIconSm,       NULL
    NASMX_IENDSTRUC

    NASMX_ISTRUC message, MSG
        NASMX_AT hwnd,     NULL
        NASMX_AT message,  NULL
        NASMX_AT wParam,   NULL
        NASMX_AT lParam,   NULL
        NASMX_AT time,     NULL
        NASMX_ISTRUC pt, POINT
            NASMX_AT x,       NULL
            NASMX_AT y,       NULL
        NASMX_IENDSTRUC
    NASMX_IENDSTRUC

    NASMX_ISTRUC rct, RECT
        NASMX_AT left,     NULL
        NASMX_AT top,      NULL
        NASMX_AT right,    NULL
        NASMX_AT bottom,   NULL
    NASMX_IENDSTRUC
