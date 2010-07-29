%include '..\..\..\inc\nasmx.inc'
%include '..\..\..\inc\win32\windows.inc'
%include '..\..\..\inc\win32\kernel32.inc'
%include '..\..\..\inc\win32\user32.inc'

entry    demo6

[section .text]
proc    demo6

    mov      eax, msg_table
    mov      [eax + WM_COMMAND * 4], dword Wm_CommandProc
    mov      [eax + WM_DESTROY * 4], dword Wm_DestroyProc
    invoke   DialogBoxParamA, byte NULL, dword szTemplate, byte NULL, dword dlgproc, byte NULL
    invoke   ExitProcess, dword NULL
    ret

endproc

proc    dlgproc
.hwnd   argd
.umsg   argd
.wparam argd
.lparam argd

    cmp      argv(.umsg), dword 1024
    jg       wm_default
    mov      eax, dword argv(.umsg)
    push     dword argv(.lparam)
    push     dword argv(.wparam)
    push     dword argv(.hwnd)
    call     [msg_table + eax * 4]
    ret

wm_default:
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

    mov      eax, dword argv(.wparam)
    jmp      .forward
.cmd_table:  dd .cmd_idgo, .cmd_idok
.forward:
    sub      eax, 200
    cmp      eax, 1
    jg       .unknown
    jmp      [.cmd_table + eax * 4]

.unknown:
    xor      eax, eax
    ret

.cmd_idok:
    invoke   EndDialog, dword argv(.hwnd), byte 1
    mov      eax, 1
    ret

.cmd_idgo:
    invoke   SendDlgItemMessageA, dword argv(.hwnd), dword 205, dword WM_GETTEXTLENGTH, dword NULL, dword NULL
    cmp      eax, dword 0
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
    szTitle:    db    "Demo6", 0x0
    szContent:  db    "Error: you must enter text into the top edit box!", 0x0
    szTemplate: db    "MyDialog", 0x0
    msg_table:  times 1024*4 dd wm_default
