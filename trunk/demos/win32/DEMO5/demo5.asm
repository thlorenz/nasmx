%include '..\..\..\inc\nasmx.inc'
%include '..\..\..\inc\win32\windows.inc'
%include '..\..\..\inc\win32\kernel32.inc'
%include '..\..\..\inc\win32\user32.inc'

entry    demo5

[section .code]
proc    demo5

    invoke   DialogBoxParamA, byte NULL, dword szTemplate, byte NULL, dword dlgproc, byte NULL
    invoke   ExitProcess, dword NULL
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

    invoke   EndDialog, dword argv(.hwnd), byte 1
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
    invoke   EndDialog, dword argv(.hwnd), byte 1
    mov      eax, 1
    ret

.cmd_idgo:
    invoke   SendDlgItemMessageA, dword argv(.hwnd), dword 205, dword WM_GETTEXTLENGTH, dword NULL, dword NULL
    cmp      eax, 0
    jne      .fine
    invoke   MessageBoxA, dword argv(.hwnd), dword szContent, dword szTitle, dword MB_OK | MB_ICONERROR
    mov      eax, 1
    ret

.fine:
    inc      eax
    mov      ecx, eax
    push     eax
    invoke   GetProcessHeap
    mov      [dwHeap], eax
    invoke   HeapAlloc, eax, dword 0x000008, ecx
    mov      [dwText], eax
    pop      eax
    invoke   SendDlgItemMessageA, dword argv(.hwnd), dword 205, dword WM_GETTEXT, eax, dword dwText
    invoke   SendDlgItemMessageA, dword argv(.hwnd), dword 206, dword WM_SETTEXT, dword 0, dword dwText
    invoke   HeapFree, dword dwHeap, dword 0x000008, dword dwText
    mov      eax, 1
    ret

endproc

[section .bss]
    dwText:     resd 1
    dwHeap:     resd 1

[section .data]
    szTitle:    db    "Demo5", 0x0
    szContent:  db    "Error: you must enter text into the top edit box!", 0x0
    szTemplate: db    "MyDialog", 0x0
