;// demo4.asm
;//
;// Copyright (C)2005-2012 The NASMX Project
;//
;// Purpose:
;//    This program demonstrates basic arithmetic operations
;//
;// Contributors:
;//    Bryant Keller
;//    Rob Neff
;//
;;
;; IMPORTANT DEVELOPER NOTES:
;;
;; Floating point args to vararg functions
;; like printf() MUST:
;;   1. be of type double, AND
;;   2. be pre-loaded manually into the correct xmm register, AND
;;   3. rax must contain the correct number of xmm registers used.
;; If no floating point values are used when calling vararg
;; functions then rax MUST be initialized to zero prior to the call.


%include 'nasmx.inc'
%include 'bsd/libc.inc'

ENTRY demo4

SECTION .data

strIntegerFormat	DB '[+] Integer %s %d', 10, 0
strFloatPointFormat	DB '[+] Floating-Point %s %e', 10, 0

strAddition		DB 'Addition', 0
strSubtraction		DB 'Subtraction', 0
strMultiplication	DB 'Multiplication', 0
strDivision		DB 'Division', 0

		ALIGN 8
intVariableA	DQ 35
intVariableB	DQ 7
fltVariableA	DQ __float64__(4.444444444)
fltVariableB	DQ __float64__(3.333333333)
fltVariableC	DQ __float64__(0.00)


SECTION .text


PROC   Addition
locals
    local value, qword
endlocals

    mov    rax, qword [intVariableA]
    mov    rcx, qword [intVariableB]
    add    rax, rcx

    mov    qword [var(.value)], rax
    mov    rdx, rax
    mov    rax, 0
    invoke printf, strIntegerFormat, strAddition, rdx
    mov    rax, qword [var(.value)]
ENDPROC


PROC   Subtraction
locals
    local value, qword
endlocals

    mov    rax, qword [intVariableA]
    mov    rcx, qword [intVariableB]
    sub    rax, rcx

    mov    qword [var(.value)], rax
    mov    rdx, rax
    xor    rax, rax
    invoke printf, strIntegerFormat, strSubtraction, rdx
    mov    rax, qword [var(.value)]
ENDPROC


PROC   Multiplication
locals
    local value, qword
endlocals

    mov    rax, qword [intVariableA]
    mov    rcx, qword [intVariableB]
    mul    rcx

    mov    qword [var(.value)], rax
    mov    rdx, rax
    xor    rax, rax
    invoke printf, strIntegerFormat, strMultiplication, rdx
    mov    rax, qword [var(.value)]
ENDPROC


PROC   Division
locals
    local value, qword
endlocals

    mov    rax, qword [intVariableA]
    mov    rcx, qword [intVariableB]
    xor    rdx, rdx
    idiv   rcx

    mov    qword [var(.value)], rax
    mov    rdx, rax
    xor    rax, rax
    invoke printf, strIntegerFormat, strDivision, rdx
    mov    rax, qword [var(.value)]
ENDPROC


PROC   FPU_Addition
locals none

    movsd  xmm0, [fltVariableA]
    addsd  xmm0, [fltVariableB]
    movsd  [fltVariableC], xmm0
    mov    rdx, qword [fltVariableC]
    mov    eax, 1
    invoke printf, strFloatPointFormat, strAddition, rdx

ENDPROC


PROC   FPU_Subtraction
locals none

    movsd  xmm0, [fltVariableA]
    subsd  xmm0, [fltVariableB]
    movsd  [fltVariableC], xmm0
    mov    rdx, qword [fltVariableC]
    mov    eax, 1
    invoke printf, strFloatPointFormat, strSubtraction, rdx

ENDPROC


PROC   FPU_Multiplication
locals none

    movsd  xmm0, [fltVariableA]
    mulsd  xmm0, [fltVariableB]
    movsd  [fltVariableC], xmm0
    mov    rdx, qword [fltVariableC]
    mov    eax, 1
    invoke printf, strFloatPointFormat, strMultiplication, rdx

ENDPROC


PROC   FPU_Division
locals none
	
    movsd  xmm0, [fltVariableA]
    divsd  xmm0, [fltVariableB]
    movsd  [fltVariableC], xmm0
    mov    rdx, qword [fltVariableC]
    mov    eax, 1
    invoke printf, strFloatPointFormat, strDivision, rdx

ENDPROC


PROC   demo4
locals none

    ;// Integer Mathematics

    invoke Addition
    invoke Subtraction
    invoke Multiplication
    invoke Division

    ;// Floating Point Mathematics

    finit

    invoke FPU_Addition
    invoke FPU_Subtraction
    invoke FPU_Multiplication
    invoke FPU_Division

    xor    rax, rax
    invoke exit, rax

ENDPROC

