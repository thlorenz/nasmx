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

PROC   demo2, ptrdiff_t count, ptrdiff_t cmdline
locals
    local index, uint32_t
endlocals

    mov    esi, dword [argv(.cmdline)]
    mov    ecx, dword [argv(.count)]
    dec    ecx
    mov    eax, 4

.scan_args:
    push   ecx
    cmp    ecx, 0
    je     .done

    ;// decrement arg count
    dec    ecx

    ;// get ptr to next string
    mov    ebx, dword [esi + eax]
    or     ebx, ebx
    je     .done

    ;// index to next arg and save
    add    eax, 4
    mov    dword [var(.index)], eax

    ;// call puts to display string
    invoke puts, ebx

    mov    eax, dword [var(.index)]
    pop    ecx
    jmp    .scan_args

.done:
    pop    ecx

    xor    eax, eax
    invoke exit, eax

ENDPROC

