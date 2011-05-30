;// DEMO4.ASM
;//
;// Written by Rob Neff
;// Copyright (C)2005-2011 The NASMX Project
;//
%include '..\..\windemos.inc'

DEFAULT REL

entry    demo4

[section .data]
    szStringFmt: declare(NASMX_TCHAR) 13,10,NASMX_TEXT("The area of the circle is %8.4f"), 0x0D, 0x0A, 0x0

[section .code]

NASMX_PRAGMA CALLSTACK, 32

; The following simple procedure calculates the area of a circle
; given it's radius.  It makes use of the FPU and leaves the result
; on the FPU stack for the function return value.
; Prototype:
;     float CalculateAreaOfCircle(double radius);
;
proc   CalculateAreaOfCircle, double_t radius
locals
    local pi, double_t
endlocals

    ; xmm0 contains the radius, so square the value
	movsd [argv(.radius)], xmm0
	mulsd xmm0, [argv(.radius)]

    ; assign the float value pi to local variable,
	; as there is no instruction mov mem, imm64
    mov rax,  __double(3.14159)
	mov qword [var(.pi)], rax

    ; multiply the values returning result in xmm0
    mulsd xmm0, [var(.pi)]

endproc

proc   demo4, ptrdiff_t argcount, ptrdiff_t cmdline
locals
    local area, double_t
endlocals

    ; calculate the area
    mov rcx, __double(2.0)
	mov qword [var(.area)], rcx
    invoke CalculateAreaOfCircle, rcx
;
;    Various ways to provide a double precision floating point for
;    properly prototyped procedures:
;        invoke CalculateAreaOfCircle, qword [var(.area)]
;        invoke CalculateAreaOfCircle, __double(2.0)
;        invoke CalculateAreaOfCircle, 2.0

	; vararg functions like printf are tricky regarding floating point
	; so we leave the result in xmm0 and copy it to rdx since rdx is
	; the register used for parameter 2 in win64 mode
    movq rdx, xmm0
    invoke printf, szStringFmt, rdx

endproc
