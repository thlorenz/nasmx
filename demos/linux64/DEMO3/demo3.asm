;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; DEMO3.ASM
;
; Copyright (C)2005-2011 The NASMX Project
;
; Purpose:
;    This program demonstrates procedural programming and
;    the usage of environment variables.
;
; Contributors:
;    Bryant Keller
;    Rob Neff
;

%include 'nasmx.inc'
%include 'linux/libc.inc'

ENTRY demo3

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
SECTION .data
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

strEnvironment	DB '-----------------------', 10
		DB ' Environment Variables', 10
		DB '-----------------------', 0

strArguments	DB '------------------------', 10
		DB ' Command Line Arguments', 10
		DB '------------------------', 0


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
SECTION .text
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
proc print_envs, qword envc, ptrdiff_t envp
uses rbx
locals none

    ; save reg params to spill area
    mov    ptrdiff_t [argv(.envp)], rsi
    mov    qword [argv(.envc)], rdi
    
    invoke puts, strEnvironment

    ; use non-volatile register to hold envp
    mov    rbx, ptrdiff_t [argv(.envp)]

.scan_envs:
    mov    rcx, qword [argv(.envc)]
    cmp    rcx, 0
    je     .done

	; decrement and save count
    dec    rcx
    mov    qword [argv(.envc)], rcx

	; get next envp string ptr
    mov    rdi, qword [rbx]
    or     rdi, rdi
    je     .done

    invoke puts, rdi

    ; adjust to next ptr
    add    rbx, 8

    jmp    .scan_envs

.done:

    xor    eax, eax

endproc


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
proc print_args, qword argcount, ptrdiff_t cmdline
uses rbx
locals none

    ; save regs to spill area
    mov    qword [argv(.argcount)], rdi
    mov    ptrdiff_t [argv(.cmdline)], rsi

    ; print heading
    invoke puts, strArguments

    ; use non-volatile reg to hold cmdline
    mov    rbx, ptrdiff_t [argv(.cmdline)]

.scan_args:
    mov    rcx, qword [argv(.argcount)]
    cmp    rcx, 0
    je     .done

    dec    rcx
    mov    qword [argv(.argcount)], rcx

    mov    rdi, qword [rbx]
    or     rdi, rdi
    je     .done

    ; adjust to next ptr
    add    rbx, 8

    invoke puts, rdi
    jmp    .scan_args

.done:

    xor    rax, rax

endproc

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
proc   demo3, ptrdiff_t argcount, ptrdiff_t cmdline, ptrdiff_t envp
locals none

    ; save envp reg to spill area
    mov    qword[argv(.envp)], rdx

    invoke print_args, rdi, rsi

    ; use correct registers for next invoke
    mov    rsi, qword [argv(.envp)]
    xor    rdi, rdi
    xor    rcx, rcx

.continue:
    mov    r8, qword [rsi + rcx]

    or     r8, r8
    je     .count_done

    add    rcx, 8

    inc    rdi
    jmp    .continue

.count_done:
    invoke print_envs, rdi, rsi

    invoke exit, 0

    xor    rax, rax
endproc

