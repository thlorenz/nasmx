%include "..\..\windemos.inc"
%include "..\..\..\inc\win32\COMCTL32.INC"

%ifidn __BITS__, 64
;// assert: set call stack for procedure prolog to max
;// invoke param bytes for 64-bit assembly mode
DEFAULT REL
NASMX_PRAGMA CALLSTACK, 48
%endif

entry	demo3

[section .data]
msg:	DB	'Press any key to continue...',13,10
.len

[section .bss]
	hConsole   RESQ 1
	hBuffer    RESQ 1
	hNum       RESQ 1
	hMode      RESQ 1
	hStdOutput RESQ 1

[section .text]

proc   demo3
locals none

	invoke	GetStdHandle, STD_OUTPUT_HANDLE
	mov qword[hStdOutput],rax
	invoke	WriteFile, qword [hStdOutput],  msg,  (msg.len - msg),  hNum,  0
	invoke	GetStdHandle, STD_INPUT_HANDLE
	mov	qword[hConsole], rax
	invoke	GetConsoleMode, qword [hConsole],  hMode
	mov	rdx, [hMode]
	and	dl, 1
	invoke	SetConsoleMode, qword [hConsole], rdx
	invoke  WaitForSingleObject, qword[hConsole],  0xFFFFFFFFFFFFFFFF
	invoke	ReadFile, qword [hConsole],  hBuffer,  1,  hNum,  0
	invoke	ExitProcess,  0

endproc
