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

proto  dlgproc, ptrdiff_t hwnd, dword umsg, ptrdiff_t wparam, ptrdiff_t lparam

entry  demo4

[section .text]

proc   demo4
locals none

    invoke DialogBoxParam, NULL, szTemplate, NULL, dlgproc, NULL
    invoke ExitProcess, NULL

endproc

proc   dlgproc, ptrdiff_t hwnd, dword msg, ptrdiff_t wparam, ptrdiff_t lparam
locals none

.wm_initdialog:
    cmp    dword [argv(.msg)], WM_INITDIALOG
    jne    .wm_command
	return 0

.wm_command:
    cmp    dword [argv(.msg)], WM_COMMAND
    jne    .wm_default

    cmp    dword [argv(.wparam)], IDOK
    jne    .cmd_idcancel

.cmd_idok:
    invoke MessageBox, NULL, szContent, szTitle, MB_OK
	return 1

.cmd_idcancel:
    cmp    dword [argv(.wparam)], IDCANCEL
    jne    .wm_default
    invoke EndDialog, ptrdiff_t [argv(.hwnd)], 1
	return 1

.wm_default:
    xor    eax, eax

endproc

[section .data]
    szTemplate: declare(NASMX_TCHAR) NASMX_TEXT("MyDialog"), 0x0, 0x0
    szTitle:    declare(NASMX_TCHAR) NASMX_TEXT("Demo4"), 0x0, 0x0
    szContent:  declare(NASMX_TCHAR) NASMX_TEXT("NASMX 32-bit Demo #4"), 0x0, 0x0
