%include '..\..\..\inc\nasmx.inc'
%include '..\..\..\inc\win32\windows.inc'
%include '..\..\..\inc\win32\kernel32.inc'
%include '..\..\..\inc\win32\user32.inc'

entry    demo1

[section .text]
proc     demo1
    invoke    my_p, dword szContentTwo, dword szTitleTwo
    invoke    MessageBoxA, dword NULL, dword szContent, dword szTitle, dword MB_OK
    invoke    ExitProcess, dword NULL
    ret

endproc

proc     my_p
sz_Content    argd
sz_Title      argd

    invoke    MessageBoxA, dword NULL, dword argv(sz_Content), dword argv(sz_Title), dword MB_OK
    ret

endproc

_data
    szTitle:       db   'Demo1', 0x0
    szTitleTwo:    db   'Demo1 Procedure', 0x0
    szContent:     db   'Hello from the Application!', 0x0
    szContentTwo:  db   'Hello from the Procedure!', 0x0
