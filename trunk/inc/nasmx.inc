%ifndef _NASMX_INC_
%define _NASMX_INC_

%ifidn	 __OUTPUT_FORMAT__,elf
%elifidn __OUTPUT_FORMAT__,elf32
%elifidn __OUTPUT_FORMAT__,elf64
%elifidn __OUTPUT_FORMAT__,win32
	%define __UNDERSCORE__
%elifidn __OUTPUT_FORMAT__,win64
	%define __UNDERSCORE__
%else
	%define __CDECL_UNDERSCORE__
	%define __UNDERSCORE__
%endif


%imacro IMPORT 1-2
	%ifndef __imp_defined_%1
		%if %0 = 1
			%ifdef __CDECL_UNDERSCORE__
				%define __cdecl_defined_%1 _%1
				%define __imp_defined_%1 _%1
			%else
				%define __cdecl_defined_%1 %1
				%define __imp_defined_%1 %1
			%endif
		%else
			%ifdef __UNDERSCORE__
				%define __imp_defined_%1 _%1@%2
			%else
				%define __imp_defined_%1 %1@%2
			%endif
		%endif
	%else
		%error Import symbol %1 has already been defined
	%endif
%endmacro


%imacro INVOKE 1-100
%push invoke
	%assign %$args 0
	%assign %$arg_rot -1

%ifdef __imp_defined_%1
	%ifndef __imp_declared_%1
		EXTERN	__imp_defined_%1
		%define __imp_declared_%1 %1
	%endif
	%define	__cur_import__
	%define	_proc __imp_defined_%1
%else
		%define _proc %1
%endif

%ifidn	__BITS__,64
	%ifidn	 __OUTPUT_FORMAT__,win64
		%ifdef __cur_import__
			%assign %$arg_rot 1
		%endif

		push rsp
		push QWORD[rsp]
		and spl,BYTE 0xF0

		%define %$arg_cur 0
		%define %$arg_typ 0

		%rep %0-1
			%rotate %$arg_rot
			%ifdef __cur_import__
				%if %$args < 32
					%if   %$args == 0
						%define %$arg_cur cx
						%define %$arg_typ 1
					%elif %$args == 8
						%define %$arg_cur dx
						%define %$arg_typ 1
					%elif %$args == 16
						%define %$arg_cur r8
						%define %$arg_typ 2
					%else
						%define %$arg_cur r9
						%define %$arg_typ 2
					%endif

					%ifnum %1
						%if %1 == -1
							%if %$arg_typ == 1
								or r %+ %$arg_cur, %1
							%else
								or %$arg_cur, %1
							%endif
						%elif %1 == 0
							%if %$arg_typ == 1
								xor e %+ %$arg_cur,e %+ %$arg_cur
							%else
								xor %$arg_cur %+ d, %$arg_cur %+ d
							%endif
						%else
							%if %1 > 2^32
								%if %$arg_typ == 1
									mov r %+ %$arg_cur, %1
								%else
									mov %$arg_cur, %1 
								%endif
							%else
								%if %$arg_typ == 1
									mov e %+ %$arg_cur, %1
								%else
									mov %$arg_cur %+ d, %1
								%endif
							%endif
						%endif
					%else
		        			%ifstr %1
							jmp %%endstr_%$args
							%%str_%$args: db %1, 0
							%%endstr_%$args:
							%if %$arg_typ == 1
								lea r %+ %$arg_cur,[rel %%str_%$args]
							%else
								lea %$arg_cur,[rel %%str_%$args]
							%endif
						%else
							%ifid %1
								%if %$arg_typ == 1
									lea r %+ %$arg_cur,[rel %1]
								%else
									lea %$arg_cur,[rel %1]
								%endif
							%else
								%if %$arg_typ == 1
									mov r %+ %$arg_cur,%1
								%else
									mov %$arg_cur,%1
								%endif
							%endif
						%endif
					%endif
		    		%else
					%ifstr %1
						jmp %%endstr_%$args
						%%str_%$args: db %1, 0
						%%endstr_%$args:
						push QWORD %%str_%$args
					%else
						push QWORD %1
					%endif
				%endif
			%else
				%ifstr %1
					jmp %%endstr_%$args
					%%str_%$args: db %1, 0
					%%endstr_%$args:
					push QWORD %%str_%$args
				%else
					push QWORD %1
				%endif
			%endif
			%assign %$args %$args+8
		%endrep
		sub	rsp,0x20
		call	_proc
		%if %$args <> 0
			%rotate %$arg_rot
			%ifdef %1_defined
				add	rsp, %$args
			%else
				%ifdef __cur_import__
					%if %$args > 32
						add	rsp,(0x28 + (%$args - 32))
					%else
						add	rsp,0x28
					%endif
				%else
					add	rsp,(0x28 + %$args)
				%endif
			%endif
		%else
			%ifndef %1_defined
				add	rsp,0x28
			%endif
		%endif
		pop	rsp
	%else
		%error "Unsupported 64-bit INVOKE"
	%endif
