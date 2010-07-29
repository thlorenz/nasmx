%include "..\..\..\inc\nasmx.inc"
%include "..\..\..\inc\win32\windows.inc"
%include "..\..\..\inc\win32\msvcrt.inc"

	entry	demo11

[section .bss]
	fname:	resb 1025
	lname:	resb 1025
	age:	resq 1

[section .text]
proc	demo11
	times	10 nop
	invoke	printf, "First Name: "
	times	10 nop
	invoke	scanf, "%1024s", fname
	times	10 nop
	invoke	printf, "Last Name: "
	times	10 nop
	invoke	scanf, "%1024s", lname
	times	10 nop
	invoke	printf, "Age: "
	times	10 nop
	invoke	scanf, "%02d", age
	mov	rax, [age]
	if	rax, >=, 21
		invoke	printf, "Hello, %s %s! What are you having today?", fname, lname
	else
		invoke	printf, "Sorry kid, you're only %d!", [age]
	endif
	invoke	printf, "%c%c%c%cPress any key to exit.",13,10,13,10
	invoke	_getch
	xor	rax, rax
	ret
endproc
