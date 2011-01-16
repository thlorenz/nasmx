%include "..\..\windemos.inc"
%include "..\..\..\inc\win32\msvcrt.inc"

DEFAULT REL

entry	demo2

[section .bss]
	fname:	resb 1025
	lname:	resb 1025
	age:	resq 1

[section .data]
    szFirstName: declare(NASMX_TCHAR) NASMX_TEXT("First Name: "), 0x0
    szLastName:  declare(NASMX_TCHAR) NASMX_TEXT("Last Name: "), 0x0
    szAge:       declare(NASMX_TCHAR) NASMX_TEXT("Age: "), 0x0
	szHello:     declare(NASMX_TCHAR) NASMX_TEXT("Hello, %s %s! What are you having today?"), 0x0
	szSorry:     declare(NASMX_TCHAR) NASMX_TEXT("Sorry kid, you're only %d!"), 0x0
	szScanStr:   declare(NASMX_TCHAR) NASMX_TEXT("%1024s"), 0x0
	szScanNum:   declare(NASMX_TCHAR) NASMX_TEXT("%02d"), 0x0
	szPressKey:  declare(NASMX_TCHAR) NASMX_TEXT("%c%c%c%cPress any key to exit."),13,10,13,10, 0x0

[section .text]

NASMX_PRAGMA CALLSTACK, 64

proc   demo2
locals none

	invoke	printf, szFirstName
	invoke	scanf, szScanStr, fname
	invoke	printf, szLastName
	invoke	scanf, szScanStr, lname
	invoke	printf, szAge
	invoke	scanf, szScanNum, age
	mov	rax, qword[age]
	if	rax, >=, 21
		invoke	printf, szHello, fname, lname
	else
		invoke	printf, szSorry, qword[age]
	endif
	invoke	printf, szPressKey
	invoke	_getch
	xor	rax, rax

endproc
