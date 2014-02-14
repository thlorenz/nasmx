;// DEMO1.ASM
;//
;// Copyright (C)2005-2011 The NASMX Project
;//
;// This is a fully UNICODE aware, type-defined demo that demonstrates
;// using NASMX typedef system to help make your code portable between
;// 32 and 64-bit systems using either ASCII or UNICODE
;//
;// Contributors:
;//    Bryant Keller
;//    Rob Neff
;//
%include '..\..\windemos.inc'

entry    demo1

[section .text]

;// Define our function procedure expecting 2 arguments of ptrdiff_t size.
;// Google size_t and ptrdiff_t to understand why these typedefs were chosen.
;// If we wanted to make this function global we would use the PROTO macro
;// which would also allow us to define the procedure later in the source
;// instead of requiring it here before invoke'ing it in proc demo1
proc   my_p, ptrdiff_t szContent, ptrdiff_t szTitle
locals none

    ;// note that even though the formal parameter names are identical to the data section names
	;// they are referenced differently as the following line shows. Make sure you don't forget
	;// to include the leading dot when referencing procedure parameters and local variables.
	;// The dot notation is used to distinguish between local and global vars.
    invoke    MessageBox, NULL, ptrdiff_t [argv(.szContent)], ptrdiff_t [argv(.szTitle)], MB_OK

endproc  ;// return from procedure happens automatically here

;// the start of our program as defined with the ENTRY macro
proc   demo1, ptrdiff_t argcount, ptrdiff_t cmdline
locals none

    invoke    my_p, szContentTwo, szTitleTwo
    invoke    MessageBox, NULL, szContent, szTitle, MB_OK
    invoke    ExitProcess, NULL

endproc

[section .data]
    szTitle:      declare(NASMX_TCHAR) NASMX_TEXT('Demo1'), 0x0
    szTitleTwo:   declare(NASMX_TCHAR) NASMX_TEXT('Demo1 Procedure'), 0x0
    szContent:    declare(NASMX_TCHAR) NASMX_TEXT('Hello from the Application!'), 0x0
    szContentTwo: declare(NASMX_TCHAR) NASMX_TEXT('Hello from the Procedure!'), 0x0
