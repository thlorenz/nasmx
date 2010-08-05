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
proc    demo5

    invoke   DialogBoxParam, NASMX_PTR NULL, NASMX_PTR szTemplate, NASMX_PTR NULL, NASMX_PTR dlgproc, size_t NULL
    invoke   ExitProcess, uint32_t NULL
    ret

endproc

proc    dlgproc
.hwnd   argd
.umsg   argd
.wparam argd
.lparam argd

    cmp      argv(.umsg), dword WM_COMMAND
    je       .wm_command
    cmp      argv(.umsg), dword WM_DESTROY
    je       .wm_destroy
    jmp      .wm_default

.wm_command:
    invoke   Wm_CommandProc, dword argv(.hwnd), dword argv(.wparam), dword argv(.lparam)
    ret

.wm_destroy:
    invoke   Wm_DestroyProc, dword argv(.hwnd), dword argv(.wparam), dword argv(.lparam)
    ret

.wm_default:
    xor      eax, eax
    ret

endproc

proc    Wm_DestroyProc
.hwnd   argd
.wparam argd
.lparam argd

    invoke   EndDialog, NASMX_PTR argv(.hwnd), size_t 1
    mov      eax, 1
    ret

endproc

proc    Wm_CommandProc
.hwnd    argd
.wparam  argd
.lparam  argd


    cmp      argv(.wparam), dword 201
    je       .cmd_idok
    cmp      argv(.wparam), dword 200
    je       .cmd_idgo
    xor      eax, eax
    ret

.cmd_idok:
    invoke   EndDialog, NASMX_PTR argv(.hwnd), size_t 1
    mov      eax, 1
    ret

.cmd_idgo:
    invoke   SendDlgItemMessage, NASMX_PTR argv(.hwnd), int32_t 205, uint32_t WM_GETTEXTLENGTH, size_t NULL, size_t NULL
    cmp      eax, 0
    jne      .fine
    invoke   MessageBox, NASMX_PTR argv(.hwnd), NASMX_PTR szContent, NASMX_PTR szTitle, uint32_t MB_OK | MB_ICONERROR
    mov      eax, 1
    ret

.fine:
    inc      eax
    mov      ecx, eax
    push     eax
    invoke   GetProcessHeap
    mov      [dwHeap], eax
    invoke   HeapAlloc, eax, uint32_t 0x000008, ecx
    mov      [dwText], eax
    pop      eax
    invoke   SendDlgItemMessage, NASMX_PTR argv(.hwnd), int32_t 205, uint32_t WM_GETTEXT, eax, size_t dwText
    invoke   SendDlgItemMessage, NASMX_PTR argv(.hwnd), int32_t 206, uint32_t WM_SETTEXT, size_t 0, size_t dwText
    invoke   HeapFree, NASMX_PTR dwHeap, uint32_t 0x000008, NASMX_PTR dwText
    mov      eax, 1
    ret

endproc

[section .bss]
    dwText:     reserve(NASMX_PTR) 1
    dwHeap:     reserve(NASMX_PTR) 1

[section .data]
    szTitle:    declare(NASMX_CHAR) NASMX_TEXT("Demo5"), 0x0
    szContent:  declare(NASMX_CHAR) NASMX_TEXT("Error: you must enter text into the top edit box!"), 0x0
    szTemplate: declare(NASMX_CHAR) NASMX_TEXT("MyDialog"), 0x0
