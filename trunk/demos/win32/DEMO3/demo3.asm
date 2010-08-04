;// DEMO3.ASM
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

entry    demo3

[section .code]
proc    demo3

    invoke   GetModuleHandle, NX_PTR NULL
    mov      [hInstance], eax
    invoke   WinMain, NX_PTR hInstance, NX_PTR NULL, NX_PTR NULL, int32_t SW_SHOWNORMAL
    invoke   ExitProcess, uint32_t NULL
    ret

endproc

proc    WinMain
hinst    argd        ; Current instance handle
hpinst   argd        ; Previous instance handle
cmdln    argd        ; Command line arguments
dwshow   argd        ; Display style

;    invoke   LoadIconA, NX_PTR NULL, NX_PTR IDI_APPLICATION
    invoke   LoadIcon, NX_PTR NULL, NX_PTR IDI_APPLICATION
    mov      edx, eax
    mov      eax, dword argv(hinst)
    mov      ebx, dword szClass
    mov      ecx, dword WndProc
    mov      [wc + WNDCLASSEX.hInstance], eax
    mov      [wc + WNDCLASSEX.lpszClassName], ebx
    mov      [wc + WNDCLASSEX.lpfnWndProc], ecx
    mov      [wc + WNDCLASSEX.hIcon], edx
    mov      [wc + WNDCLASSEX.hIconSm], edx

    invoke   RegisterClassEx, NX_PTR wc

    invoke   CreateWindowEx, uint32_t WS_EX_TOOLWINDOW, NX_PTR szClass, NX_PTR szTitle, uint32_t WS_CAPTION + WS_SYSMENU + WS_VISIBLE, int32_t 100, int32_t 120, int32_t 100, int32_t 50, NX_PTR NULL, NX_PTR NULL, NX_PTR [wc + WNDCLASSEX.hInstance], NX_PTR NULL
    mov      [hWnd], eax

    invoke   ShowWindow, NX_PTR hWnd, int32_t argv(dwshow)
    invoke   UpdateWindow, NX_PTR hWnd

    .msgloop:
        invoke   GetMessage, NX_PTR message, NX_PTR NULL, uint32_t NULL, uint32_t NULL
        cmp      eax, dword 0
        je       .exit
        invoke   TranslateMessage, NX_PTR message
        invoke   DispatchMessage, NX_PTR message
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
    jnz      .wm_command

    invoke   GetClientRect, NX_PTR argv(hwnd), NX_PTR rct
    invoke   CreateWindowEx, uint32_t NULL, NX_PTR szButton, NX_PTR szString, uint32_t WS_CHILD + WS_VISIBLE, int32_t 0, int32_t 0, int32_t [rct + RECT.right], int32_t [rct + RECT.bottom], NX_PTR argv(hwnd), NX_PTR 500, NX_PTR [wc + WNDCLASSEX.hInstance], NX_PTR NULL
    jmp      .wm_default

.wm_command:
    cmp      argv(umsg), dword WM_COMMAND
    jnz      .wm_destroy

    cmp      argv(wparam), dword 500
    jne      .wm_default

    invoke   MessageBox, NX_PTR NULL, NX_PTR szContent, NX_PTR szTitle, uint32_t MB_OK
    jmp      .exit

.wm_destroy:
    cmp      argv(umsg), dword WM_DESTROY
    jnz      .wm_default

    invoke   PostQuitMessage, int32_t NULL

.wm_default:
    invoke   DefWindowProc, NX_PTR argv(hwnd), uint32_t argv(umsg), size_t argv(wparam), size_t argv(lparam)
    
.exit:
    ret

endproc

[section .bss]
    hInstance:   reserve(NX_PTR) 1
    hWnd:        reserve(NX_PTR) 1

[section .data]
    szButton:   declare(NX_CHAR)    NX_TEXT("BUTTON"), 0x0
    szString:   declare(NX_CHAR)    NX_TEXT("Click Me!"), 0x0
    szContent:  declare(NX_CHAR)    NX_TEXT("Win32Nasm Demo #3"), 0x0
    szTitle:    declare(NX_CHAR)    NX_TEXT("Demo3"), 0x0
    szClass:    declare(NX_CHAR)    NX_TEXT("Demo3Class"), 0x0

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
