;// DEMO9.ASM
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

entry	DllEntry

proto	Say

[section .text]
proc	DllEntry
hinst		argd
reason		argd
reserved	argd

	mov	eax, TRUE
	ret

endproc

proc	Say
content	argd
apptitle	argd

	invoke	MessageBox, NASMX_PTR NULL, NASMX_PTR argv(content), NASMX_PTR argv(apptitle), uint32_t MB_OK + MB_ICONINFORMATION
	xor	eax, eax
	ret

endproc
