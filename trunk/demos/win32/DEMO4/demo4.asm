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

entry    demo4

[section .text]
proc    demo4

    invoke   DialogBoxParam, NX_PTR NULL, NX_PTR szTemplate, NX_PTR NULL, NX_PTR dlgproc, size_t NULL
    invoke   ExitProcess, uint32_t NULL
    ret

endproc

proc    dlgproc
hwnd    argd
umsg    argd
wparam  argd
lparam  argd

.wm_command:
    cmp      argv(umsg), dword WM_COMMAND
    jne      .wm_destroy

    cmp      argv(wparam), dword 200
    jne      .cmd_idok

    invoke   MessageBox, NX_PTR NULL, NX_PTR szContent, NX_PTR szTitle, uint32_t MB_OK
    mov      eax, 1
    jmp      .wm_default

.cmd_idok:
    cmp      argv(wparam), dword 201
    je       .die

.wm_destroy:
    cmp      argv(umsg), dword WM_DESTROY
    jne      .wm_default

    .die:
    invoke   EndDialog, NX_PTR argv(hwnd), size_t 1
    mov      eax, 1
    jmp      .exit

.wm_default:
    xor      eax, eax
    
.exit:
    ret

endproc

[section .data]
    szTemplate: declare(NX_CHAR)    NX_TEXT("MyDialog"), 0x0
    szTitle:    declare(NX_CHAR)    NX_TEXT("Demo4"), 0x0
    szContent:  declare(NX_CHAR)    NX_TEXT("Win32 NASM Demo #4"), 0x0
