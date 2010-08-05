;// DEMO1.ASM
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

entry    demo1

[section .text]
proc     demo1

    invoke    my_p, NASMX_PTR szContentTwo, NASMX_PTR szTitleTwo
    invoke    MessageBox, NASMX_PTR NULL, NASMX_PTR szContent, NASMX_PTR szTitle, uint32_t MB_OK
    invoke    ExitProcess, NASMX_PTR NULL
    ret

endproc

proc     my_p
sz_Content    argd
sz_Title      argd

    invoke    MessageBox, NASMX_PTR NULL, NASMX_PTR argv(sz_Content), NASMX_PTR argv(sz_Title), uint32_t MB_OK
    ret

endproc

_data
    szTitle:       declare(NASMX_CHAR) NASMX_TEXT('Demo1'), 0x0
    szTitleTwo:    declare(NASMX_CHAR) NASMX_TEXT('Demo1 Procedure'), 0x0
    szContent:     declare(NASMX_CHAR) NASMX_TEXT('Hello from the Application!'), 0x0
    szContentTwo:  declare(NASMX_CHAR) NASMX_TEXT('Hello from the Procedure!'), 0x0
