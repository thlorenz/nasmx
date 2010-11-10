;// DEMO11.ASM
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
%include "..\..\..\inc\win32\msvcrt.inc"

entry	demo11

[section .bss]
	fname:	resb 1025
	lname:	resb 1025
	age:	resd 1

[section .text]

proc   demo11
locals none

	invoke	printf, "First Name: "
	invoke	scanf, "%1024s", fname
	invoke	printf, "Last Name: "
	invoke	scanf, "%1024s", lname
	invoke	printf, "Age: "
	invoke	scanf, "%02d", age
	mov	eax, [age]
	if	eax, >=, 21
		invoke	printf, "Hello, %s %s! What are you having today?", fname, lname
	else
		invoke	printf, "Sorry kid, you're only %d!", [age]
	endif
	invoke	printf, "%c%c%c%cPress any key to exit.",13,10,13,10
	invoke	_getch
	xor	eax, eax

endproc
