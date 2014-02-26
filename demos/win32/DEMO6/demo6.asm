;// DEMO6.ASM
;//
;// Copyright (C)2005-2014 The NASMX Project
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

[section .text]

entry    demo6


;//////////////////////////////////////////////////////////////////
;// This procedure is the default message handler
;// Note that you could hand-optimize this by replacing
;// the entire procedure with
;// Wm_DefaultProc:
;//     xor eax, eax
;//     ret 12
;//
proc Wm_DefaultProc, ptrdiff_t hwnd, size_t wparam, size_t lparam
locals none
    xor      eax, eax
endproc

;//////////////////////////////////////////////////////////////////
;// This procedure handles the WM_DESTROY window message
;//
proc   Wm_DestroyProc, ptrdiff_t hwnd, size_t wparam, size_t lparam
locals none
    invoke   EndDialog, ptrdiff_t [argv(.hwnd)], 1
    mov      eax, 1
endproc

;//////////////////////////////////////////////////////////////////
;// This procedure handles the WM_COMMAND window message
;//
proc   Wm_CommandProc, ptrdiff_t hwnd, size_t wparam, size_t lparam
locals none

    mov      eax, size_t [argv(.wparam)]
    jmp      .forward
.cmd_table:  dd .cmd_idgo, .cmd_idok
.forward:
    sub      eax, 200
    cmp      eax, 1
    jg       .unknown
    jmp      [.cmd_table + eax * 4]

.unknown:
    return   0

.cmd_idok:
    invoke   EndDialog, ptrdiff_t [argv(.hwnd)], 1
    return   1

.cmd_idgo:
    invoke   SendDlgItemMessage, ptrdiff_t [argv(.hwnd)], 205, WM_GETTEXTLENGTH, NULL, NULL
    cmp      eax, dword 0
    jne      .fine
    invoke   MessageBox, ptrdiff_t [argv(.hwnd)], szContent, szTitle, MB_OK | MB_ICONERROR
    return   1

.fine:
    inc      eax
    mov      ecx, eax
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

;//////////////////////////////////////////////////////////////////
;// This procedure is the dialog window message handler
;//
proc   dlgproc, ptrdiff_t hwnd, size_t umsg, size_t wparam, size_t lparam
locals none
    mov      eax, dword [argv(.umsg)]
    cmp      eax, 1024
    jle      .ok
    return   0
.ok:
    push     size_t [argv(.lparam)]
    push     size_t [argv(.wparam)]
    push     size_t [argv(.hwnd)]
    call     [msg_table + eax * 4]
endproc

;//////////////////////////////////////////////////////////////////
;// This is our main procedure
;//
proc   demo6, ptrdiff_t argcount, ptrdiff_t cmdline
locals none
    mov      eax, msg_table
    mov      dword [eax + WM_COMMAND * 4], Wm_CommandProc
    mov      dword [eax + WM_DESTROY * 4], Wm_DestroyProc
    invoke   DialogBoxParam, NULL, szTemplate, NULL, dlgproc, NULL
    invoke   ExitProcess, NULL
endproc

[section .bss]
    dwText:     reserve(ptrdiff_t) 1
    dwHeap:     reserve(ptrdiff_t) 1

[section .data]
    ;// build the dialog message handler call table
    msg_table:  times 1024*4 dd Wm_DefaultProc
    szTitle:    declare(NASMX_TCHAR) NASMX_TEXT("Demo6"), 0x0
    szContent:  declare(NASMX_TCHAR) NASMX_TEXT("Error: you must enter text into the top edit box!"), 0x0
    szTemplate: declare(NASMX_TCHAR) NASMX_TEXT("MyDialog"), 0x0
