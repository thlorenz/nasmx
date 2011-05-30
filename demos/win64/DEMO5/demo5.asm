;// DEMO5.ASM
;//
;// Copyright (C)2005-2011 The NASMX Project
;//
;// Contributors:
;//    Bryant Keller
;//    Rob Neff
;//
%include '..\..\windemos.inc'

;// assert: set call stack for procedure prolog to max
;// invoke param bytes for 64-bit assembly mode
DEFAULT REL
NASMX_PRAGMA CALLSTACK, 96

entry    demo5

[section .code]

;// The following two procedures are for display of runtime error messages

proc nx_debug_errmsg, ptrdiff_t pszProcName, dword err
locals
    local szBuffer, NASMX_TCHAR, 512
endlocals
	mov    r8, rdx    ;// get err
	mov    r9, rcx    ;// get proc name
    invoke wsprintf, var(.szBuffer), szDebugFmt, r8, r9
    invoke MessageBox, NULL, var(.szBuffer), szDebugTitle, MB_OK
endproc

proc   nx_debug_lasterr, ptrdiff_t pszProcName
locals none
    ;// save arg to spill area
	mov    ptrdiff_t [argv(.pszProcName)], rcx
    invoke GetLastError
	;// restore arg from spill area
	mov    rcx, ptrdiff_t [argv(.pszProcName)]
	invoke nx_debug_errmsg, rcx, rax
endproc


proc   WndProc, ptrdiff_t hwnd, dword umsg, ptrdiff_t wparam, ptrdiff_t lparam
locals none

.wm_command:
    cmp    edx, dword WM_COMMAND
    jnz    .wm_destroy

    cmp    r8d, 500    ;// wparam
    jne    .wm_default

    invoke MessageBox, NULL, szContent, szTitle, MB_OK
    jmp    .exit

.wm_destroy:
    cmp    edx, dword WM_DESTROY
    jnz    .wm_default

    invoke PostQuitMessage, NULL
	jmp    .exit

.wm_default:
    invoke DefWindowProc, rcx, rdx, r8, r9
	return    ;// DefWindowProc return code

.exit:
    xor    rax, rax

endproc


proc   WinMain, ptrdiff_t hinst, ptrdiff_t hpinst, ptrdiff_t cmdln, dword dwshow
uses   rdi, rsi
locals none

    ;// save args used to spill area
	mov    ptrdiff_t [argv(.hinst)], rcx
	mov    dword [argv(.dwshow)], r9d

    invoke LoadIcon, NULL, IDI_APPLICATION
    cmp    rax, 0
    jne    .have_hicon
    invoke nx_debug_lasterr, szLoadIcon
    return 1

.have_hicon:

    mov    rsi, wc
    mov    ptrdiff_t [rsi + WNDCLASSEX.hIcon], rax
    mov    ptrdiff_t [rsi + WNDCLASSEX.hIconSm], rax
	mov    rax, WndProc
    mov    ptrdiff_t [rsi + WNDCLASSEX.lpfnWndProc], rax
    mov    rax, ptrdiff_t [argv(.hinst)]
    mov    ptrdiff_t [rsi + WNDCLASSEX.hInstance], rax
	mov    rax, szClass
    mov    ptrdiff_t [rsi + WNDCLASSEX.lpszClassName], rax
    invoke RegisterClassEx, rsi
    cmp    rax, 0
    jne    .have_class
    invoke nx_debug_lasterr, szRegisterClassEx
    return 1

.have_class:
    invoke CreateWindowEx, WS_EX_TOOLWINDOW, szClass, szTitle, WS_CAPTION + WS_SYSMENU + WS_VISIBLE, \
                             100, 120, 100, 50, NULL, NULL, ptrdiff_t [argv(.hinst)], NULL
    cmp    rax, 0
    jne    .have_hwnd
    invoke nx_debug_lasterr, szCreateWindowEx
    return 1

.have_hwnd:

    mov    ptrdiff_t [hWnd], rax    ;// save window handle
	mov    rdi, rct
	mov    rsi, wc
    invoke GetClientRect, ptrdiff_t [hWnd], rdi
    invoke CreateWindowEx, NULL, szButton, szString, WS_CHILD + WS_VISIBLE,\
                           0, 0, uint32_t [rdi + RECT.right], uint32_t [rdi + RECT.bottom],\
                           ptrdiff_t [hWnd], 500, ptrdiff_t [rsi + WNDCLASSEX.hInstance], NULL

    invoke ShowWindow, ptrdiff_t [hWnd], dword [argv(.dwshow)]
    invoke UpdateWindow, ptrdiff_t [hWnd]

	mov    rsi, message
    .msgloop:
        invoke   GetMessage, rsi, NULL, NULL, NULL
        cmp      eax, dword 0
        je       .exit
        invoke   TranslateMessage, rsi
        invoke   DispatchMessage, rsi
        jmp      .msgloop

.exit:

    mov      eax, dword [rsi + MSG.wParam]

endproc


proc   demo5, ptrdiff_t argcount, ptrdiff_t cmdline
locals none

    invoke GetModuleHandle, NULL
    cmp    rax, 0
    jne    .have_hinst
    invoke nx_debug_lasterr, szGetModuleHandle
    return 1

.have_hinst:
    mov    ptrdiff_t [hInstance], rax
    invoke WinMain, ptrdiff_t [hInstance], NULL, NULL, SW_SHOWNORMAL
    invoke ExitProcess, rax

endproc

[section .bss]
    hInstance:   reserve(ptrdiff_t) 1
    hWnd:        reserve(ptrdiff_t) 1

[section .data]
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

    szDebugTitle: declare(NASMX_TCHAR) NASMX_TEXT("DEBUG Error"), 0x0
    szDebugFmt: declare(NASMX_TCHAR) NASMX_TEXT("Error 0x%04x in %s"), 0x0
    szGetModuleHandle:  declare(NASMX_TCHAR) NASMX_TEXT("GetModuleHandle"), 0x0
    szWinMain:  declare(NASMX_TCHAR) NASMX_TEXT("WinMain"), 0x0
    szInstance: declare(NASMX_TCHAR) NASMX_TEXT("hInstance"), 0x0
    szLoadIcon: declare(NASMX_TCHAR) NASMX_TEXT("LoadIcon"), 0x0
    szRegisterClassEx: declare(NASMX_TCHAR) NASMX_TEXT("RegisterClassEx"), 0x0
    szCreateWindowEx:  declare(NASMX_TCHAR) NASMX_TEXT("CreateWindowEx"), 0x0
    szButton:  declare(NASMX_TCHAR) NASMX_TEXT("BUTTON"), 0x0
    szString:  declare(NASMX_TCHAR) NASMX_TEXT("Click Me!"), 0x0
    szContent: declare(NASMX_TCHAR) NASMX_TEXT("Win64Nasm Demo #5"), 0x0
    szTitle:   declare(NASMX_TCHAR) NASMX_TEXT("Demo5"), 0x0
    szClass:   declare(NASMX_TCHAR) NASMX_TEXT("Demo5Class"), 0x0
