%include "..\..\windemos.inc"

DEFAULT REL

entry	demo2

[section .bss]
	fname:	resb 1025
	lname:	resb 1025
;	age:	resq 1

[section .data]
    szFirstName: declare(NASMX_TCHAR) NASMX_TEXT("First Name: "), 0
    szLastName:  declare(NASMX_TCHAR) NASMX_TEXT("Last Name: "), 0
    szAge:       declare(NASMX_TCHAR) NASMX_TEXT("Age: "), 0
	szHello:     declare(NASMX_TCHAR) 13,10,NASMX_TEXT("Hello, %s %s! What are you having today?"), 13,10,0
	szSorry:     declare(NASMX_TCHAR) 13,10,NASMX_TEXT("Sorry kid, you're only %d!"), 13,10,0
	szScanStr:   declare(NASMX_TCHAR) NASMX_TEXT("%1024s"), 0
	szScanNum:   declare(NASMX_TCHAR) NASMX_TEXT("%02d"), 0
	szPressKey:  declare(NASMX_TCHAR) 13,10,13,10,NASMX_TEXT("Press any key to exit."),13,10, 0

[section .text]

NASMX_PRAGMA CALLSTACK, 64

proc   demo2
locals
    local age, qword
endlocals

	invoke	printf, szFirstName
	invoke	scanf, szScanStr, fname
	invoke	printf, szLastName
	invoke	scanf, szScanStr, lname
	invoke	printf, szAge
	invoke	scanf, szScanNum, var(.age)
	mov	rax, qword [var(.age)]
	if	rax, >=, 21
		invoke	printf, szHello, fname, lname
	else
		invoke	printf, szSorry, qword [var(.age)]
	endif

	xor	rax, rax

endproc