%else
	%rep %0-1
		%rotate %$arg_rot
		%ifstr	%1
			jmp	%%endstr_%$args
			%%str_%$args:	db %1, 0
			%%endstr_%$args:
			push	dword %%str_%$args
		%else
			push	dword %1
		%endif
		%assign %$args %$args+4
	%endrep
	call	_proc
	%if %$args <> 0
		%rotate %$arg_rot
		%ifdef __cdecl_defined_%1
				add	esp, %$args
		%endif
	%endif
%endif
%ifdef __cur_import__
	%undef __cur_import__
%endif
%undef	_proc
%pop
%endmacro


%imacro PROC 1-100
%push proc
	%ifidn __BITS__,64
		%assign %$arg 0x30
	%else
		%assign %$arg 8
	%endif
	%ifdef __entry_%1
		%ifndef __PROCEDURE__
			%ifdef __UNDERSCORE__
				global	_main
				_main:
			%else
				global main
				main:
			%endif
			%define __PROCEDURE__ _end_%1
			%define _entry_
			%define __leave_present__
		%else
			%error "missing endproc directive."
		%endif
	%else
		%ifndef __PROCEDURE__
			%1:
			%ifidn __BITS__,64
				push rbp
				mov  rbp, rsp
			%else
				push ebp
				mov  ebp, esp
			%endif
			%define __PROCEDURE__ _end_%1
			%rep %0-1
				%rotate 1
				%1 argd
			%endrep
		%else
			%error "missing endproc directive."
		%endif
	%endif
%endmacro


%imacro LOCALS 0
	%assign %$locnt 0
%endmacro


%imacro LOCAL 1-2
	%ifidni %2, qword
		%assign %$locnt 8+%$locnt
	%elifidni %2, dword
		%assign %$locnt 4+%$locnt
	%elifidni %2, word
		%assign %$locnt 2+%$locnt
	%elifidni %2, byte
		%assign %$locnt 1+%$locnt
	%endif
	%1 EQU %$locnt
%endmacro

%imacro ENDLOCALS 0
	%ifidn __BITS__,64
		sub rsp, %$locnt
	%else
		sub esp, %$locnt
	%endif
%endmacro


%imacro ARGD 0-1
	%ifdef __PROCEDURE__
		%00 equ %$arg
		%if %0 = 1
			%assign %$arg %1+%$arg
		%else
			%ifidn __BITS__,64
				%assign %$arg 8+%$arg
			%else
				%assign %$arg 4+%$arg
			%endif
		%endif
	%else
		%error "arguments must be defined within a proc/endproc block."
	%endif
%endmacro


%ifidn __BITS__,64
	%idefine VAR(v) [rbp-v]
	%idefine ARGV(v) [rbp+v]	;RCX/RDX/R8/R9...
%else
	%idefine VAR(v)	[ebp-v]
	%idefine ARGV(v) [ebp+v]
%endif


%idefine OFFSET


%imacro ENDPROC 0
	%ifdef __PROCEDURE__
		__PROCEDURE__:
		%ifndef _entry_
			%pop
		%else
			%undef _entry_
		%endif
		%undef __PROCEDURE__
	%else
		%error "missing proc directive."
	%endif
%endmacro


%imacro LEAVE 0
	%ifndef __leave_present__
		%define __leave_present__
	%endif
	%ifidn __BITS__,64
		mov rsp, rbp
		pop rbp
	%else
		mov esp, ebp
		pop ebp
	%endif
%endmacro


%imacro RET 0-1
	%ifdef __PROCEDURE__
		%ifndef __leave_present__
		%ifctx proc
				leave
				ret %1
				%undef __leave_present__
			%else
				ret %1
			%endif
		%else
			ret %1
			%undef __leave_present__
		%endif
	%else
		ret
	%endif
%endmacro


%imacro PROTO 1-2
	%if %0 = 1
		%ifdef __CDECL_UNDERSCORE__
			global _%1
		%else
			global %1
		%endif
	%else
		%ifdef __UNDERSCORE__
			global _%1
		%else
			global %1
		%endif
	%endif
%endmacro

%imacro ENTRY 1
	%ifdef __UNDERSCORE__
		%define __entry_%1 _main
	%else
		%define __entry_%1 main
	%endif
%endmacro


