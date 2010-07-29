%include '..\..\..\inc\nasmx.inc'
%include '..\..\..\inc\win32\windows.inc'
%include '..\..\..\inc\win32\kernel32.inc'
%include '..\..\..\inc\win32\user32.inc'

entry    demo4

[section .text]
proc    demo4

    invoke   DialogBoxParamA, byte NULL, dword szTemplate, byte NULL, dword dlgproc, byte NULL
    invoke   ExitProcess, dword NULL
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

    invoke   MessageBoxA, dword NULL, dword szContent, dword szTitle, dword MB_OK
    mov      eax, 1
    jmp      .wm_default

.cmd_idok:
    cmp      argv(wparam), dword 201
    je       .die

.wm_destroy:
    cmp      argv(umsg), dword WM_DESTROY
    jne      .wm_default

    .die:
    invoke   EndDialog, dword argv(hwnd), byte 1
    mov      eax, 1
    jmp      .exit

.wm_default:
    xor      eax, eax
    
.exit:
    ret

endproc

[section .data]
    szTemplate: db    "MyDialog", 0x0
    szTitle:    db    "Demo4", 0x0
    szContent:  db    "Win32 NASM Demo #4", 0x0
