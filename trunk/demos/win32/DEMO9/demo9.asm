;// DEMO9.ASM
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

entry	Demo9

import cdecl, Say, ptrdiff_t content, ptrdiff_t apptitle

[section .text]

proc   Demo9, ptrdiff_t argcount, ptrdiff_t cmdline
locals none

	invoke	Say, szContent, szTitle
	invoke	ExitProcess, NULL
    
endproc

[section .data]
	szTitle:	declare(NASMX_TCHAR) NASMX_TEXT('Demo9'), 0x0
	szContent:	declare(NASMX_TCHAR) NASMX_TEXT('Demo9B Test, Say()'), 0x0
