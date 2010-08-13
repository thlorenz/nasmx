;//////////////////////////////////////////////////////////////
;//
;// NASMX Preprocessor
;// Copyright (c) 2005-2010, The NASMX Project
;//
%ifndef __NASMX_INCLUDED__
%define __NASMX_INCLUDED__

;//////////////////////////////////////////////////////////////
;//
;// Check NASM Version
;//
%define __nxerrmsg "NASM v2.09 or later required"
%ifdef __NASM_VERSION_ID__
	%if __NASM_VERSION_ID__ < 0x02086350
		%fatal __nxerrmsg
	%endif
%else
	%fatal __nxerrmsg
%endif
%undef __nxerrmsg

;//////////////////////////////////////////////////////////////
;//
;// Set a NASMX Definition
;//
%macro NASMX_DEFINE 1-2
	%if %0 > 1
		%ixdefine __NASMX_%1__ %2
	%else
		%ixdefine __NASMX_%1__
	%endif
%endmacro


;//////////////////////////////////////////////////////////////
;//
;// Get a NASMX Definition
;//
%macro NASMX_GET_DEFINE 2
	%ifdef __NASMX_%1__
		%xdefine %2 __NASMX_%1__
	%elifdef %2
		%undef %2
	%endif
%endmacro

;//////////////////////////////////////////////////////////////
;//
;// Undefine a NASMX Definition
;//
%macro NASMX_UNDEF 1
	%ifdef __NASMX_%1__
		%undef __NASMX_%1__
	%else
		%warning NASMX Definition %1 is not defined
	%endif
%endmacro


;//////////////////////////////////////////////////////////////
;//
;// Define NASMX Version
;//
NASMX_DEFINE VERSION,"1.0b4"
NASMX_DEFINE VERSION_MAJOR, 1
NASMX_DEFINE VERSION_MINOR, 0
NASMX_DEFINE VERSION_REV, 4
NASMX_DEFINE VERSION_ID, 0x01000004


;//////////////////////////////////////////////////////////////
;//
;// init NASMX context stack
;//
;%push __NASMX_CTX__


;//////////////////////////////////////////////////////////////
;//
;// Set a Context Stack Value
;//
%macro NASMX_SET_CONTEXT_VALUE 2
	%xdefine %$$%1 %2
%endmacro


;//////////////////////////////////////////////////////////////
;//
;// native sizes
;//
%idefine byte_size 1
%idefine word_size 2
%idefine dword_size 4
%idefine qword_size 8
%idefine tword_size 10
%idefine oword_size 16

;//////////////////////////////////////////////////////////////
;//
;// nasm storage types
;//
%idefine byte_reserve RESB
%idefine word_reserve RESW
%idefine dword_reserve RESD
%idefine qword_reserve RESQ
%idefine tword_reserve REST
%idefine oword_reserve RESO


;//////////////////////////////////////////////////////////////
;//
;// nasm storage types
;//
%idefine byte_storage DB
%idefine word_storage DW
%idefine dword_storage DD
%idefine qword_storage DQ
%idefine tword_storage DT
%idefine oword_storage DO


;//////////////////////////////////////////////////////////////
;//
;// nasmx classifcation of types
;//
%idefine byte_type BYTE
%idefine word_type WORD
%idefine dword_type DWORD
%idefine qword_type QWORD
%idefine tword_type TWORD
%idefine oword_type OWORD
%idefine struc_type STRUC
%idefine union_type UNION

%define typeof(x) x %+ _type
%define sizeof(x) x %+ _size
%define reserve(x) x %+ _reserve
%define declare(x) x %+ _storage

;//////////////////////////////////////////////////////////////
;//
;// NASMX typedef macro
;//
;// usage:
;//   typedef dword, int32_t
%imacro typedef 2.nolist
	%ifndef %{1}_size
			%fatal unknown size: %1
	%endif

;   %xdefine %{2}_size %{1}_size
;   %xdefine %{2}_type %{1}_type
;   %xdefine %{2}_reserve %{1}_reserve
;   %xdefine %{2}_storage %{1}_storage
;	%xdefine %{2}_size %{1}_size
	%xdefine %{2} %{1}
%endmacro


