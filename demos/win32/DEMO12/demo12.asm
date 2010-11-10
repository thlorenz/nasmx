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
	%warning 64bit not supported yet...
%endif

entry	demo12

[section .data]
	msg	declare(NASMX_TCHAR) NASMX_TEXT('Press any key to continue...'),13,10
	.len:

[section .bss]
	hConsole	reserve(ptrdiff_t) 1
	hBuffer		reserve(ptrdiff_t) 1
	hNum		reserve(ptrdiff_t) 1
	hMode		reserve(ptrdiff_t) 1

[section .text]

proc   demo12
locals none

	invoke	GetStdHandle, STD_OUTPUT_HANDLE
	invoke	WriteFile, eax, msg, msg.len-msg, hNum, 0
	invoke	GetStdHandle, STD_INPUT_HANDLE
	mov	ptrdiff_t [hConsole], eax
	invoke	GetConsoleMode, eax, hMode
	mov	eax, ptrdiff_t [hMode]
	and	al, 1
	invoke	SetConsoleMode, [hConsole], eax
	invoke  WaitForSingleObject, [hConsole], 0xFFFFFFFF
	invoke	ReadFile, [hConsole], hBuffer, 1, hNum, 0
	invoke	ExitProcess, 0

endproc
