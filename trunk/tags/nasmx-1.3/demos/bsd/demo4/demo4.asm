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

intVariableA	DD 35
intVariableB	DD 7

		ALIGN 4
fltVariableA	DQ 3.333333333

		ALIGN 4
fltVariableB	DQ 4.444444444

		ALIGN 4
fltVariableC	DQ 0.00


SECTION .text


PROC   Addition
locals none

    mov    eax, DWORD [intVariableA]
    mov    ecx, DWORD [intVariableB]
    add    eax, ecx

    invoke printf, strIntegerFormat, strAddition, eax

    xor    eax, eax
ENDPROC


PROC   Subtraction
locals none

    mov    eax, dword [intVariableA]
    mov    ecx, dword [intVariableB]
    sub    eax, ecx

    invoke printf, strIntegerFormat, strSubtraction, eax
		
    xor    eax, eax
ENDPROC


PROC   Multiplication
locals none

    mov    eax, dword [intVariableA]
    mov    ecx, dword [intVariableB]
    mul    ecx

    invoke printf, strIntegerFormat, strMultiplication, eax
		
    xor    eax, eax
ENDPROC


PROC   Division
locals none

    mov    eax, dword [intVariableA]
    mov    ecx, dword [intVariableB]
    xor    edx, edx
    idiv   ecx

    invoke printf, strIntegerFormat, strDivision, eax
		
    xor    eax, eax
ENDPROC


PROC   FPU_Addition
locals none

    fld    qword [fltVariableA]
    fadd   qword [fltVariableB]
    fstp   qword [fltVariableC]
    invoke printf, strFloatPointFormat, strAddition, dword [fltVariableC], dword [fltVariableC + 4]

ENDPROC


PROC   FPU_Subtraction
locals none

    fld    qword [fltVariableA]
    fsub   qword [fltVariableB]
    fstp   qword [fltVariableC]
    invoke printf, strFloatPointFormat, strSubtraction, dword [fltVariableC], dword [fltVariableC + 4]

ENDPROC


PROC   FPU_Multiplication
locals none
	
    fld    qword [fltVariableA]
    fmul   qword [fltVariableB]
    fstp   qword [fltVariableC]
    invoke printf, strFloatPointFormat, strMultiplication, dword [fltVariableC], dword [fltVariableC + 4]

ENDPROC


PROC   FPU_Division
locals none
	
    fld    qword [fltVariableC]
    fdiv   qword [fltVariableB]
    fstp   qword [fltVariableC]
    invoke printf, strFloatPointFormat, strDivision, dword [fltVariableC], dword [fltVariableC + 4]

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

    xor    eax, eax
    invoke exit, eax

ENDPROC

