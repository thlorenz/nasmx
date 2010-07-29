%include "..\..\..\inc\nasmx.inc"
%include "..\..\..\inc\win32\windows.inc"
%include "..\..\..\inc\win32\msvcrt.inc"

	entry	demo11

[section .bss]
	fname:	resb 1025
	lname:	resb 1025
	age:		resd 1

[section .text]
proc	demo11
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
	ret
endproc
