;// DEMO12.ASM
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
;// You must include the following when using typedef function names
;// for either ASCII or Unicode
;// eg: MessageBox is an alias for MessageBoxW or MessageBoxA
;//     depending on whether UNICODE is defined or not
%include '..\..\..\inc\win32\unicode.inc'

; TODO: 64BIT MODS REQUIRED
%ifidn __OUTPUT_FORMAT__, win64
	%fatal 64bit not supported yet...
%endif

entry	demo12

[section .data]
	msg	declare(NASMX_CHAR) NASMX_TEXT('Press any key to continue...'),13,10
	.len

[section .bss]
	hConsole	reserve(NASMX_PTR) 1
	hBuffer		reserve(NASMX_PTR) 1
	hNum		RESD 1
	hMode		RESD 1

[section .text]
proc	demo12
	invoke	GetStdHandle, STD_OUTPUT_HANDLE
	invoke	WriteFile, eax, NASMX_PTR msg, uint32_t msg.len-msg, NASMX_PTR hNum, NASMX_PTR 0
	invoke	GetStdHandle, STD_INPUT_HANDLE
	mov	NASMX_PTR[hConsole], eax
	invoke	GetConsoleMode, eax, NASMX_PTR hMode
	mov	eax, NASMX_PTR[hMode]
	and	al, 1
	invoke	SetConsoleMode, NASMX_PTR[hConsole], eax
	invoke  WaitForSingleObject, NASMX_PTR[hConsole], DWORD 0xFFFFFFFF
	invoke	ReadFile, NASMX_PTR[hConsole], NASMX_PTR hBuffer, DWORD 1, DWORD hNum, DWORD 0
	invoke	ExitProcess, uint32_t 0
endproc
