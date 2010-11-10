;// DEMO4.ASM
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

proto    dlgproc, ptrdiff_t hwnd, dword umsg, ptrdiff_t wparam, ptrdiff_t lparam

entry    demo4

[section .text]
proc    demo4
locals none

    invoke   DialogBoxParam, NULL, szTemplate, NULL, dlgproc, NULL
    invoke   ExitProcess, NULL
    ret

endproc

proc    dlgproc, ptrdiff_t hwnd, dword umsg, ptrdiff_t wparam, ptrdiff_t lparam
locals none

.wm_command:
    cmp      [argv(.umsg)], dword WM_COMMAND
    jne      .wm_destroy

    cmp      [argv(.wparam)], dword 200
    jne      .cmd_idok

    invoke   MessageBox, NULL, szContent, szTitle, MB_OK
    mov      eax, 1
    jmp      .wm_default

.cmd_idok:
    cmp      [argv(.wparam)], dword 201
    je       .die

.wm_destroy:
    cmp      [argv(.umsg)], dword WM_DESTROY
    jne      .wm_default

.die:
    invoke   EndDialog, [argv(.hwnd)], 1
	return   1

.wm_default:
    xor      eax, eax
    
endproc

[section .data]
    szTemplate: declare(NASMX_TCHAR) NASMX_TEXT("MyDialog"), 0x0
    szTitle:    declare(NASMX_TCHAR) NASMX_TEXT("Demo4"), 0x0
    szContent:  declare(NASMX_TCHAR) NASMX_TEXT("Win32 NASM Demo #4"), 0x0
