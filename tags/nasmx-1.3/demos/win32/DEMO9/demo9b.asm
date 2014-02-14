;// DEMO9B.ASM
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

entry	DllEntry

proto   cdecl, Say, ptrdiff_t content, ptrdiff_t apptitle

[section .text]

proc   DllEntry, ptrdiff_t hinst, size_t reason, size_t reserved
locals none

	mov	eax, TRUE

endproc

proc   Say, ptrdiff_t content, ptrdiff_t apptitle
locals none

	invoke	MessageBox, NULL, [argv(.content)], [argv(.apptitle)], MB_OK + MB_ICONINFORMATION
	xor	eax, eax

endproc
