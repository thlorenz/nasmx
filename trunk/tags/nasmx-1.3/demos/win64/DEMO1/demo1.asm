;// DEMO1.ASM
;//
;// Copyright (C)2005-2011 The NASMX Project
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

entry    demo1

[section .code]

proc   my_p, ptrdiff_t sz_Content, ptrdiff_t sz_Title
locals none

    invoke    MessageBox, NULL, ptrdiff_t [argv(.sz_Content)], ptrdiff_t [argv(.sz_Title)], MB_OK

endproc

proc   demo1, ptrdiff_t argcount, ptrdiff_t cmdline
locals none

    invoke    my_p, szContentTwo, szTitleTwo
    invoke    MessageBox, NULL, szContent, szTitle, MB_OK
    invoke    ExitProcess, NULL

endproc

[section .data]
    szTitle:       declare(NASMX_TCHAR) NASMX_TEXT('Demo1'), 0x0
    szTitleTwo:    declare(NASMX_TCHAR) NASMX_TEXT('Demo1 Procedure'), 0x0
    szContent:     declare(NASMX_TCHAR) NASMX_TEXT('Hello from the Application!'), 0x0
    szContentTwo:  declare(NASMX_TCHAR) NASMX_TEXT('Hello from the Procedure!'), 0x0
