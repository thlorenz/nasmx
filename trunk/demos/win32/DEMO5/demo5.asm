;// DEMO5.ASM
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

entry    demo5

[section .code]

proc   Wm_DestroyProc, ptrdiff_t hwnd, size_t wparam, size_t lparam
locals none

    invoke   EndDialog, ptrdiff_t [argv(.hwnd)], 1
    mov      eax, 1

endproc

proc   Wm_CommandProc, ptrdiff_t hwnd, size_t wparam, size_t lparam
locals none

    cmp      dword [argv(.wparam)], 201
    je       .cmd_idok
    cmp      dword [argv(.wparam)], 200
    je       .cmd_idgo
	return   0

.cmd_idok:
    invoke   EndDialog, ptrdiff_t [argv(.hwnd)], size_t 1
	return   1

.cmd_idgo:
    invoke   SendDlgItemMessage, ptrdiff_t [argv(.hwnd)], 205, WM_GETTEXTLENGTH, NULL, NULL
    cmp      eax, 0
    jne      .fine
    invoke   MessageBox, ptrdiff_t [argv(.hwnd)], szContent, szTitle, MB_OK | MB_ICONERROR
	return   1

.fine:
    inc      eax
    push     eax
    invoke   GetProcessHeap
    mov      dword [dwHeap], eax
    pop      ecx
    invoke   HeapAlloc, eax, 0x000008, ecx
    mov      dword [dwText], eax
    invoke   SendDlgItemMessage, ptrdiff_t [argv(.hwnd)], 205, WM_GETTEXT, eax, dwText
    invoke   SendDlgItemMessage, ptrdiff_t [argv(.hwnd)], 206, WM_SETTEXT, 0, dwText
    invoke   HeapFree, dwHeap, 0x000008, dwText
    mov      eax, 1

endproc

proc   dlgproc, ptrdiff_t hwnd, dword umsg, size_t wparam, size_t lparam
locals none

    cmp      dword [argv(.umsg)], WM_COMMAND
    je       .wm_command
    cmp      dword [argv(.umsg)], WM_DESTROY
    je       .wm_destroy
    jmp      .wm_default

.wm_command:
    invoke  Wm_CommandProc, ptrdiff_t [argv(.hwnd)], size_t [argv(.wparam)], size_t [argv(.lparam)]
	jmp     NASMX_ENDPROC

.wm_destroy:
    invoke  Wm_DestroyProc, ptrdiff_t [argv(.hwnd)], size_t [argv(.wparam)], size_t [argv(.lparam)]
	jmp     NASMX_ENDPROC

.wm_default:
    xor      eax, eax

endproc

proc   demo5
locals none

    invoke   DialogBoxParam, NULL, szTemplate, NULL, dlgproc, NULL
    invoke   ExitProcess, NULL

endproc

[section .bss]
    dwText:     reserve(ptrdiff_t) 1
    dwHeap:     reserve(ptrdiff_t) 1

[section .data]
    szTitle:    declare(NASMX_TCHAR) NASMX_TEXT("Demo5"), 0x0
    szContent:  declare(NASMX_TCHAR) NASMX_TEXT("Error: you must enter text into the top edit box!"), 0x0
    szTemplate: declare(NASMX_TCHAR) NASMX_TEXT("MyDialog"), 0x0