;//////////////////////////////////////////////////////////////
;//
;// NASMX int types
;//
typedef tword, tbyte  ; MASM Style TBYTE
typedef byte, int8_t
typedef byte, uint8_t
typedef word, int16_t
typedef word, uint16_t
typedef dword, int32_t
typedef dword, uint32_t
typedef qword, int64_t
typedef qword, uint64_t
typedef tbyte, int80_t
typedef tbyte, uint80_t
typedef oword, int128_t
typedef oword, uint128_t
typedef qword, long64_t
typedef qword, ulong64_t
typedef oword, long128_t
typedef oword, ulong128_t


;//////////////////////////////////////////////////////////////
;//
;// NASMX ABI size and pointer types
;//
typedef dword, ptr32_t
typedef qword, ptr64_t
;// use for 32->64 bit expansion of either int or ptr
%ixdefine NASMX_PTR ptr%[__BITS__]_t
typedef NASMX_PTR, size_t
%assign __NASMX_ABI_BITS__ sizeof(size_t) * 8
%ifnidn __BITS__,__NASMX_ABI_BITS__
	%fatal unknown size_t: __BITS__
%endif

;//////////////////////////////////////////////////////////////
;//
;// NASMX C types
;//
typedef byte, char_t
typedef byte, uchar_t
typedef word, short_t
typedef word, ushort_t
typedef dword, int_t
typedef dword, uint_t
typedef qword, long_t
typedef qword, ulong_t
typedef dword, float_t
typedef qword, double_t

;//////////////////////////////////////////////////////////////
;//
;// NASMX Unicode Transformation Format types
;//
typedef byte, utf8_t
typedef word, utf16_t
typedef dword, utf32_t

%ifidn	 __OUTPUT_FORMAT__,elf
	NASMX_DEFINE UNDERSCORE
	typedef dword, wchar_t
	%ifdef UNICODE
		%idefine NASMX_CHAR wchar_t
		%idefine NASMX_TEXT(x) __utf32__(x)
	%else
		%idefine NASMX_CHAR char_t
		%idefine NASMX_TEXT(x) x
	%endif
%elifidn __OUTPUT_FORMAT__,elf32
	NASMX_DEFINE UNDERSCORE
	typedef dword, wchar_t
	%ifdef UNICODE
		%idefine NASMX_CHAR wchar_t
		%idefine NASMX_TEXT(x) __utf32__(x)
	%else
		%idefine NASMX_CHAR char_t
		%idefine NASMX_TEXT(x) x
	%endif
%elifidn __OUTPUT_FORMAT__,elf64
	NASMX_DEFINE UNDERSCORE
	typedef dword, wchar_t
	%ifdef UNICODE
		%idefine NASMX_CHAR wchar_t
		%idefine NASMX_TEXT(x) __utf32__(x)
	%else
		%idefine NASMX_CHAR char_t
		%idefine NASMX_TEXT(x) x
	%endif
%elifidn __OUTPUT_FORMAT__,macho
	NASMX_DEFINE UNDERSCORE
	NASMX_DEFINE CDECL_UNDERSCORE
	typedef dword, wchar_t
	%ifdef UNICODE
		%idefine NASMX_CHAR wchar_t
		%idefine NASMX_TEXT(x) __utf32__(x)
	%else
		%idefine NASMX_CHAR char_t
		%idefine NASMX_TEXT(x) x
	%endif
%elifidn __OUTPUT_FORMAT__,macho32
	NASMX_DEFINE UNDERSCORE
	NASMX_DEFINE CDECL_UNDERSCORE
	typedef dword, wchar_t
	%ifdef UNICODE
		%idefine NASMX_CHAR wchar_t
		%idefine NASMX_TEXT(x) __utf32__(x)
	%else
		%idefine NASMX_CHAR char_t
		%idefine NASMX_TEXT(x) x
	%endif
%elifidn __OUTPUT_FORAMT__,macho64
	NASMX_DEFINE UNDERSCORE
	NASMX_DEFINE CDECL_UNDERSCORE
	typedef dword, wchar_t
	%ifdef UNICODE
		%idefine NASMX_CHAR wchar_t
		%idefine NASMX_TEXT(x) __utf32__(x)
	%else
		%idefine NASMX_CHAR char_t
		%idefine NASMX_TEXT(x) x
	%endif
%elifidn __OUTPUT_FORMAT__,win32
	NASMX_DEFINE UNDERSCORE
	typedef word, wchar_t
	%ifdef UNICODE
		%idefine NASMX_CHAR wchar_t
		%idefine NASMX_TEXT(x) __utf16__(x)
	%else
		%idefine NASMX_CHAR char_t
		%idefine NASMX_TEXT(x) x
	%endif
