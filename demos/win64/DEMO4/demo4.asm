;// DEMO4.ASM
;//
;// Written by Rob Neff
;// Copyright (C)2005-2014 The NASMX Project
;//
%include 'nasmx.inc'

IMPORT printf

DEFAULT REL

entry    demo4

[section .data]
    szStringFmt: declare(NASMX_TCHAR) 13,10,NASMX_TEXT("The area of the circle is %8.4f"),13,10,0

[section .code]

NASMX_PRAGMA CALLSTACK, 32

; The following simple procedure calculates the area of a circle given
; it's radius.  It makes use of the XMM0 floating point register and
; leaves the result in XMM0 for the function return value.
;
; Prototype:
;     double CalculateAreaOfCircle(double radius);
;
; Note that functions that accept float-type arguments must specify
; the parameters expected; otherwise, without a prototype, NASM-X
; cannot know to pass the argument in a floating point register.
;
proc   CalculateAreaOfCircle, double_t radius
locals
    local pi, double_t
endlocals

    ; When dealing with the XMM registers use either movq or movsd, not mov.
    ; You cannot assign an immediate to the register, eg:
    ;     movq  xmm0, 3.14
    ;     movq  xmm0, __double(3.14)
    ; However, these operations are valid:
    ;     movq  xmm0, rax
    ;     movq  xmm0, xmm1
    ;     movq  xmm0, [argv(.radius)]

    ; Register XMM0 automatically saved during proc
    ; prologue since we specified the parameter.
    ; xmm0 contains the radius, so square the value
    mulsd xmm0, [argv(.radius)]

    ; assign the float value pi to local variable,
    ; as there is no instruction mov mem, imm64
    mov rax,  __double(3.14159)
    mov qword [var(.pi)], rax

    ; multiply the values, return result in xmm0
    mulsd xmm0, [var(.pi)]

endproc


proc   demo4, ptrdiff_t argcount, ptrdiff_t cmdline
locals
    local area, double_t
endlocals

    ; calculate the area of a circle with a radius of 2.0
    mov rcx, __double(2.0)
    mov qword [var(.area)], rcx
    ;
    ; Various ways to provide a double precision floating point
    ; for properly prototyped procedures:
    ;     invoke CalculateAreaOfCircle, qword [var(.area)]
    ;     invoke CalculateAreaOfCircle, __double(2.0)
    ;     invoke CalculateAreaOfCircle, rcx
    invoke CalculateAreaOfCircle, qword [var(.area)]

    ; vararg functions like printf are tricky regarding floating point
    ; so we leave the result in xmm0 and copy it to rdx since rdx is
    ; the register used for parameter 2 in win64 mode
    movq rdx, xmm0
    invoke printf, szStringFmt, rdx

endproc
