;// DEMO13.ASM
;//
;// Copyright (C)2005-2011 The NASMX Project
;//
;// This is a fully UNICODE aware, type-defined demo that demonstrates
;// using NASMX typedef system to make your code truly portable between
;// 32 and 64-bit systems using either ASCII or UNICODE
;//
;// Note that you do NOT have to use the register aliases (eg: __AX)
;// as the example code below does; It simply demonstrates one way to
;// lessen the impact when porting from 32-bit to 64-bit.
;//
;// Contributors:
;//    Bryant Keller
;//    Rob Neff
;//
%include '..\..\windemos.inc'

;/////////////////////////////////////////////
;//
;// Create our own structure definition with
;// nested union and struct
;//
NASMX_STRUC DDMMYY
	NASMX_RESERVE day,   int8_t, 1
	NASMX_RESERVE month, int8_t, 1
	NASMX_RESERVE year,  int16_t, 1
NASMX_ENDSTRUC

NASMX_STRUC DEMO13_STRUC
    NASMX_RESERVE name, NASMX_TCHAR, 512
    NASMX_UNION dob
        NASMX_RESERVE ddmmyy, DDMMYY
        NASMX_RESERVE date, int32_t, 1
    NASMX_ENDUNION
NASMX_ENDSTRUC


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
[section .code]
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

entry    demo13

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
proc   WndProc, ptrdiff_t hwnd, dword msg, size_t wparam, size_t lparam
locals none

.wm_create:
    cmp    dword [argv(.msg)], WM_CREATE
    jnz    .wm_command

    invoke GetClientRect, ptrdiff_t [argv(.hwnd)], rct
    invoke CreateWindowEx, NULL, szButton, szString, WS_CHILD + WS_VISIBLE,\
                           0, 0, uint32_t [rct + RECT.right], uint32_t [rct + RECT.bottom],\
                           ptrdiff_t [argv(.hwnd)], 500, ptrdiff_t [wc + WNDCLASSEX.hInstance], NULL
    jmp    .wm_default

.wm_command:
    cmp    dword [argv(.msg)], WM_COMMAND
    jnz    .wm_destroy

    cmp    dword [argv(.wparam)], 500
    jne    .wm_default

    invoke MessageBox, NULL, bday + DEMO13_STRUC.name, szTitle, MB_OK
    jmp    .exit

.wm_destroy:
    cmp    dword[argv(.msg)], WM_DESTROY
    jnz    .wm_default

    invoke PostQuitMessage, NULL

.wm_default:
    invoke   DefWindowProc, ptrdiff_t [argv(.hwnd)], dword [argv(.msg)], size_t [argv(.wparam)], size_t [argv(.lparam)]

.exit:

endproc

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
proc   WinMain, ptrdiff_t hinst, ptrdiff_t hpinst, ptrdiff_t cmdln, dword dwshow
locals none

    invoke LoadIcon, NULL, IDI_APPLICATION
    mov    __DX, __AX
    mov    __AX, ptrdiff_t [argv(.hinst)]
    mov    __BX, ptrdiff_t szClass
    mov    __CX, ptrdiff_t WndProc
    mov    ptrdiff_t [wc + WNDCLASSEX.hInstance], __AX
    mov    ptrdiff_t [wc + WNDCLASSEX.lpszClassName], __BX
    mov    ptrdiff_t [wc + WNDCLASSEX.lpfnWndProc], __CX
    mov    ptrdiff_t [wc + WNDCLASSEX.hIcon], __DX
    mov    ptrdiff_t [wc + WNDCLASSEX.hIconSm], __DX
    invoke RegisterClassEx, wc

    invoke CreateWindowEx, WS_EX_TOOLWINDOW, szClass, szTitle, WS_CAPTION + WS_SYSMENU + WS_VISIBLE,\
                           100, 120, 100, 50, NULL, NULL, ptrdiff_t [wc + WNDCLASSEX.hInstance], NULL
    mov    size_t[hWnd], __AX
    invoke ShowWindow, hWnd, dword[argv(.dwshow)]
    invoke UpdateWindow, hWnd

.msgloop:
    invoke GetMessage, message, NULL, NULL, NULL
    cmp    eax, dword 0
    je     .exit
    invoke TranslateMessage, message
    invoke DispatchMessage, message
    jmp    .msgloop

.exit:

    mov __AX, size_t[message + MSG.wParam]

endproc

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
proc   demo13, ptrdiff_t argcount, ptrdiff_t cmdline
locals none

    invoke GetModuleHandle, NULL
    mov    ptrdiff_t [hInstance], __AX
    invoke WinMain, hInstance, NULL, NULL, SW_SHOWNORMAL
    invoke ExitProcess, NULL
endproc

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
[section .bss]
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    hInstance:  reserve(ptrdiff_t) 1
    hWnd:       reserve(ptrdiff_t) 1

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
[section .data]
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    szButton:   declare(NASMX_TCHAR) NASMX_TEXT("BUTTON"), 0x0
    szString:   declare(NASMX_TCHAR) NASMX_TEXT("Click Me!"), 0x0
    szContent:  declare(NASMX_TCHAR) NASMX_TEXT("NASMX Demo #13"), 0x0
    szTitle:    declare(NASMX_TCHAR) NASMX_TEXT("NASMX Demo13"), 0x0
    szClass:    declare(NASMX_TCHAR) NASMX_TEXT("Demo13Class"), 0x0

    NASMX_ISTRUC bday, DEMO13_STRUC
        NASMX_AT name,   NASMX_TEXT("NASMX v1.0 Beta Birthday"),0
    NASMX_IENDSTRUC

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
