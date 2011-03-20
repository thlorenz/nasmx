;// DEMO10.ASM
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
%include '..\..\..\inc\win32\stdwin.inc'

entry    demo10

[section .text]


proc   WndProc, ptrdiff_t hwnd, uint_t umsg, size_t wparam, size_t lparam
locals none

    switch dword [argv(.umsg)]
    case dword WM_CREATE

        ButtonCtl szStringA, 500, 0, 0, 100, 40, [argv(.hwnd)], [wc + WNDCLASSEX.hInstance]
        ButtonCtl szStringB, 501, 100, 0, 100, 40, [argv(.hwnd)], [wc + WNDCLASSEX.hInstance]
        StaticCtl szContent, 502, 0, 40, 200, 40, [argv(.hwnd)], [wc + WNDCLASSEX.hInstance]
        ComboCtl szContent, 503, 0, 80, 200, 100, [argv(.hwnd)], [wc + WNDCLASSEX.hInstance]
        ListBoxCtl szContent, 504, 0, 106, 200, 100, [argv(.hwnd)], [wc + WNDCLASSEX.hInstance]
		break

    case dword WM_COMMAND
        if [argv(.wparam)], ==, dword 500
            invoke   MessageBox, NULL, szMessageA, szTitle, MB_OK
        elsif [argv(.wparam)], ==, dword 501
            invoke	MessageBox, NULL, szMessageB, szTitle, MB_OK
        else
            jmp near .defwndproc
        endif
		break

    case dword WM_DESTROY

        invoke   PostQuitMessage, NULL
		break

    default
        .defwndproc:
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

proc   demo10
locals none

    invoke   GetModuleHandle, NULL
    mov      [hInstance], eax
    invoke   WinMain, hInstance, NULL, NULL, SW_SHOWNORMAL
    invoke   ExitProcess, NULL
    ret

endproc

[section .bss]
    hInstance:   reserve(ptrdiff_t) 1
    hWnd:        reserve(ptrdiff_t) 1

[section .data]
    szStringA:  declare(NASMX_TCHAR) NASMX_TEXT("Click Me!"), 0x0
    szStringB:  declare(NASMX_TCHAR) NASMX_TEXT("Me Too!"), 0x0
    szContent:  declare(NASMX_TCHAR) NASMX_TEXT("Win32Nasm Demo #10"), 0x0
    szMessageA: declare(NASMX_TCHAR) NASMX_TEXT("With the NasmX Library..."), 0x0
    szMessageB: declare(NASMX_TCHAR) NASMX_TEXT("Assembly is a cinche!"), 0x0
    szTitle:    declare(NASMX_TCHAR) NASMX_TEXT("Demo10"), 0x0
    szClass:    declare(NASMX_TCHAR) NASMX_TEXT("Demo10Class"), 0x0

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
