%include "..\..\..\inc\nasmx.inc"
%include "..\..\..\inc\win32\windows.inc"
%include "..\..\..\inc\win32\kernel32.inc"

	entry	demo12

[section .data]
	msg	DB	'Press any key to continue...',13,10
	.len

[section .bss]
	hConsole	RESD 1
	hBuffer		RESD 1
	hNum		RESD 1
	hMode		RESD 1

[section .text]
proc	demo12
	invoke	GetStdHandle, STD_OUTPUT_HANDLE
	invoke	WriteFile, eax, DWORD msg, DWORD msg.len-msg, DWORD hNum, DWORD 0
	invoke	GetStdHandle, STD_INPUT_HANDLE
	mov	DWORD[hConsole], eax
	invoke	GetConsoleMode, eax, DWORD hMode
	mov	eax, DWORD[hMode]
	and	al, 1
	invoke	SetConsoleMode, DWORD[hConsole], eax
	invoke  WaitForSingleObject, DWORD[hConsole], DWORD 0xFFFFFFFF
	invoke	ReadFile, DWORD[hConsole], DWORD hBuffer, DWORD 1, DWORD hNum, DWORD 0
	invoke	ExitProcess, DWORD 0
endproc