%elifidn __OUTPUT_FORMAT__,win64
	NASMX_DEFINE UNDERSCORE
	typedef word, wchar_t
	%ifdef UNICODE
		%idefine NASMX_CHAR wchar_t
		%idefine NASMX_TEXT(x) __utf16__(x)
	%else
		%idefine NASMX_CHAR char_t
		%idefine NASMX_TEXT(x) x
	%endif
%else
	NASMX_DEFINE UNDERSCORE
	NASMX_DEFINE CDECL_UNDERSCORE
	typedef dword, wchar_t
	%ifdef UNICODE
		%idefine NASMX_CHAR wchar_t
		%idefine NASMX_TEXT(x) __utf32__(x)
	%else
		%idefine NASMX_CHAR char_t
		%idefine NASMX_TEXT(x) x
	%endif
%endif

;//////////////////////////////////////////////////////////////
;//
;// NASMX_STRUC
;//
%imacro NASMX_STRUC 0-*.nolist __NX_ROOT, __NX_ROOT, __NX_CTX_STRUC
	%ifnidni %3,__NX_CTX_STRUC
		%ifnidni %3,__NX_CTX_UNION
			%fatal unknown arg: %{3}
		%endif
	%endif
	%ifctx __NX_CTX_STRUC
		%define %%__is_nested 1
	%elifctx __NX_CTX_UNION
		%define %%__is_nested 1
	%else
		%define %%__is_nested 0
	%endif
	%ifidni %1, __NX_ROOT
		%define %%__is_named 0
	%else
		%define %%__is_named 1
	%endif
	%if (%%__is_nested == 0)
		%if (%%__is_named == 0)
			%fatal root structure or union requires name
		%endif
		%push %3
		%xdefine %$__nx_name %1
		%assign %$__nx_size 0
	%else
		%if (%%__is_named == 0)
			%xdefine %%__tname %{$__nx_name}
		%else
			%xdefine %%__tname %{$__nx_name}.%1
		%endif
		;// the following 5 line sequence fails on 2.08.02
		%assign %%__tsize %$__nx_size
		%push %3
		%xdefine %$__nx_name %%__tname
		%assign %$__nx_size %%__tsize
		%if (%%__is_named == 1)
			%{$__nx_name} equ %$__nx_size
		%endif
	%endif
	%assign %$__nx_osize %$__nx_size
	%assign %$__nx_usize 0
	%define %$__nx_isnamed %%__is_named
	%if (%%__is_named == 1)
		%ifidni %3,__NX_CTX_STRUC
			%xdefine %{$__nx_name}_type struc_type
		%elifidni %3,__NX_CTX_UNION
			%xdefine %{$__nx_name}_type union_type
		%else
			%fatal unknown arg: %{3}
		%endif
		%xdefine %{$__nx_name}_reserve byte_reserve
		%xdefine %{$__nx_name}_storage byte_storage
	%endif
%endmacro

%imacro NASMX_UNION 0-*.nolist __NX_ROOT, __NX_ROOT, __NX_CTX_UNION
	NASMX_STRUC %1, __NX_ROOT, __NX_CTX_UNION
%endmacro

%imacro NASMX_ALIGN 1.nolist
	%ifnctx __NX_CTX_STRUC
		%ifnctx __NX_CTX_UNION
			%fatal corrupt context
		%endif
	%endif
	%if (%1 > 0)
		%assign %%__off (((%$__nx_size + %1) / %1) * %1)
		%assign %%__tmp (%$__nx_size + %1)
		%if (%%__off != %%__tmp)
			%assign %$__nx_size %%__off
		%endif
	%endif
%endmacro

