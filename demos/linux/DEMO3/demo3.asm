;// DEMO3.ASM
;//
;// Copyright (C)2005-2011 The NASMX Project
;//
;// Purpose:
;//    This program demonstrates procedural programming and
;//    the usage of environment variables.
;//
;// Contributors:
;//    Bryant Keller
;//    Rob Neff
;//

%include 'nasmx.inc'
%include 'linux/libc.inc'

ENTRY demo3

SECTION .data

strEnvironment	DB '-----------------------', 10
		DB ' Environment Variables', 10
		DB '-----------------------', 0

strArguments	DB '------------------------', 10
		DB ' Command Line Arguments', 10
		DB '------------------------', 0


SECTION .text

PROC  print_envs, uint32_t envc, ptrdiff_t envp
locals
    local index, uint32_t
endlocals

    invoke puts, dword strEnvironment

    mov    esi, ptrdiff_t [argv(.envp)]
    mov    ecx, uint32_t [argv(.envc)]
    dec    ecx
    mov    eax, 4

.scan_envs:
    push   ecx
    cmp    ecx, 0
    je     .done

    dec    ecx

    mov    ebx, dword [esi + eax]
    or     ebx, ebx
    je     .done

    add    eax, 4
    mov    dword [var(.index)], eax

    invoke puts, ebx

    mov    eax, [var(.index)]
    pop    ecx
    jmp    .scan_envs

.done:
    pop    ecx
    xor    eax, eax

ENDPROC


PROC print_args, uint32_t argcount, ptrdiff_t cmdline
locals
    local index, uint32_t
endlocals

    invoke puts, strArguments

    mov    esi, ptrdiff_t [argv(.cmdline)]
    mov    ecx, uint32_t [argv(.argcount)]
    dec    ecx
    mov    eax, 4

.scan_args:
    push    ecx
    cmp     ecx, 0
    je      .done

    dec    ecx

    mov    ebx, dword [esi + eax]
    or     ebx, ebx
    je     .done

    add    eax, 4
    mov    dword [var(.index)], eax

    invoke puts, ebx

    mov    eax, dword [var(.index)]
    pop    ecx
    jmp    .scan_args

.done:
    pop    ecx
    xor    eax, eax

ENDPROC


PROC  demo3, ptrdiff_t argcount, ptrdiff_t cmdline, ptrdiff_t envp
locals none

    invoke print_args, dword [argv(.argcount)], ptrdiff_t [argv(.cmdline)]

    mov    esi, dword [argv(.envp)]
    mov    ecx, 4
    xor    eax, eax

.continue:
    mov    ebx, dword [esi + ecx]

    or     ebx, ebx
    je     .count_done

    add    ecx, 4

    inc    eax
    jmp    .continue

.count_done:
    invoke print_envs, eax, dword [argv(.envp)]

    xor    eax, eax
    invoke exit, eax

ENDPROC

