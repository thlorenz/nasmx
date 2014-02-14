;// DEMO2.ASM
;//
;// Copyright (C)2005-2011 The NASMX Project
;//
;// Purpose:
;//    This program demonstrates how to use command line
;//    arguments and how to use the stack for storing values.
;//
;// Contributors:
;//    Bryant Keller
;//    Rob Neff
;//

%include 'nasmx.inc'
%include 'linux/libc.inc'

ENTRY demo2

SECTION .text

proc demo2, ptrdiff_t count, ptrdiff_t cmdline
uses rbx
locals
    local next, qword
endlocals

    ; rdi = count, rsi = cmdline
    ; save register params to spill area
    mov    qword [argv(.count)], rdi
    mov    rbx, rsi  ; use non-volatile register
    xor    rax, rax
    mov    qword [var(.next)], rax

.scan_args:

    mov    rcx, qword [argv(.count)]
    cmp    rcx, 0
    je     .done

    ;// decrement arg count
    dec    rcx
    mov    qword [argv(.count)], rcx

    ;// get ptr to next string
    mov    rax, qword [var(.next)]
    mov    rdi, qword [rbx + rax]
    or     rdi, rdi
    je     .done

    add    rax, 8
    mov    qword [var(.next)], rax

    ;// call puts to display string
    invoke puts, rdi
    jmp    .scan_args

.done:

    xor    rax, rax
    invoke exit, rax

endproc