;// usage:
;//   NASMX_RESERVE hWnd, NASMX_PTR, 1
%imacro NASMX_RESERVE 2-3.nolist 1
	%ifnctx __NX_CTX_STRUC
		%ifnctx __NX_CTX_UNION
			%fatal corrupt context
		%endif
	%endif
	%ifndef %{2}_size
		%fatal unknown size for %{$__nx_name} %{1}: %{2}
	%endif
	%assign %%__argsize %{2}_size
	%if (%%__argsize < 1)
		%fatal invalid arg size for %{$__nx_name} %{1}: %{2}
	%endif
	%ifndef %{2}_storage
		%fatal unknown storage tag for %{$__nx_name} %{1}
	%endif

	%assign %%__qty %{3}
	%if (%%__qty < 1)
		%fatal invalid arg qty  for %{$__nx_name} %{1}: %{3}
	%endif

	%assign %%__amt (%%__argsize * %%__qty)

	%xdefine %{$__nx_name}.%{1}_size %%__amt
	%xdefine %{$__nx_name}.%{1}_type %{2}_type
	%xdefine %{$__nx_name}.%{1}_reserve %{2}_reserve
	%xdefine %{$__nx_name}.%{1}_storage %{2}_storage
	%{$__nx_name}.%{1} equ %{$__nx_size}

	%ifctx __NX_CTX_UNION
		;// update current union size
		%if (%%__amt > %$__nx_usize)
			%assign %$__nx_usize %%__amt
		%endif
	%else
		;// update running size
		%assign %$__nx_size (%$__nx_size + %%__amt)
	%endif
%endmacro

%imacro NASMX_ENDSTRUC 0.nolist
	%ifnctx __NX_CTX_STRUC
		%ifnctx __NX_CTX_UNION
			%fatal corrupt context
		%endif
	%endif
	%if ((%$__nx_size-%$__nx_osize) > %$__nx_usize)
		%assign %$__nx_usize %$__nx_size-%$__nx_osize
	%endif
	%if (%$__nx_isnamed == 1)
		%{$__nx_name}_size equ %$__nx_usize
	%endif
	%assign %%__usize %$__nx_usize
	%pop
	%ifctx __NX_CTX_STRUC
		%assign %$__nx_size (%$__nx_size + %%__usize)
	%elifctx __NX_CTX_UNION
		%assign %$__nx_size (%$__nx_size + %%__usize)
		%if ((%$__nx_size-%$__nx_osize) > %$__nx_usize)
			%assign %$__nx_usize %$__nx_size-%$__nx_osize
		%endif
		%assign %$__nx_size %$__nx_osize
	%endif
%endmacro

%idefine NASMX_ENDUNION NASMX_ENDSTRUC

%imacro NASMX_ISTRUC 0-*.nolist __NX_ROOT, __NX_ROOT, __NX_CTX_ISTRUC
	%ifnidni %{3},__NX_CTX_ISTRUC
		%ifnidni %{3},__NX_CTX_IUNION
			%fatal unknown arg: %{3}
		%endif
	%endif
	%ifctx __NX_CTX_ISTRUC
		%define %%__is_nested 1
	%elifctx __NX_CTX_IUNION
		%define %%__is_nested 1
	%else
		%define %%__is_nested 0
	%endif
	%ifnidni %{1},__NX_ROOT
		%define %%__is_named 1
	%else
		%define %%__is_named 0
	%endif
	%if (%%__is_nested == 0)
		%if (%%__is_named == 0)
			%fatal root structure or union requires name
		%endif
		%ifidni %2, __NX_ROOT
			%fatal root structure or union requires base type
		%endif
		%push %3
		%xdefine %$__nx_istrucstart %{1}
		%xdefine %$__nx_name %{2}
		%{$__nx_istrucstart}:
	%else
		%if (%%__is_named == 0)
			%xdefine %%__tname %{$__nx_name}
		%else
			%xdefine %%__tname %{$__nx_name}.%{1}
			%assign %%__off %%__tname
			%assign %%__times %%__off-($-%{$__nx_istrucstart})
			%if (%%__times > 0)
				times %%__times db 0
			%endif
		%endif
		%push  %3
		%xdefine %$__nx_name %%__tname
	%endif
	%define %$__nx_isnamed %%__is_named
%endmacro

%idefine NASMX_IUNION NASMX_ISTRUC

%imacro NASMX_AT 1-2+.nolist
	%xdefine %%__off %{$__nx_name}.%{1}
	%assign %%__times %%__off-($-%$__nx_istrucstart)
	%if (%%__times > 0)
		times %%__times db 0
	%endif
	%{$__nx_name}.%{1}_storage %2
%endmacro

%imacro NASMX_IENDSTRUC 0.nolist
	;// assert: finish up struc if needed
	%if (%$__nx_isnamed == 1)
		%assign %%__times %{$__nx_name}_size-($-%$__nx_istrucstart)
		%if (%%__times > 0)
			times %%__times db 0
		%endif
	%endif
	%pop
%endmacro

%idefine NASMX_IENDUNION NASMX_IENDSTRUC

