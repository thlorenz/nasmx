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
%include '..\..\..\inc\nasmx.inc'
%include '..\..\..\inc\win32\windows.inc'
%include '..\..\..\inc\win32\kernel32.inc'
%include '..\..\..\inc\win32\user32.inc'
;// You must include the following when using typedef function names
;// for either ASCII or Unicode
;// eg: MessageBox is an alias for MessageBoxW or MessageBoxA
;// depending on whether UNICODE is defined or not
%include '..\..\..\inc\win32\unicode.inc'

entry demo2

[section .text]
proc    demo2

    invoke   GetModuleHandle, NASMX_PTR NULL
    mov      [hInstance], eax
    invoke   WinMain, NASMX_PTR hInstance, NASMX_PTR NULL, NASMX_PTR NULL, int32_t SW_SHOWNORMAL
    invoke   ExitProcess, uint32_t NULL
    ret

endproc

proc    WinMain
hinst    argd        ; Current instance handle
hpinst   argd        ; Previous instance handle
cmdln    argd        ; Command line arguments
dwshow   argd        ; Display style

    invoke   LoadIcon, NASMX_PTR NULL, NASMX_PTR IDI_APPLICATION
    mov      edx, eax
    mov      eax, dword argv(hinst)
    mov      ebx, dword szClass
    mov      ecx, dword WndProc
    mov      [wc + WNDCLASSEX.hInstance], eax
    mov      [wc + WNDCLASSEX.lpszClassName], ebx
    mov      [wc + WNDCLASSEX.lpfnWndProc], ecx
    mov      [wc + WNDCLASSEX.hIcon], edx
    mov      [wc + WNDCLASSEX.hIconSm], edx

    invoke   RegisterClassEx, NASMX_PTR wc

    invoke   CreateWindowEx, uint32_t WS_EX_TOOLWINDOW, NASMX_PTR szClass, NASMX_PTR szTitle, uint32_t WS_CAPTION + WS_SYSMENU + WS_VISIBLE, int32_t 100, int32_t 120, int32_t 200, int32_t 100, NASMX_PTR NULL, NASMX_PTR NULL, NASMX_PTR [wc + WNDCLASSEX.hInstance], NASMX_PTR NULL
    mov      [hWnd], eax

    invoke   ShowWindow, NASMX_PTR hWnd, int32_t argv(dwshow)
    invoke   UpdateWindow, NASMX_PTR hWnd

    .msgloop:
        invoke   GetMessage, NASMX_PTR message, NASMX_PTR NULL, uint32_t NULL, uint32_t NULL
        cmp      eax, dword 0
        je       .exit
        invoke   TranslateMessage, NASMX_PTR message
        invoke   DispatchMessage, NASMX_PTR message
        jmp      .msgloop
    .exit:

    mov      eax, dword [message + MSG.wParam]
    ret

endproc

proc    WndProc
hwnd    argd        ; Window handle
umsg    argd        ; Window message
wparam  argd        ; wParam
lparam  argd        ; lParam

.wm_create:
    cmp      argv(umsg), dword WM_CREATE
    jnz      .wm_destroy

    invoke   GetClientRect, NASMX_PTR argv(hwnd), NASMX_PTR rct
    invoke   CreateWindowEx, uint32_t NULL, NASMX_PTR szStatic, NASMX_PTR szTitle, uint32_t WS_CHILD + WS_VISIBLE + SS_CENTER, int32_t 0, int32_t 0, int32_t [rct + RECT.right], int32_t [rct + RECT.bottom], NASMX_PTR argv(hwnd), NASMX_PTR 500, NASMX_PTR [wc + WNDCLASSEX.hInstance], NASMX_PTR NULL
    jmp      .wm_default

.wm_destroy:
    cmp      argv(umsg), dword WM_DESTROY
    jnz      .wm_default

    invoke   PostQuitMessage, dword NULL

.wm_default:
    invoke   DefWindowProc, NASMX_PTR argv(hwnd), uint32_t argv(umsg), size_t argv(wparam), size_t argv(lparam)
    
.exit:
    ret

endproc

[section .bss]
    hInstance:   reserve(NASMX_PTR) 1
    hWnd:        reserve(NASMX_PTR) 1

[section .data]
    szStatic:   declare(NASMX_CHAR) NASMX_TEXT("STATIC"), 0x0
    szTitle:    declare(NASMX_CHAR) NASMX_TEXT("Demo2"), 0x0
    szClass:    declare(NASMX_CHAR) NASMX_TEXT("Demo2Class"), 0x0

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