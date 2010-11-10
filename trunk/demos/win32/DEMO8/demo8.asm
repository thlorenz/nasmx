;// DEMO8.ASM
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
%include '..\..\..\inc\nasmx.inc'
%include '..\..\..\inc\win32\windows.inc'
%include '..\..\..\inc\win32\kernel32.inc'
%include '..\..\..\inc\win32\user32.inc'
%include '..\..\..\inc\win32\stdwin.inc'
;// You must include the following when using typedef function names
;// for either ASCII or Unicode
;// eg: MessageBox is an alias for MessageBoxW or MessageBoxA
;//     depending on whether UNICODE is defined or not
%include '..\..\..\inc\win32\unicode.inc'

entry    demo8

[section .text]

proc   WndProc, ptrdiff_t hwnd, dword umsg, size_t wparam, size_t lparam
locals none

    switch dword [argv(.umsg)]
    case dword WM_CREATE

        ButtonCtl szString, 500, 0, 0, 100, 40, [argv(.hwnd)], [wc + WNDCLASSEX.hInstance]
        ButtonCtl szString, 500, 100, 0, 100, 40, [argv(.hwnd)], [wc + WNDCLASSEX.hInstance]
        StaticCtl szContent, 501, 0, 40, 200, 40, [argv(.hwnd)], [wc + WNDCLASSEX.hInstance]
        ComboCtl szContent, 502, 0, 80, 200, 100, [argv(.hwnd)], [wc + WNDCLASSEX.hInstance]
        ListBoxCtl szContent, 502, 0, 106, 200, 100, [argv(.hwnd)], [wc + WNDCLASSEX.hInstance]

    case dword WM_COMMAND

        cmp      [argv(.wparam)], dword 500
        jz       near .bleh
        break
        .bleh:
        invoke   MessageBox, NULL, szContent, szTitle, MB_OK

    case dword WM_DESTROY

        invoke   PostQuitMessage, NULL

    default

        invoke   DefWindowProc, [argv(.hwnd)], [argv(.umsg)], [argv(.wparam)], [argv(.lparam)]

    endswitch

endproc

proc   WinMain, ptrdiff_t hinst, ptrdiff_t hpinst, ptrdiff_t cmdln, dword dwshow
locals none

    invoke   LoadIcon, NULL, IDI_APPLICATION
    mov      edx, eax
    mov      eax, dword [argv(.hinst)]
    mov      ebx, dword szClass
    mov      ecx, dword WndProc
    mov      [wc + WNDCLASSEX.hInstance], eax
    mov      [wc + WNDCLASSEX.lpszClassName], ebx
    mov      [wc + WNDCLASSEX.lpfnWndProc], ecx
    mov      [wc + WNDCLASSEX.hIcon], edx
    mov      [wc + WNDCLASSEX.hIconSm], edx

    invoke   RegisterClassEx, wc

    StdWindow szClass, szTitle, 100, 120, 212, 232, NULL, [wc + WNDCLASSEX.hInstance]
    mov      [hWnd], eax

    invoke   ShowWindow, hWnd, [argv(.dwshow)]
    invoke   UpdateWindow, hWnd

    do
        invoke   TranslateMessage, message
        invoke   DispatchMessage, message
        invoke   GetMessage, message, NULL, NULL, NULL
    while eax, !=, 0

    mov      eax, dword [message + MSG.wParam]

endproc


proc   demo8
locals none

    invoke   GetModuleHandle, NULL
    mov      [hInstance], eax
    invoke   WinMain, hInstance, NULL, NULL, SW_SHOWNORMAL
    invoke   ExitProcess, NULL

endproc

[section .bss]
    hInstance:   reserve(ptrdiff_t) 1
    hWnd:        reserve(ptrdiff_t) 1

[section .data]
    szString:   declare(NASMX_TCHAR) NASMX_TEXT("Click Me!"), 0x0
    szContent:  declare(NASMX_TCHAR) NASMX_TEXT("Win32Nasm Demo #8"), 0x0
    szTitle:    declare(NASMX_TCHAR) NASMX_TEXT("Demo8"), 0x0
    szClass:    declare(NASMX_TCHAR) NASMX_TEXT("Demo8Class"), 0x0

    NASMX_ISTRUC wc, WNDCLASSEX
        NASMX_AT cbSize,           WNDCLASSEX_size
        NASMX_AT style,            CS_VREDRAW + CS_HREDRAW
        NASMX_AT lpfnWndProc,      NULL
        NASMX_AT cbClsExtra,       NULL
        NASMX_AT cbWndExtra,       NULL
        NASMX_AT hInstance,        NULL
        NASMX_AT hIcon,            NULL
        NASMX_AT hCursor,          NULL
        NASMX_AT hbrBackground,    COLOR_BTNFACE + 1
        NASMX_AT lpszMenuName,     NULL
        NASMX_AT lpszClassName,    NULL
        NASMX_AT hIconSm,          NULL
    NASMX_IENDSTRUC

    NASMX_ISTRUC message, MSG
        NASMX_AT hwnd,             NULL
        NASMX_AT message,          NULL
        NASMX_AT wParam,           NULL
        NASMX_AT lParam,           NULL
        NASMX_AT time,             NULL
		NASMX_ISTRUC pt, POINT
			NASMX_AT x,          NULL
			NASMX_AT y,          NULL
		NASMX_IENDSTRUC
    NASMX_IENDSTRUC