%imacro IMPORT 1-2.nolist
;	%warning 'DEBUG MACRO ENTRY(import):' %0 %1 %2
	%ifndef __imp_defined_%1
		%if %0 = 1
			%ifdef __NASMX_CDECL_UNDERSCORE__
				%define __cdecl_defined_%1 _%1
				%define __imp_defined_%1 _%1
			%else
				%define __cdecl_defined_%1 %1
				%define __imp_defined_%1 %1
			%endif
		%else
			%ifdef __NASMX_UNDERSCORE__
				%define __imp_defined_%1 _%1@%2
			%else
				%define __imp_defined_%1 %1@%2
			%endif
		%endif
	%else
		%error Import symbol %1 has already been defined
	%endif
;	%warning 'DEBUG MACRO EXIT(import):' %0 %1 %2
%endmacro


%imacro INVOKE 1-100.nolist
;	%warning 'DEBUG MACRO ENTRY(invoke):' %0 %1 %2
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
;%warning 'DEBUG MACRO EXIT(invoke):' %0 %1 %2
%endmacro


%imacro PROC 1-100.nolist
;	%warning 'DEBUG MACRO ENTRY(PROC):' %0 %1 %2
%push proc
	%ifidn __BITS__,64
		%assign %$arg 0x30
	%else
		%assign %$arg 8
	%endif
	%ifdef __entry_%1
		%ifndef __PROCEDURE__
			%ifdef __NASMX_UNDERSCORE__
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
;	%warning 'DEBUG MACRO EXIT(PROC):' %0 %1 %2
%endmacro


%imacro LOCALS 0.nolist
	%assign %$locnt 0
%endmacro


%imacro LOCAL 1-2.nolist
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

%imacro ENDLOCALS 0.nolist
	%ifidn __BITS__,64
		sub rsp, %$locnt
	%else
		sub esp, %$locnt
	%endif
%endmacro


%imacro ARGD 0-1.nolist
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


%imacro ENDPROC 0.nolist
;	%warning 'DEBUG MACRO ENTRY(ENDPROC):'
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
;	%warning 'DEBUG MACRO ENTRY(ENDPROC):'
%endmacro


%imacro LEAVE 0.nolist
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


%imacro RET 0-1.nolist
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


%imacro PROTO 1-2.nolist
	%if %0 = 1
		%ifdef __NASMX_CDECL_UNDERSCORE__
			global _%1
		%else
			global %1
		%endif
	%else
		%ifdef __NASMX_UNDERSCORE__
			global _%1
		%else
			global %1
		%endif
	%endif
%endmacro

%imacro ENTRY 1.nolist
	%ifdef __NASMX_UNDERSCORE__
		%define __entry_%1 _main
	%else
		%define __entry_%1 main
	%endif
%endmacro


%imacro RJMP 2.nolist
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


%imacro SJMP 2.nolist
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


%imacro BREAK 0.nolist
	jmp %$break
%endmacro


%imacro IF 3.nolist
%push IF
	%assign %$next 1
	cmp %1, %3
	RJMP %2, %$local_%$next
%endmacro


%imacro ELSIF 3.nolist
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


%imacro ELSE 0.nolist
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


%imacro ENDIF 0.nolist
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


%imacro SWITCH 1.nolist
%push SWITCH
	mov EDX, %1
	%assign %$next 1
%endmacro


%imacro CASE 1.nolist
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


%imacro DEFAULT 0.nolist
	%ifctx SWITCH
		%define _default_
		%$local_%$next:
	%else
		%error "DEFAULT directive must be within a SWITCH block."
	%endif
%endmacro


%imacro ENDSWITCH 0.nolist
	%ifndef _default_
		%$local_%$next:
	%else
		%undef _default_
	%endif
	%$break:
%pop
%endmacro

%imacro DO 0.nolist
%push DO
	%$begin:
%endmacro


%imacro UNTIL 3.nolist
	%ifctx DO
		cmp %1, %3
		RJMP %2, %$begin
		%$break:
	%else
		%error "UNTIL directive must be preceded by DO."
	%endif
%pop
%endmacro


%imacro WHILE 3.nolist
	%ifctx DO
		cmp %1, %3
		SJMP %2, %$begin
		%$break:
	%else
		%error "WHILE directive must be preceded by DO."
	%endif
%pop
%endmacro

%endif	; ifndef __NASMX_INCLUDED__