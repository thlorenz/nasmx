;// DEMO3.ASM
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

entry    demo3

[section .code]

proc   WndProc, ptrdiff_t hwnd, size_t msg, size_t wparam, size_t lparam
locals none

.wm_create:
    cmp    size_t [argv(.msg)], WM_CREATE
    jnz    .wm_command

    invoke GetClientRect, ptrdiff_t [argv(.hwnd)], rct
    invoke CreateWindowEx, NULL, szButton, szString, WS_CHILD + WS_VISIBLE, 0, 0, uint32_t [rct + RECT.right], uint32_t [rct + RECT.bottom], ptrdiff_t [argv(.hwnd)], 500, ptrdiff_t [wc + WNDCLASSEX.hInstance], NULL
    return 0

.wm_command:
    cmp    size_t [argv(.msg)], WM_COMMAND
    jnz    .wm_destroy

    cmp    size_t [argv(.wparam)], 500
    jne    .wm_default

    invoke MessageBox, NULL, szContent, szTitle, MB_OK
	return 0

.wm_destroy:
    cmp    size_t [argv(.msg)], WM_DESTROY
    jnz    .wm_default

    invoke PostQuitMessage, NULL
	return 0

.wm_default:
    invoke DefWindowProc, ptrdiff_t [argv(.hwnd)], size_t [argv(.msg)], size_t [argv(.wparam)], size_t [argv(.lparam)]

.exit:

endproc


proc    WinMain, ptrdiff_t hinst, ptrdiff_t hpinst, ptrdiff_t cmdln, dword dwshow
locals none

    invoke LoadIcon, NULL, IDI_APPLICATION
	mov    __CX, wc
    mov    ptrdiff_t [__CX + WNDCLASSEX.hIcon], __AX
    mov    ptrdiff_t [__CX + WNDCLASSEX.hIconSm], __AX
    mov    ptrdiff_t [__CX + WNDCLASSEX.lpfnWndProc], WndProc
    mov    ptrdiff_t [__CX + WNDCLASSEX.lpszClassName], szClass
    mov    __AX, ptrdiff_t [argv(.hinst)]
    mov    ptrdiff_t [__CX + WNDCLASSEX.hInstance], __AX

    invoke RegisterClassEx, __CX
    invoke CreateWindowEx, WS_EX_TOOLWINDOW, szClass, szTitle, WS_CAPTION + WS_SYSMENU + WS_VISIBLE, 100, 120, 100, 50, NULL, NULL, ptrdiff_t [wc + WNDCLASSEX.hInstance], NULL
    mov    ptrdiff_t [hWnd], __AX
    invoke ShowWindow, hWnd, dword [argv(.dwshow)]
    invoke UpdateWindow, hWnd

    .msgloop:
        invoke GetMessage, message, NULL, NULL, NULL
        cmp    eax, dword 0
        je     .exit
        invoke TranslateMessage, message
        invoke DispatchMessage, message
        jmp    .msgloop

.exit:

    mov    eax, dword [message + MSG.wParam]

endproc


proc    demo3, ptrdiff_t argcount, ptrdiff_t cmdline
locals none

    invoke GetModuleHandle, NULL
    mov    ptrdiff_t [hInstance], __AX
    invoke WinMain, hInstance, NULL, NULL, SW_SHOWNORMAL
    invoke ExitProcess, NULL

endproc

[section .bss]
    hInstance:   reserve(ptrdiff_t) 1
    hWnd:        reserve(ptrdiff_t) 1

[section .data]
    szButton:  declare(NASMX_TCHAR) NASMX_TEXT("BUTTON"), 0x0
    szString:  declare(NASMX_TCHAR) NASMX_TEXT("Click Me!"), 0x0
    szContent: declare(NASMX_TCHAR) NASMX_TEXT("Win32Nasm Demo #3"), 0x0
    szTitle:   declare(NASMX_TCHAR) NASMX_TEXT("Demo3"), 0x0
    szClass:   declare(NASMX_TCHAR) NASMX_TEXT("Demo3Class"), 0x0

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

    NASMX_ISTRUC rct, RECT
        NASMX_AT left,           NULL
        NASMX_AT top,            NULL
        NASMX_AT right,          NULL
        NASMX_AT bottom,         NULL
    NASMX_IENDSTRUC