%imacro RJMP 2
; This macro preforms the opposite conditional jump
; than what the value suggests, it's used internally
; by other macros
	%ifidni %1, ==
		jne %2
	%elifidni %1, >
		jle %2
	%elifidni %1, <
		jge %2
	%elifidni %1, >=
		jl %2
	%elifidni %1, <=
		jg %2
	%elifidni %1, !=
		je %2
	%elifidni %1, !>
		jg %2
	%elifidni %1, !<
		jl %2
	%elifidni %1, CARRY
		jnc %2
	%elifidni %1, BELOW
		jnb %2
	%elifidni %1, ABOVE
		jna %2
	%elifidni %1, PARITY
		jnp %2
	%elifidni %1, SIGNED
		jns %2
	%elifidni %1, OVERFLOW
		jno %2
	%elifidni %1, !CARRY
		jc %2
	%elifidni %1, !BELOW
		jb %2
	%elifidni %1, !ABOVE
		ja %2
	%elifidni %1, !PARITY
		jp %2
	%elifidni %1, !SIGNED
		js %2
	%elifidni %1, !OVERFLOW
		jo %2
	%endif
%endmacro


%imacro SJMP 2
	%ifidni %1, ==
		je %2
	%elifidni %1, >
		jg %2
	%elifidni %1, <
		jl %2
	%elifidni %1, >=
		jge %2
	%elifidni %1, <=
		jle %2
	%elifidni %1, !=
		jne %2
	%elifidni %1, !>
		jng %2
	%elifidni %1, !<
		jnl %2
	%elifidni %1, CARRY
		jc %2
	%elifidni %1, BELOW
		jb %2
	%elifidni %1, ABOVE
		ja %2
	%elifidni %1, PARITY
		jp %2
	%elifidni %1, SIGNED
		js %2
	%elifidni %1, OVERFLOW
		jo %2
	%elifidni %1, !CARRY
		jnc %2
	%elifidni %1, !BELOW
		jnb %2
	%elifidni %1, !ABOVE
		jna %2
	%elifidni %1, !PARITY
		jnp %2
	%elifidni %1, !SIGNED
		jns %2
	%elifidni %1, !OVERFLOW
		jno %2
	%endif
%endmacro


%imacro BREAK 0
	jmp %$break
%endmacro


%imacro IF 3
%push IF
	%assign %$next 1
	cmp %1, %3
	RJMP %2, %$local_%$next
%endmacro


%imacro ELSIF 3
	%ifctx IF
		jmp %$endif
		%$local_%$next:
		%assign %$next 1+%$next
		cmp %1, %3
		RJMP %2, %$local_%$next
	%else
		%error "ELSIF directive must be within an IF block."
	%endif
%endmacro


%imacro ELSE 0
	%ifndef _else_
		%ifctx IF
			jmp %$endif
			%$local_%$next:
			%assign %$next 1+%$next
			%define _else_
		%else
			%error "ELSE directive must be within an IF block."
		%endif
	%else
		%error "There can only be one ELSE per IF block."
	%endif
%endmacro


%imacro ENDIF 0
	%ifctx IF
		%ifndef _else_
			%$local_%$next:
		%else
			%undef _else_
		%endif
		%$endif:
		%pop
	%else
		%error "ENDIF directive must be within an IF block."
	%endif
%endmacro


%imacro SWITCH 1
%push SWITCH
	mov EDX, %1
	%assign %$next 1
%endmacro


%imacro CASE 1
	%ifctx SWITCH
		%$local_%$next:
		%assign %$next 1+%$next
		%ifidn __BITS__,64
			cmp rdx, %1
		%else
			cmp edx, %1
		%endif
		jnz near %$local_%$next
	%else
		%error "CASE directive must be within a SWITCH block."
	%endif
%endmacro


%imacro DEFAULT 0
	%ifctx SWITCH
		%define _default_
		%$local_%$next:
	%else
		%error "DEFAULT directive must be within a SWITCH block."
	%endif
%endmacro


%imacro ENDSWITCH 0
	%ifndef _default_
		%$local_%$next:
	%else
		%undef _default_
	%endif
	%$break:
%pop
%endmacro

%imacro DO 0
%push DO
	%$begin:
%endmacro


%imacro UNTIL 3
	%ifctx DO
		cmp %1, %3
		RJMP %2, %$begin
		%$break:
	%else
		%error "UNTIL directive must be preceded by DO."
	%endif
%pop
%endmacro


%imacro WHILE 3
	%ifctx DO
		cmp %1, %3
		SJMP %2, %$begin
		%$break:
	%else
		%error "WHILE directive must be preceded by DO."
	%endif
%pop
%endmacro

%endif	;NASMX_INC

