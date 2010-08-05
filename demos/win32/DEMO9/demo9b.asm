;// DEMO9B.ASM
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
;//     depending on whether UNICODE is defined or not
%include '..\..\..\inc\win32\unicode.inc'

entry	Demo9B

import	Say

[section .text]
proc	Demo9B
	invoke	Say, NASMX_PTR szContent, NASMX_PTR szTitle
	invoke	ExitProcess, uint32_t NULL
	ret
    
endproc

[section .data]
	szTitle:	declare(NASMX_CHAR) NASMX_TEXT('Demo9B'), 0x0
	szContent:	declare(NASMX_CHAR) NASMX_TEXT('Demo9 Test, Say()'), 0x0
