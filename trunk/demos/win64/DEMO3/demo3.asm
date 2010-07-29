%include "..\..\..\inc\nasmx.inc"
%include "..\..\..\inc\win32\windows.inc"
%include "..\..\..\inc\win32\kernel32.inc"

	entry	demo12

[section .data]
	msg	DB	'Press any key to continue...',13,10
	.len

[section .bss]
	hConsole	RESQ 1
	hBuffer		RESQ 1
	hNum		RESQ 1
	hMode		RESQ 1

[section .text]
proc	demo12
	invoke	GetStdHandle, STD_OUTPUT_HANDLE
	invoke	WriteFile, rax,  msg,  (msg.len - msg),  hNum,  0
	invoke	GetStdHandle, STD_INPUT_HANDLE
	mov	[hConsole], rax
	invoke	GetConsoleMode, rax,  hMode
	mov	rax, [hMode]
	and	al, 1
	invoke	SetConsoleMode, [hConsole], rax
	invoke  WaitForSingleObject, [hConsole],  0xFFFFFFFFFFFFFFFF
	invoke	ReadFile, [hConsole],  hBuffer,  1,  hNum,  0
	invoke	ExitProcess,  0
endproc
