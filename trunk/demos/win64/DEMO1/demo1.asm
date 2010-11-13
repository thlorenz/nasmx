%include '..\..\..\inc\nasmx.inc'
%include '..\..\..\inc\win32\windows.inc'
%include '..\..\..\inc\win32\kernel32.inc'
%include '..\..\..\inc\win32\user32.inc'

entry    demo1

[section .code]

proc   my_p, ptrdiff_t sz_Content, ptrdiff_t sz_Title
locals none, 64

    invoke    MessageBoxA, NULL, [argv(.sz_Content)], [argv(.sz_Title)], MB_OK

endproc

proc   demo1
locals none, 64

    invoke    my_p, szContentTwo, szTitleTwo
    invoke    MessageBoxA, NULL, szContent, szTitle, MB_OK
    invoke    ExitProcess, NULL

endproc

[section .data]
    szTitle:       declare(NASMX_TCHAR) NASMX_TEXT('Demo1'), 0x0
    szTitleTwo:    declare(NASMX_TCHAR) NASMX_TEXT('Demo1 Procedure'), 0x0
    szContent:     declare(NASMX_TCHAR) NASMX_TEXT('Hello from the Application!'), 0x0
    szContentTwo:  declare(NASMX_TCHAR) NASMX_TEXT('Hello from the Procedure!'), 0x0