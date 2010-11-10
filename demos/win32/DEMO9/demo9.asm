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

entry	Demo9

import cdecl, Say, ptrdiff_t content, ptrdiff_t apptitle

[section .text]

proc   Demo9
locals none

	invoke	Say, szContent, szTitle
	invoke	ExitProcess, NULL
    
endproc

[section .data]
	szTitle:	declare(NASMX_TCHAR) NASMX_TEXT('Demo9'), 0x0
	szContent:	declare(NASMX_TCHAR) NASMX_TEXT('Demo9B Test, Say()'), 0x0
