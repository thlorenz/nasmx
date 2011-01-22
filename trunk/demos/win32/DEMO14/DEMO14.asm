;// DEMO14.ASM
;//
;// Written by Rob Neff
;// Copyright (C)2005-2011 The NASMX Project
;//
%include '..\..\windemos.inc'

entry    demo14

[section .code]

; The following simple procedure calculates the area of a circle
; given it's radius.  It makes use of the FPU and leaves the result
; on the FPU stack for the function return value.
; Prototype:
;     float CalculateAreaOfCircle(float radius);
;
proc   CalculateAreaOfCircle, float_t radius
locals
    local pi, float_t
endlocals

    ; load the 32-bit float radius value onto the FPU stack
    fld dword [argv(.radius)]

    ; square the value
    fmul  dword [argv(.radius)]

    ; assign the float value pi to local variable
    mov dword [var(.pi)], __float(3.14159)

    ; multiply the values, leaving result on top of stack
    fmul dword [var(.pi)]

endproc

proc   demo14
locals
    local area, float_t
    local aread, double_t
endlocals

    ; initialize the FPU
    finit

    ; store a radius
    mov dword [var(.area)], __float(2.0)

    ; calculate the area
    invoke CalculateAreaOfCircle, dword [var(.area)]
	
    ; The C and C++ ANSI standards require that float arguments in a
    ; variable argument list be promoted to type double
    fstp qword [var(.aread)]
    invoke printf, szStringFmt, dword [var(.aread)], dword [var(.aread)+4]

endproc

[section .data]
    szStringFmt: declare(NASMX_TCHAR) NASMX_TEXT("The area of the circle is %8.4f"), 0x0D, 0x0A, 0x0
