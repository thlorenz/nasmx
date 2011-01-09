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
	%if __NASM_VERSION_ID__ < 0x02090000
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
		%ixdefine __NASMX_%[%1]__ %[2]
	%else
		%ixdefine __NASMX_%[%1]__
	%endif
%endmacro


;//////////////////////////////////////////////////////////////
;//
;// Get a NASMX Definition
;//
%macro NASMX_GET_DEFINE 2
	%ifdef __NASMX_%[%1]__
		%xdefine %[%2] __NASMX_%[%1]__
	%elifdef %2
		%undef %[%2]
	%endif
%endmacro

;//////////////////////////////////////////////////////////////
;//
;// Undefine a NASMX Definition
;//
%macro NASMX_UNDEF 1
	%ifdef __NASMX_%[%1]__
		%undef __NASMX_%[%1]__
	%else
		%warning NASMX Definition %[1] is not defined
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
;// native data sizes
;// Must be defined here due to struc_size!
%ixdefine byte_size    1
%ixdefine word_size    2
%ixdefine dword_size   4
%ixdefine qword_size   8
%ixdefine tword_size  10
%ixdefine oword_size  16
%ixdefine __m64_size   8
%ixdefine __m128_size 16
%ixdefine __m256_size 32
%ixdefine __nxfloat_size   4
%ixdefine __nxdouble_size  8
;// native register sizes
%idefine al_size  1
%idefine bl_size  1
%idefine cl_size  1
%idefine dl_size  1
%idefine ah_size  1
%idefine bh_size  1
%idefine ch_size  1
%idefine dh_size  1
%idefine ax_size  2
%idefine bx_size  2
%idefine cx_size  2
%idefine dx_size  2
%idefine di_size  2
%idefine si_size  2
%idefine sp_size  2
%idefine bp_size  2
%idefine bpl_size  1
%idefine dil_size  1
%idefine sil_size  1
%idefine spl_size  1
%idefine eax_size 4
%idefine ebx_size 4
%idefine ecx_size 4
%idefine edx_size 4
%idefine edi_size 4
%idefine esi_size 4
%idefine esp_size 4
%idefine ebp_size 4
%idefine rax_size 8
%idefine rbx_size 8
%idefine rcx_size 8
%idefine rdx_size 8
%idefine rdi_size 8
%idefine rsi_size 8
%idefine rsp_size 8
%idefine rbp_size 8
%idefine r8d_size  4
%idefine r9d_size  4
%idefine r10d_size 4
%idefine r11d_size 4
%idefine r12d_size 4
%idefine r13d_size 4
%idefine r14d_size 4
%idefine r15d_size 4
%idefine r8_size  8
%idefine r9_size  8
%idefine r10_size 8
%idefine r11_size 8
%idefine r12_size 8
%idefine r13_size 8
%idefine r14_size 8
%idefine r15_size 8

;// register aliases used to help with portability
%ifidn __BITS__,64
%ixdefine __AX rax
%ixdefine __BX rbx
%ixdefine __CX rcx
%ixdefine __DX rdx
%ixdefine __DI rdi
%ixdefine __SI rsi
%ixdefine __BP rbp
%ixdefine __SP rsp
%else
%ixdefine __AX eax
%ixdefine __BX ebx
%ixdefine __CX ecx
%ixdefine __DX edx
%ixdefine __DI edi
%ixdefine __SI esi
%ixdefine __BP ebp
%ixdefine __SP esp
%endif
;// register names used to help with macros invoke and uses
%ixdefine __nx_reg_eax eax
%ixdefine __nx_reg_ebx ebx
%ixdefine __nx_reg_ecx ecx
%ixdefine __nx_reg_edx edx
%ixdefine __nx_reg_edi edi
%ixdefine __nx_reg_esi esi
%ixdefine __nx_reg_rax rax
%ixdefine __nx_reg_rbx rbx
%ixdefine __nx_reg_rcx rcx
%ixdefine __nx_reg_rdx rdx
%ixdefine __nx_reg_rdi rdi
%ixdefine __nx_reg_rsi rsi
%ixdefine __nx_reg_r8  r8
%ixdefine __nx_reg_r9  r9
%ixdefine __nx_reg_r10 r10
%ixdefine __nx_reg_r11 r11
%ixdefine __nx_reg_r12 r12
%ixdefine __nx_reg_r13 r13
%ixdefine __nx_reg_r14 r14
%ixdefine __nx_reg_r15 r15


;//////////////////////////////////////////////////////////////
;//
;// nasm storage types
;//
%ixdefine byte_reserve   RESB
%ixdefine word_reserve   RESW
%ixdefine dword_reserve  RESD
%ixdefine qword_reserve  RESQ
%ixdefine tword_reserve  REST
%ixdefine oword_reserve  RESO
%ixdefine __m64_reserve  RESQ
%ixdefine __m128_reserve RESO
%ixdefine __nxfloat_reserve  RESD
%ixdefine __nxdouble_reserve RESQ

;//////////////////////////////////////////////////////////////
;//
;// nasm storage types
;//
%ixdefine byte_storage   DB
%ixdefine word_storage   DW
%ixdefine dword_storage  DD
%ixdefine qword_storage  DQ
%ixdefine tword_storage  DT
%ixdefine oword_storage  DO
%ixdefine __m64_storage  DQ
%ixdefine __m128_storage DO
%ixdefine __nxfloat_storage  DD
%ixdefine __nxdouble_storage DQ

;//////////////////////////////////////////////////////////////
;//
;// nasmx classifcation of types
;//
;// Bits used to contain classification:
;//  0-10 : size of type in bytes
;//    11 : reserved (0)
;// 12-15 : type   ( TODO: struc/union/class )
;//         0 = int type
;//         8 = (bit 15 set if float type, otherwise clear)
;// 
%ixdefine byte_type   0x0001
%ixdefine word_type   0x0002
%ixdefine dword_type  0x0004
%ixdefine qword_type  0x0008
%ixdefine tword_type  0x000A
%ixdefine oword_type  0x0010
%ixdefine __m64_type  0x8008
%ixdefine __m128_type 0x8010
%ixdefine __m256_type 0x8020
%ixdefine __nxfloat_type  0x8004
%ixdefine __nxdouble_type 0x8008

;// NASMX int types
%ixdefine int8_t     byte
%ixdefine uint8_t    byte
%ixdefine int16_t    word
%ixdefine uint16_t   word
%ixdefine int32_t    dword
%ixdefine uint32_t   dword
%ixdefine long32_t   dword
%ixdefine ulong32_t  dword
%ixdefine int64_t    qword
%ixdefine uint64_t   qword
%ixdefine int80_t    tword
%ixdefine uint80_t   tword
%ixdefine int128_t   oword
%ixdefine uint128_t  oword
%ixdefine long64_t   qword
%ixdefine ulong64_t  qword
%ixdefine long128_t  oword
%ixdefine ulong128_t oword
;// NASMX Unicode Transformation Format types
%ixdefine utf8_t     uint8_t
%ixdefine utf16_t    uint16_t
%ixdefine utf32_t    uint32_t
;// C types
;// The classification of long_t type  must be performed
;// during __OUTPUT_FORMAT__ check as the actual sizes
;// are different among operating systems.
%ixdefine char_t     int8_t
%ixdefine uchar_t    uint8_t
%ixdefine short_t    int16_t
%ixdefine ushort_t   uint16_t
%ixdefine int_t      int32_t
%ixdefine uint_t     uint32_t
;// float types require special handling due to
;// nasm FLOAT directives!
%ixdefine float_t    __nxfloat
%ixdefine double_t   __nxdouble
%idefine __float(v) dword __float32__(v)
%idefine __double(v) qword __float64__(v)

;// Map between native size and token.
;// The define name was chosen as it will
;// be displayed to the user if the macro
;// nx_token_from_size() is called with
;// an illegal value during assembly
%ixdefine __nx_error_token_size_1  byte
%ixdefine __nx_error_token_size_2  word
%ixdefine __nx_error_token_size_4  dword
%ixdefine __nx_error_token_size_8  qword
%ixdefine __nx_error_token_size_10 tword
%ixdefine __nx_error_token_size_16 xmm
%ixdefine __nx_error_token_size_32 xmm

%define typeof(x) ((x %+ _type >> 12) & 0x000F)
%define sizeof(x) x %+ _size
%define reserve(x) x %+ _reserve
%define declare(x) x %+ _storage
%define nx_token_from_size(x) __nx_error_token_size_ %+ x
%idefine is_typeof_float(x) ((x %+ _type >> 15) & 0x0001)

;//////////////////////////////////////////////////////////////
;//
;// NASMX ABI size and pointer types
;//
;//                 Windows     Linux
;//        type     32   64     32   64
;// sizeof(int)      4    4      4    4
;// sizeof(long)     4    4      4    8
;// sizeof(ptr)      4    8      4    8
;// sizeof(size_t)   4    8      4    8
%ixdefine size32_t dword
%ixdefine size64_t qword
%ixdefine size_t size%[__BITS__]_t
%assign __NASMX_ABI_BITS__ sizeof(size_t) * 8
%ifnidn __BITS__,__NASMX_ABI_BITS__
	%fatal unknown size_t: __BITS__
%endif
%ixdefine ptr32_t dword
%ixdefine ptr64_t qword
;// use for 32->64 bit expansion of either int or ptr
%ixdefine ptrdiff_t ptr%[__BITS__]_t
%ixdefine NASMX_PTR ptr%[__BITS__]_t
;// remember: intptr's can be confusing when going
;// from 32-bit to 64-bit as sizeof(ptr) is increased
;// to 8 but sizeof(int) remains 4 potential allowing
;// very large (long) ints when using intptrs as ints.
%ixdefine intptr_t ptrdiff_t
%ixdefine uintptr_t ptrdiff_t

;//////////////////////////////////////////////////////////////
;//
;// Calling Convention Enumerations
;// Used within IMPORT, PROTO, PROC, & INVOKE
;//
;// BIT
;//   0-3: PREFIX - index into decorations (i.e. '_', '@', or '?' )
;//        all bits clear if no prefix
;//   4-7: SUFFIX - index into decorations (i.e. '@', '?', '$' )
;//        all bits clear if no suffix
;//  8-11: CALLCONV - calling convention enum
;//    12: ARGROTATE - rotate direction of args pushed to stack
;//        set if left rotation ( PASCAL = %rotate 1 ), clear if right rotation ( CDECL = %rotate -1)
;//    13: RETPOPSARGS - stack adjustment responsibility
;//        set if callee pops args ( PASCAL/STDCALL ), clear if caller adjusts stack ( CDECL )
;//
;// Notes:
;//    You may create your own calling convention for your operating
;//    system of choice by modifying the flags and macros.  However,
;//    the standard calling conventions should continue to exist to
;//    permit interfacing with system calls ( unless you're writing
;//    an OS with a new ABI/API ;)
;//
%define __NASMX_DECLSPEC_CC_PREFIX_MASK__      0x0007
%define __NASMX_DECLSPEC_CC_SUFFIX_MASK__      0x0070
%define __NASMX_DECLSPEC_CC_ENUM_MASK__        0x0F00
%define __NASMX_DECLSPEC_CC_ARGROTATE_MASK__   0x1000
%define __NASMX_DECLSPEC_CC_RETPOPSARGS_MASK__ 0x2000

;// universal calling conventions
%idefine __NASMX_DECLSPEC_CALLCONV_NAKED__    0
%idefine __NASMX_DECLSPEC_CALLCONV_PASCAL__   0x3100
%idefine __NASMX_DECLSPEC_CALLCONV_CDECL__    0x0201
;// although currently specific to win32, the
;// STDCALL calling convention can be useful
%idefine __NASMX_DECLSPEC_CALLCONV_STDCALL__  0x2321
;// The following 2 calling conventions are highly
;// platform dependent and are defined within the
;// OUTPUT_FORMAT check
;// %idefine __NASMX_DECLSPEC_CALLCONV_THISCALL__ 0x????
;// %idefine __NASMX_DECLSPEC_CALLCONV_FASTCALL__ 0x????

;// CALLCONV Enums
;// coincidentally compatible with DotGNU
;// System.Runtime.InteropServices.CallingConvention Enum
%idefine __NASMX_DECLSPEC_CC_ENUM_NAKED__     0
%idefine __NASMX_DECLSPEC_CC_ENUM_PASCAL__    1
%idefine __NASMX_DECLSPEC_CC_ENUM_CDECL__     2
%idefine __NASMX_DECLSPEC_CC_ENUM_STDCALL__   3
%idefine __NASMX_DECLSPEC_CC_ENUM_THISCALL__  4
%idefine __NASMX_DECLSPEC_CC_ENUM_FASTCALL__  5
;// %idefine __NASMX_DECLSPEC_CALLCONV_CC_ENUM_RDFCALL__   6

;// internal CALLCONV macros
%define nx_declspec_cc_prefix(x)       (x & 0x0007)
%define nx_declspec_cc_suffix(x)      ((x >> 4) & 0x0007)
%define nx_declspec_cc_enum(x)        ((x >> 8) & 0x000F)
%define nx_declspec_cc_argrotate(x)   ((x >> 12) & 0x0001)
%define nx_declspec_cc_retpopsargs(x) ((x >> 13) & 0x0001)

;// String containing chars that the prefix/suffix bits index into.
;// If you are adding __thiscall convention for your compiler of
;// choice make sure that the initial suffix char is present in
;// the decorations string.
%define __NASMX_DECLSPEC_CC_DECORATIONS__     '_@?$'
%define __NASMX_ALPHANUM__ '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz'

;//////////////////////////////////////////////////////////////
;// internal macro call
;// used by IMPORT, PROC, & INVOKE
;// usage:
;//    nx_callconv_decorate callconv, funcname, suffix
;// examples:
;//    nx_callconv_decorate __NASMX_DECLSPEC_CALLCONV_STDCALL__, WinProc, 16
;//    nx_callconv_decorate __NASMX_DECLSPEC_CALLCONV_CDECL__, printf
;//    nx_callconv_decorate __NASMX_DECLSPEC_CALLCONV_THISCALL__, ClassName.MethodName, 'Z1yi4p8aue'
%macro nx_callconv_decorate 2-3.nolist 0
	%ifnum %1
		%assign %%__pidx nx_declspec_cc_prefix(%1)
		%assign %%__sidx nx_declspec_cc_suffix(%1)
	%else
		%fatal 'CALLCONV undefined:' %1
	%endif
	%ifnum %2
		%fatal 'internal error'
	%endif

	%if %%__pidx > 0
		%substr %%__sig __NASMX_DECLSPEC_CC_DECORATIONS__ %%__pidx
		%ifnum %2
			%fatal 'internal error'
		%elifid %2
			%defstr %%__func %2
		%eliftoken %2
			%defstr %%__func %2
		%else
			%define %%__func %2
		%endif
		%strcat %%__sig %%__sig,%%__func
	%else
		%ifstr %2
			%define %%__func %2
		%else
			%defstr %%__sig %2
		%endif
	%endif
	%if %%__sidx > 0
		%ifnum %3
			%defstr %%__suffix %3
		%elifid %3
			%defstr %%__suffix %3
		%else
			%ifstr %3
				%define %%__suffix %3
			%else
				%defstr %%__suffix %3
			%endif
		%endif
		%substr %%__stok __NASMX_DECLSPEC_CC_DECORATIONS__ %%__sidx
		%strcat %%__sig %%__sig,%%__stok,%%__suffix
	%endif

	%deftok %$__nxtok_decorated_name %%__sig

%endmacro

;//////////////////////////////////////////////////////////////
;//
;// Target Operating System Type definitions
;//
%define __NASMX_DECLSPEC_SYSTYPE_LINUX__   1
%define __NASMX_DECLSPEC_SYSTYPE_MACHOS__  2
%define __NASMX_DECLSPEC_SYSTYPE_WINDOWS__ 3

;//////////////////////////////////////////////////////////////////
;// Macro to control NASMX default behavior
;// example usage:
;//    NASMX_PRAGMA CALLSTACK, 32
;//    NASMX_PRAGMA WARNING, DISABLE, ALL
;//    NASMX_PRAGMA WARNING, DISABLE, 8001[, 8002, 8003]
;//    NASMX_PRAGMA WARNING, ENABLE, ALL
;// The macro will eventually allow up to enable/disable
;// warnings generated by the NASMX macro type system
%imacro NASMX_PRAGMA 1-*.nolist
	%ifidni WARNING,%1
		%warning actual pragma warnings currently unimplemented
		%ifidni ENABLE, %2
			;// assert: warnings are enabled if undefined
			%ifidni ALL,%3
				%ifdef __NASMX_PRAGMA_WARNING_8001__
					%undef __NASMX_PRAGMA_WARNING_8001__
				%endif
				%ifdef __NASMX_PRAGMA_WARNING_8002__
					%undef __NASMX_PRAGMA_WARNING_8002__
				%endif
			%else
				%rep %0-2
					%rotate 1
					%ifdef __NASMX_PRAGMA_WARNING_%1__
						%undef __NASMX_PRAGMA_WARNING_%1__
					%endif
				%endrep
			%endif
		%elifidni DISABLE, %2
			;// assert: warnings are disabled if defined
			%ifidni ALL,%3
				%ifndef __NASMX_PRAGMA_WARNING_8001__
					%define __NASMX_PRAGMA_WARNING_8001__
				%endif
				%ifndef __NASMX_PRAGMA_WARNING_8002__
					%define __NASMX_PRAGMA_WARNING_8002__
				%endif
			%else
				%rep %0-2
					%rotate 1
					%ifndef __NASMX_PRAGMA_WARNING_%3__
						%define __NASMX_PRAGMA_WARNING_%3__
					%endif
				%endrep
			%endif
		%else
			%error 'syntax: nasmx_pragma warning, [enable | disable], ...'
		%endif
	%elifidni CALLSTACK, %1
		%ifdef NASMX_ENDPROC
			%error %1 pragma cannot be defined within procedure definition
		%endif
		%ifnum %2
			%assign %%__nx_stack_adjust %2
			%ifidni __OUTPUT_FORMAT__, win64
				;// assert: Win64 calling convention requires that the
				;// call stack be aligned to 16 bytes and at least 32
				%if %%__nx_stack_adjust < 32
					%assign %%__nx_stack_adjust 32
				%endif
				%assign %%__off (((%%__nx_stack_adjust + 16) / 16) * 16)
				%assign %%__tmp (%%__nx_stack_adjust + 16)
				%if (%%__off != %%__tmp)
					%assign %%__nx_stack_adjust %%__off
				%endif
			%endif
			;// This must be a global define since it is used within the procedure
			;// and during invoke and thus could be hidden by one or more user contexts
			%ifdef __NX_CALLSTACK_ADJUST__
				%undef __NX_CALLSTACK_ADJUST__
			%endif
			%xdefine __NX_CALLSTACK_ADJUST__ %%__nx_stack_adjust
		%else
			%error %1 pragma requires valid byte count
		%endif
	%else
		%error 'unknown nasmx_pragma:' %1
	%endif
%endmacro

;//////////////////////////////////////////////////////////////////
;// Macro to override default ABI behavior (Declare Specialization)
;// example usage:
;//    NASMX_DECLSPEC CALLCONV, PASCAL
;//    NASMX_DECLSPEC CALLCONV, STDCALL, DEFAULT
;//    NASMX_DECLSPEC SYSTYPE, LINUX
;//
;// notes:
;//    Make sure you understand the effects of using this command
;//    before making a global declaration!  Unresolved linker errors
;//    may haunt you!
%imacro NASMX_DECLSPEC 1-8.nolist
	%ifidni %1,CALLCONV
		%if %0 < 2
			%error 'nasmx_declspec syntax'
		%endif
		%ifndef __NASMX_DECLSPEC_CALLCONV_%[%2]__
			%error 'unknown declspec calltype:' %2
		%endif
		%if %0 == 2
			%ixdefine __NASMX_DECLSPEC_CALLCONV_DEFAULT__ __NASMX_DECLSPEC_CALLCONV_%[%2]__
		%else
			%ifdef __NASMX_DECLSPEC_CALLCONV_%[%3]__
				%warning 'declspec redefining' %1 %2 %3
			%endif
			%ixdefine __NASMX_DECLSPEC_CALLCONV_%[%3]__ __NASMX_DECLSPEC_CALLCONV_%[%2]__
		%endif
	%else
		%ifidni %1,SYSTYPE
			%ifndef __NASMX_DECLSPEC_SYSTYPE_%[%2]__
				%error 'unknown declspec systype:' %2
			%endif
			%if %0 == 2
				%ixdefine __NASMX_DECLSPEC_SYSTYPE_DEFAULT__ __NASMX_DECLSPEC_SYSTYPE_%[%2]__
			%else
				%ifdef __NASMX_DECLSPEC_SYSTYPE_%[%3]__
					%warning 'declspec redefining' %1 %2 %3
				%endif
				%ixdefine __NASMX_DECLSPEC_SYSTYPE_%[%3]__ __NASMX_DECLSPEC_SYSTYPE_%[%2]__
			%endif
		%else
			%error 'unknown declspec:' %1
		%endif
	%endif
%endmacro


;//////////////////////////////////////////////////////////////////
;// OUTPUT_FORMAT check
;//
;// All system specific defines are made here
;//
%ifidn	 __OUTPUT_FORMAT__,elf
	%idefine __NASMX_DECLSPEC_CALLCONV_THISCALL__ 0x0410
	%idefine __NASMX_DECLSPEC_CALLCONV_FASTCALL__ 0x2500
	%define __NASMX_DECLSPEC_FASTCALL_MAXINTREGS__    0
	%define __NASMX_DECLSPEC_FASTCALL_MAXFLOATREGS__  0
	NASMX_DECLSPEC SYSTYPE, LINUX
	NASMX_DECLSPEC CALLCONV, CDECL, DEFAULT
	%idefine long_t long32_t
	%idefine ulong_t ulong32_t
	%idefine wchar_t dword
	%ifdef UNICODE
		%idefine NASMX_TCHAR wchar_t
		%idefine NASMX_TEXT(x) __utf32__(x)
	%else
		%idefine NASMX_TCHAR char_t
		%idefine NASMX_TEXT(x) x
	%endif
%elifidn __OUTPUT_FORMAT__,elf32
	%idefine __NASMX_DECLSPEC_CALLCONV_THISCALL__ 0x0410
	%idefine __NASMX_DECLSPEC_CALLCONV_FASTCALL__ 0x2500
	%define __NASMX_DECLSPEC_FASTCALL_MAXINTREGS__    0
	%define __NASMX_DECLSPEC_FASTCALL_MAXFLOATREGS__  0
	NASMX_DECLSPEC SYSTYPE, LINUX
	NASMX_DECLSPEC CALLCONV, CDECL, DEFAULT
	%idefine long_t long32_t
	%idefine ulong_t ulong32_t
	%idefine wchar_t dword
	%ifdef UNICODE
		%idefine NASMX_TCHAR wchar_t
		%idefine NASMX_TEXT(x) __utf32__(x)
	%else
		%idefine NASMX_TCHAR char_t
		%idefine NASMX_TEXT(x) x
	%endif
%elifidn __OUTPUT_FORMAT__,elf64
	%idefine __NASMX_DECLSPEC_CALLCONV_THISCALL__ 0x0410
	%idefine __NASMX_DECLSPEC_CALLCONV_FASTCALL__ 0x2500
	%define __NASMX_DECLSPEC_FASTCALL_MAXINTREGS__    6
	%define __NASMX_DECLSPEC_FASTCALL_MAXFLOATREGS__  8
	%define __NASMX_DECLSPEC_FASTCALL_REGINTARGS_8__ 'RDIRSIRDXRCXR8 R9 '
	%define __NASMX_DECLSPEC_FASTCALL_REGINTARGS_4__ 'EDIESIEDXECXR8DR9D'
	%define __NASMX_DECLSPEC_FASTCALL_REGINTARGS_2__ 'DI SI DX CX R8WR9W'
	NASMX_DECLSPEC SYSTYPE, LINUX
	NASMX_DECLSPEC CALLCONV, FASTCALL, DEFAULT
	%idefine long_t long64_t
	%idefine ulong_t ulong64_t
	%idefine wchar_t dword
	%ifdef UNICODE
		%idefine NASMX_TCHAR wchar_t
		%idefine NASMX_TEXT(x) __utf32__(x)
	%else
		%idefine NASMX_TCHAR char_t
		%idefine NASMX_TEXT(x) x
	%endif
%elifidn __OUTPUT_FORMAT__,macho
	%idefine __NASMX_DECLSPEC_CALLCONV_THISCALL__ 0x0411
	%idefine __NASMX_DECLSPEC_CALLCONV_FASTCALL__ 0x2501
	%define __NASMX_DECLSPEC_FASTCALL_MAXINTREGS__    0
	%define __NASMX_DECLSPEC_FASTCALL_MAXFLOATREGS__  0
	NASMX_DECLSPEC SYSTYPE, MACHOS
	NASMX_DECLSPEC CALLCONV, CDECL, DEFAULT
	%idefine long_t long32_t
	%idefine ulong_t ulong32_t
	%idefine wchar_t dword
	%ifdef UNICODE
		%idefine NASMX_TCHAR wchar_t
		%idefine NASMX_TEXT(x) __utf32__(x)
	%else
		%idefine NASMX_TCHAR char_t
		%idefine NASMX_TEXT(x) x
	%endif
%elifidn __OUTPUT_FORMAT__,macho32
	%idefine __NASMX_DECLSPEC_CALLCONV_THISCALL__ 0x0411
	%idefine __NASMX_DECLSPEC_CALLCONV_FASTCALL__ 0x2501
	%define __NASMX_DECLSPEC_FASTCALL_MAXINTREGS__    0
	%define __NASMX_DECLSPEC_FASTCALL_MAXFLOATREGS__  0
	NASMX_DECLSPEC SYSTYPE, MACHOS
	NASMX_DECLSPEC CALLCONV, CDECL, DEFAULT
	%idefine long_t long32_t
	%idefine ulong_t ulong32_t
	%idefine wchar_t dword
	%ifdef UNICODE
		%idefine NASMX_TCHAR wchar_t
		%idefine NASMX_TEXT(x) __utf32__(x)
	%else
		%idefine NASMX_TCHAR char_t
		%idefine NASMX_TEXT(x) x
	%endif
%elifidn __OUTPUT_FORAMT__,macho64
	%idefine __NASMX_DECLSPEC_CALLCONV_THISCALL__ 0x0411
	%idefine __NASMX_DECLSPEC_CALLCONV_FASTCALL__ 0x2501
	%define __NASMX_DECLSPEC_FASTCALL_MAXINTREGS__    6
	%define __NASMX_DECLSPEC_FASTCALL_MAXFLOATREGS__  8
	%define __NASMX_DECLSPEC_FASTCALL_REGINTARGS_8__ 'RDIRSIRDXRCXR8 R9 '
	%define __NASMX_DECLSPEC_FASTCALL_REGINTARGS_4__ 'EDIESIEDXECXR8dR9d'
	%define __NASMX_DECLSPEC_FASTCALL_REGINTARGS_2__ 'DI SI DX CX R8wR9w'
	NASMX_DECLSPEC SYSTYPE, MACHOS
	NASMX_DECLSPEC CALLCONV, FASTCALL, DEFAULT
	%idefine long_t long64_t
	%idefine ulong_t ulong64_t
	%idefine wchar_t dword
	%ifdef UNICODE
		%idefine NASMX_TCHAR wchar_t
		%idefine NASMX_TEXT(x) __utf32__(x)
	%else
		%idefine NASMX_TCHAR char_t
		%idefine NASMX_TEXT(x) x
	%endif
%elifidn __OUTPUT_FORMAT__,win32
	%idefine __NASMX_DECLSPEC_CALLCONV_THISCALL__ 0x2423
	%idefine __NASMX_DECLSPEC_CALLCONV_FASTCALL__ 0x2522
	%define __NASMX_DECLSPEC_FASTCALL_MAXINTREGS__    2
	%define __NASMX_DECLSPEC_FASTCALL_MAXFLOATREGS__  0
	%define __NASMX_DECLSPEC_FASTCALL_REGINTARGS_4__ 'ECXEDX'
	%define __NASMX_DECLSPEC_FASTCALL_REGINTARGS_2__ 'CX DX '
	NASMX_DECLSPEC SYSTYPE, WINDOWS
	NASMX_DECLSPEC CALLCONV, STDCALL, DEFAULT
	%idefine long_t long32_t
	%idefine ulong_t ulong32_t
	%idefine wchar_t word
	%ifdef UNICODE
		%idefine NASMX_TCHAR wchar_t
		%idefine NASMX_TEXT(x) __utf16__(x)
	%else
		%idefine NASMX_TCHAR char_t
		%idefine NASMX_TEXT(x) x
	%endif
%elifidn __OUTPUT_FORMAT__,win64
	%idefine __NASMX_DECLSPEC_CALLCONV_THISCALL__ 0x2423
	%idefine __NASMX_DECLSPEC_CALLCONV_FASTCALL__ 0x0500
	%define __NASMX_DECLSPEC_FASTCALL_MAXINTREGS__    4
	%define __NASMX_DECLSPEC_FASTCALL_MAXFLOATREGS__  4
	%define __NASMX_DECLSPEC_FASTCALL_REGINTARGS_8__ 'RCXRDXR8 R9 '
	%define __NASMX_DECLSPEC_FASTCALL_REGINTARGS_4__ 'ECXEDXR8DR9D'
	%define __NASMX_DECLSPEC_FASTCALL_REGINTARGS_2__ 'CX DX R8WR9W'
	NASMX_DECLSPEC SYSTYPE, WINDOWS
	NASMX_DECLSPEC CALLCONV, FASTCALL, DEFAULT
	%idefine long_t long32_t
	%idefine ulong_t ulong32_t
	%idefine wchar_t word
	%ifdef UNICODE
		%idefine NASMX_TCHAR wchar_t
		%idefine NASMX_TEXT(x) __utf16__(x)
	%else
		%idefine NASMX_TCHAR char_t
		%idefine NASMX_TEXT(x) x
	%endif
%else
	%define __NASMX_DECLSPEC_CALLCONV_THISCALL__ 0x0410
	%define __NASMX_DECLSPEC_CALLCONV_FASTCALL__ 0x2501
	%define __NASMX_DECLSPEC_FASTCALL_MAXINTREGS__    0
	%define __NASMX_DECLSPEC_FASTCALL_MAXFLOATREGS__  0
	NASMX_DECLSPEC SYSTYPE, LINUX
	NASMX_DECLSPEC CALLCONV, CDECL, DEFAULT
	%if sizeof(size_t) == 32
		%idefine long_t long32_t
		%idefine ulong_t ulong32_t
	%else
		%idefine long_t long64_t
		%idefine ulong_t ulong64_t
	%endif
	%idefine wchar_t dword
	%ifdef UNICODE
		%idefine NASMX_TCHAR wchar_t
		%idefine NASMX_TEXT(x) __utf32__(x)
	%else
		%idefine NASMX_TCHAR char_t
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

	%xdefine %[%{$__nx_name}.%{1}]_size %%__amt
	%xdefine %[%{$__nx_name}.%{1}]_type %[%{2}]_type
	%xdefine %[%{$__nx_name}.%{1}]_reserve %[%{2}]_reserve
	%xdefine %[%{$__nx_name}.%{1}]_storage %[%{2}]_storage
	%[%{$__nx_name}.%{1}] equ %[%{$__nx_size}]

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
		%[%$__nx_istrucstart]:
	%else
		%if (%%__is_named == 0)
			%xdefine %%__tname %{$__nx_name}
		%else
			%xdefine %%__tname %{$__nx_name}.%{1}
			%assign %%__off %%__tname
			%assign %%__times %%__off-($-%[%$__nx_istrucstart])
			%if (%%__times > 0)
				times %%__times db 0
			%endif
		%endif
		%push  %3
		%xdefine %$__nx_istrucstart %[%$$__nx_istrucstart]
		%xdefine %$__nx_name %%__tname
	%endif
	%define %$__nx_isnamed %%__is_named
%endmacro

%idefine NASMX_IUNION NASMX_ISTRUC

%imacro NASMX_AT 1-2+.nolist
	%assign %%__ofs %{$__nx_name}.%{1}
	%assign %%__count %%__ofs-($-%$__nx_istrucstart)
	%if (%%__count > 0)
		times %%__count db 0
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

;//////////////////////////////////////////////////////////////
;// MACRO nx_isalnum
;//
;// Purpose
;//    This macro is designed to return in the current context
;//    stack variable %$__nx_isalnum_bool if the parameter is
;//    alphanumeric.
;//
;// Usage:
;//    nx_isalnum chr
;//    nx_isalnum 'x'
;//
%macro nx_isalnum 1
	%ifstr %1
		%define %%__arg_chr %1
	%else
		%defstr %%__arg_chr %1
	%endif
	%strlen %%__count __NASMX_ALPHANUM__
	%assign %%__idx 0
	%assign %$__nx_isalnum_bool 0
	%rep %%__count
		%assign %%__idx %%__idx + 1
		%substr %%__chr __NASMX_ALPHANUM__ %%__idx, 1
		%ifidn %%__chr, %%__arg_chr
			%assign %$__nx_isalnum_bool %%__idx
			%exitrep
		%endif
	%endrep
%endmacro

;//////////////////////////////////////////////////////////////
;// MACRO nx_strtok
;//
;// Purpose
;//    To parse a string and return delimited tokens
;//    Functionality is similar to the C strtok function
;//
;// Usage:                        ; After call:
;//    nx_strtok two tokens, ' '  ; %$__nx_token = two   , %$__nx_token_len = 3
;//    nx_strtok NULL, ' :?;'     ; %$__nx_token = tokens, %$__nx_token_len = 6
;//    nx_strtok NULL, ' :?;'     ; %$__nx_token = ''    , %$__nx_token_len = 0
;//
;// Notes:
;//    The return value is stored on the context stack as
;//    %$__nx_token thus it must only be called within a valid context.
;;//   The length is also returned as %$__nx_token_len.  Check this value
;//    for 0 after call this macro before processing the return value.
;//
;//    Call more than once to get the next token in the sequence, if any.
;//    This function must be called at least once with a valid string
;//    or token to parse before passing in NULL (0) in subsequent calls.
;//
;//    Unfortunately, a side effect of using macros is that a comma which
;//    appears in a token actually causes the single token to split into 2
;//    tokens making it impossible to use this macro like:
;//         %define mytoken $32,000
;//         nx_strtok mytoken, ','
%imacro nx_strtok 2.nolist
	%ifnum %1
		%assign %%__nx_null %1
		%if %%__nx_null == 0
			%define %%__arg_str %$__nxtok_next
			%assign %%__arg_len %$__nxtok_len
		%else
			%defstr %%__arg_str %1
			%strlen %%__arg_len %%__arg_str
		%endif
	%else
		%ifstr %1
			%define %%__arg_str %1
		%else
			%defstr %%__arg_str %1
		%endif
		%strlen %%__arg_len %%__arg_str
	%endif

	%if %%__arg_len == 0
		%define %$__nxtok_next ''
		%assign %$__nxtok_len 0
		%define %$__nx_token ''
		%assign %$__nx_token_len 0
	%else
		%ifstr %2
			%define %%__sep_str %2
		%else
			%defstr %%__sep_str %2
		%endif
		%strlen %%__sep_len %%__sep_str

		%assign %$__nx_token_len 0
		%assign %%__arg_idx 1
		%rep %%__arg_len
			%substr %%__arg_chr %%__arg_str %%__arg_idx
			%assign %%__sep_idx 1
			%rep %%__sep_len
				%substr %%__sep_chr %%__sep_str %%__sep_idx
				%ifidn %%__arg_chr, %%__sep_chr
					%assign %$__nx_token_len %%__arg_idx-1
					%exitrep
				%else
					%assign %%__sep_idx 1+%%__sep_idx
				%endif
			%endrep
			%if %$__nx_token_len != 0
				%exitrep
			%else
				%assign %%__arg_idx 1+%%__arg_idx
			%endif
		%endrep
		%if %$__nx_token_len == 0
			%deftok %$__nx_token %%__arg_str
			%assign %$__nx_token_len %%__arg_len
			%define %$__nxtok_next ''
			%assign %$__nxtok_len 0
		%else
			%substr %%__tokstr %%__arg_str 1,%$__nx_token_len
			%deftok %$__nx_token %%__tokstr
			%if %$__nx_token_len < %%__arg_len
				%rep %%__arg_len - %$__nx_token_len
					%substr %%__arg_chr %%__arg_str %%__arg_idx
					%assign %%__nx_found 0
					%assign %%__sep_idx 1
					%rep %%__sep_len
						%substr %%__sep_chr %%__sep_str %%__sep_idx
						%ifidn %%__arg_chr, %%__sep_chr
							%assign %%__nx_found 1
							%exitrep
						%else
							%assign %%__sep_idx 1+%%__sep_idx
						%endif
					%endrep
					%if %%__nx_found == 0
						%exitrep
					%else
						%assign %%__arg_idx 1+%%__arg_idx
					%endif
				%endrep
				%if %%__arg_idx <= %%__arg_len
					%assign %$__nxtok_len %%__arg_len-%%__arg_idx+1
					%substr %$__nxtok_next %%__arg_str %%__arg_idx,%$__nxtok_len
				%else
					%define %$__nxtok_next ''
					%assign %$__nxtok_len 0
				%endif
			%else
				%define %$__nxtok_next ''
				%assign %$__nxtok_len 0
			%endif
		%endif
	%endif

%endmacro


;//////////////////////////////////////////////////////////////
;// MACRO nx_strchr
;//
;// Purpose
;//    This macro is designed to find position of char within string.
;//    It will update the current context stack variable %$__nx_strchr_pos
;//    with the index position of the chr or 0 if chr not found
;// Usage:
;//    nx_strchr string, chr
;//    nx_strchr [wc + hInstance], 'x'
;//
%macro nx_strchr 2
	%ifdef %$__nx_strchr_string
		%undef %$__nx_strchr_string
	%endif
	%ifstr %1
		%xdefine %$__nx_strchr_string %{1}
	%else
		%defstr %$__nx_strchr_string %{1}
	%endif
	%strlen %%__count %[%$__nx_strchr_string]
	%assign %%__idx 0
	%assign %%__found 0
	%rep %%__count
		%assign %%__idx %%__idx + 1
		%substr %%__chr %[%$__nx_strchr_string] %%__idx
		%ifidn %%__chr,%{2}
			%assign %%__found %%__idx
			%exitrep
		%endif
	%endrep
	%assign %$__nx_strchr_pos %%__found
%endmacro


;//////////////////////////////////////////////////////////////
;// MACRO nx_strstr
;//
;// Purpose
;//    This macro is designed to find position of substr within string.
;//    It will update the current context stack variable %$__nx_strstr_pos
;//    with the index position of the substr or 0 if not found
;// Usage:
;//    nx_strstr string, substr
;//    nx_strstr [rpb + hInstance], rbp
;//
%macro nx_strstr 2
	%ifdef %$__nx_strstr_string
		%undef %$__nx_strstr_string
	%endif
	%ifstr %1
		%xdefine %$__nx_strstr_string %{1}
	%else
		%defstr %$__nx_strstr_string %{1}
	%endif
	%ifstr %2
		%xdefine %$__nx_strstr_substring %{2}
	%else
		%defstr %$__nx_strstr_substring %{2}
	%endif
	%strlen %%__count %[%$__nx_strstr_string]
	%substr %%__subchr %[%$__nx_strstr_substring] 1
	%strlen %%__sublen %[%$__nx_strstr_substring]
	%assign %%__idx 0
	%assign %%__found 0
	%rep %%__count
		%assign %%__idx %%__idx + 1
		%if ((%%__count - %%__idx + 1) < %%__sublen)
			%exitrep
		%endif
		%substr %%__chr %[%$__nx_strstr_string] %%__idx
		%ifidni %%__chr,%%__subchr
			%substr %%__tmpstr %$__nx_strstr_string %%__idx, %%__sublen
			%ifidni %%__tmpstr, %$__nx_strstr_substring
				%assign %%__found %%__idx
				%exitrep
			%endif
		%endif
	%endrep
	%assign %$__nx_strstr_pos %%__found
	%undef %$__nx_strstr_string
	%undef %$__nx_strstr_substring
%endmacro


;// small helper macro used to parse __nxsig@@ defines
%macro nx_parse_tokens 1-100.nolist
	%ifdef __nx_token_0
		%undef __nx_token_0
	%endif
	%xdefine __nx_token_0 %0
	%assign %%__ctr 1
	%rep %0
		%ifdef __nx_token_%[%%__ctr]
			%undef __nx_token_%[%%__ctr]
		%endif
		%xdefine __nx_token_%[%%__ctr] %1
		%assign %%__ctr 1 + %%__ctr
		%rotate 1
	%endrep
%endmacro


;//////////////////////////////////////////////////////////////
;// MACRO IMPORT
;//
;// Purpose
;//    To define the signature and required syntax for
;//    an external function
;//
;// usage:
;//    IMPORT printf
;//    IMPORT GetSystemWindowsDirectoryA, 8
;//    IMPORT cdecl, myfunc, ptrdiff_t, dword, float_t
;//
%imacro IMPORT 1-100.nolist
	%push __NX_CTX_IMPORT__

	%assign %$__bytecount 0
	%ifndef __NASMX_DECLSPEC_CALLCONV_%[%1]__
		%assign %$__callconv __NASMX_DECLSPEC_CALLCONV_DEFAULT__
		%define %$__nx_proc %1
		%if %0 > 1
			%ifnum %2
				%ifidn __OUTPUT_FORMAT__,win32
					%assign %$__bytecount %2
				%endif
				%assign %$__repargs 0
			%else
				%assign %$__repargs %0-1
			%endif
		%else
			%assign %%__cc_enum nx_declspec_cc_enum(__NASMX_DECLSPEC_CALLCONV_DEFAULT__)
			%if %%__cc_enum == __NASMX_DECLSPEC_CC_ENUM_STDCALL__
				;// assert: no bytecount in import implies cdecl for win32
				%assign %$__callconv __NASMX_DECLSPEC_CALLCONV_CDECL__
;			%elif %%__cc_enum == __NASMX_DECLSPEC_CC_ENUM_FASTCALL__
;				;// assert: no bytecount in import implies cdecl for win32/win64 fastcall
;				%assign %$__callconv __NASMX_DECLSPEC_CALLCONV_CDECL__
			%endif
			%assign %$__repargs 0
		%endif
	%else
		%if %0 < 2
			%fatal usage: IMPORT [CALLCONV, ] FUNCNAME [,ARG1,ARG2,...]
		%endif
		%assign %$__callconv __NASMX_DECLSPEC_CALLCONV_%[%1]__
		%define %$__nx_proc %2
		%assign %$__repargs %0-2
	%endif

	%ifdef __nx_import_param_list
		%undef __nx_import_param_list
	%endif
	%assign %%__cc_enum nx_declspec_cc_enum(%[%$__callconv])
	%if %%__cc_enum != __NASMX_DECLSPEC_CC_ENUM_NAKED__
		;// assert: calc byte count for sig check
		%rep %$__repargs
			%rotate -1
			%ifnum %1
				%assign %$__bytecount %1
				%exitrep
			%else
				nx_strtok %1, ' '
				%assign %%__bytecnt sizeof(%$__nx_token)
				%if %%__bytecnt < sizeof(size_t)
					%assign %%__bytecnt sizeof(size_t)
				%endif
				%assign %$__bytecount %$__bytecount + %%__bytecnt
				%xdefine __nx_import_argtype %$__nx_token %+ _type
				%ifndef __nx_import_param_list
					%defstr __nx_import_param_list __nx_import_argtype
				%else
					%defstr __nx_import_argstr __nx_import_argtype
					%strcat __nx_import_param_list __nx_import_argstr,',',__nx_import_param_list
					%undef __nx_import_argstr
				%endif
				%undef __nx_import_argtype
			%endif
		%endrep
	%endif
	nx_callconv_decorate %$__callconv,%$__nx_proc,%$__bytecount
	%ifdef __nxsig@@%[%$__nxtok_decorated_name]
		%warning redefining import symbol %$__nx_proc as %[%$__nxtok_decorated_name]
	%endif

	%ifndef __nx_import_param_list
		%xdefine __nxsig@@%[%$__nxtok_decorated_name] %[%$__callconv],%[%$__bytecount]
	%else
		%deftok __nx_import_params __nx_import_param_list
		%xdefine __nxsig@@%[%$__nxtok_decorated_name] %[%$__callconv],%[%$__bytecount],__nx_import_params
		%undef __nx_import_params
		%undef __nx_import_param_list
	%endif
	%ifnidn %$__nx_proc,%$__nxtok_decorated_name
		%xdefine %[%$__nx_proc] %[%$__nxtok_decorated_name]
	%endif
	%pop
%endmacro


;//////////////////////////////////////////////////////////////
;// MACRO PROTO
;//
;// usage:
;//    PROTO [CALLCONV,] FUNCNAME [,ARGS...]
;//
;// examples:
;// Using default calling convention:
;//    PROTO WndProc, ptrdiff_t, dword, size_t, size_t
;// Specifying a calling convention
;//    PROTO cdecl, myfunc, ptrdiff_t, dword, float_t
;//
;// notes:
;//    This macro must be used when defining procedures
;//    that will be callable from other modules via
;//    the import macro as the function name is made
;//    global here.
;//
%imacro PROTO 1-100.nolist
	%push __NX_CTX_PROTO__
	%ifndef __NASMX_DECLSPEC_CALLCONV_%[%1]__
		%assign %$__callconv __NASMX_DECLSPEC_CALLCONV_DEFAULT__
		%define %$__proc %1
		%assign %$__repcnt %0-1
	%else
		%if %0 < 2
			%fatal usage: PROTO [CALLCONV, ] FUNCNAME [,ARG1,ARG2,...]
		%endif
		%assign %$__callconv __NASMX_DECLSPEC_CALLCONV_%[%1]__
		%define %$__proc %2
		%assign %$__repcnt %0-2
	%endif
	%ifdef __nx_proto_param_list
		%undef __nx_proto_param_list
	%endif
	%assign %$__bytecount 0
	%assign %%__cc_enum nx_declspec_cc_enum(%$__callconv)
	%if %%__cc_enum != __NASMX_DECLSPEC_CC_ENUM_NAKED__
		;// assert: calc byte count for sig check during invoke 
		%rep %$__repcnt
			%rotate -1
			%ifnum %1
				%assign %$__bytecount %1
				%exitrep
			%else
				nx_strtok %1, ' '
				%assign %%__bytes %[%$__nx_token]_size
				%if %%__bytes < sizeof(size_t)
					%assign %%__bytes sizeof(size_t)
				%endif
				%assign %$__bytecount %$__bytecount + %%__bytes
				%xdefine __nx_proto_argtype %$__nx_token %+ _type
				%ifndef __nx_proto_param_list
					%defstr __nx_proto_param_list __nx_proto_argtype
				%else
					%defstr __nx_proto_argstr __nx_proto_argtype
					%strcat __nx_proto_param_list __nx_proto_argstr,',',__nx_proto_param_list
					%undef __nx_proto_argstr
				%endif
				%undef __nx_proto_argtype
			%endif
		%endrep
	%endif

	%ifndef %[%$__proc]
		%ifdef __nxsig@@%[%$__proc]
			%fatal global symbol %[%$__proc] already defined
		%endif
		nx_callconv_decorate %$__callconv,%$__proc,%$__bytecount
		%ifndef __nx_proto_param_list
			%xdefine __nxsig@@%[%$__nxtok_decorated_name] %[%$__callconv],%[%$__bytecount]
		%else
			%deftok __nx_proto_params __nx_proto_param_list
			%xdefine __nxsig@@%[%$__nxtok_decorated_name] %[%$__callconv],%[%$__bytecount],__nx_proto_params
			%undef __nx_proto_params
			%undef __nx_proto_param_list
		%endif
		%ifnidn %$__proc,%$__nxtok_decorated_name
			%xdefine %[%$__proc] %[%$__nxtok_decorated_name]
		%endif
	%endif

	%ifndef __nxsig_declared_%[%$__proc]
		global %[%$__proc]
		%xdefine __nxsig_declared_%[%$__proc] global
	%endif

	%pop
%endmacro


;//////////////////////////////////////////////////////////////
;// MACRO ENTRY
;//
;// usage:
;//    ENTRY progname
;//
;// examples:
;//    ENTRY Demo1
;//
;// notes:
;//    program entry is assumed to be cdecl unless system default
;//    callconv specification is pascal.
;//    When building on Win64 or using pascal callconv you must
;//    change the makefile by removing the leading underscore
;//    from the linker /entry line
%imacro ENTRY 1.nolist
	%assign %%__cc_enum nx_declspec_cc_enum(__NASMX_DECLSPEC_CALLCONV_DEFAULT__)
	%if %%__cc_enum > __NASMX_DECLSPEC_CC_ENUM_PASCAL__
		%assign %%__cc_prefix nx_declspec_cc_prefix(__NASMX_DECLSPEC_CALLCONV_DEFAULT__)
		%if %%__cc_prefix > 0
			%xdefine %[%1] _main
			%xdefine __nxsig@@_main  __NASMX_DECLSPEC_CALLCONV_CDECL__,0
		%else
			%xdefine %[%1] main
			%xdefine __nxsig@@main  __NASMX_DECLSPEC_CALLCONV_DEFAULT__,0
		%endif
	%else
		%xdefine %[%1] main
		%xdefine __nxsig@@main  __NASMX_DECLSPEC_CALLCONV_DEFAULT__,0
	%endif
	%xdefine __nxsig_declared_%[%1] global
	global %[%1]
%endmacro

;////////////////////////////////////////////////////////////////////////
;//
;// Internal macro used by invoke to detect argv addressing mode
;// The context variable %$__nx_argv_mode_indirect will be set to
;// the string index where '[' is found and is also used as a flag
;// indicating retrieve the variable contents, not it's address.
;// The context variable %$__nx_argv_mode_bp will be set to the
;// the string index where the sign ( + or - ) is found and will
;// be used as a flag indicating that argv mode is used.
%xdefine __NX_ARGV_MODE_SIGN_ADD__ 1
%xdefine __NX_ARGV_MODE_SIGN_SUB__ 2
%macro nx_analyze_argv_mode 1
	%assign %$__nx_argv_mode_bp 0
	%assign %$__nx_argv_mode_sign 0
	%assign %$__nx_castsize sizeof(size_t)
	nx_strchr %{1}, '['
	%assign %$__nx_argv_mode_indirect %$__nx_strchr_pos
	%if %$__nx_argv_mode_indirect == 0
		nx_strstr %{1}, __BP
		%if %$__nx_strstr_pos > 0
			;// assert: potentially loading variable address offset from reg bp
			;// quick check to help ensure that bp is a token
			%assign %$__nx_isalnum_bool 0
			%defstr %%__str %[%1]
			%if %$__nx_strstr_pos > 1
				%substr %%__sub %%__str %$__nx_strstr_pos-1, 1
				nx_isalnum %%__sub
			%endif
			%if %$__nx_isalnum_bool == 0
				%strlen %%__len %%__str
				%if %%__len > %$__nx_strchr_pos + 2
					%substr %%__sub %%__str %$__nx_strstr_pos+3, 1
					nx_isalnum %%__sub
				%endif
			%endif
			%if %$__nx_isalnum_bool == 0
				;// we must be given a positive or negative offset in order to 
				;// generate code for local variable addressing
				nx_strchr %{1}, '+'
				%if %$__nx_strchr_pos == 0
					nx_strchr %{1}, '-'
					%if %$__nx_strchr_pos > 0
						%assign %$__nx_argv_mode_sign __NX_ARGV_MODE_SIGN_SUB__
					%endif
				%else
					%assign %$__nx_argv_mode_sign __NX_ARGV_MODE_SIGN_ADD__
				%endif
				%assign %$__nx_argv_mode_bp %$__nx_strchr_pos
			%endif
			%substr %%__off %%__str %$__nx_argv_mode_bp+1, -1
			%deftok %$__nx_argv_mode_bp_offset %%__off
		%endif
	%elif %$__nx_argv_mode_indirect > 3
		;// check for cast ( eg: dword[rbp+4] )
		%defstr %%__str %[%1]
		%substr %%__sub %%__str 1, %$__nx_argv_mode_indirect-1
		%deftok %%__tok %%__sub
		%ifdef %[%%__tok]_size
			%assign %$__nx_castsize %[%%__tok]_size
		%endif
	%endif
%endmacro

%imacro INVOKE 1-100.nolist
	%ifndef NASMX_ENDPROC
		;// assert: we cannot check for context in case we are in a switch
		;// so we use nasmx_endproc
		%fatal 'invoke must be contained within proc/endproc directives.'
	%endif
	%ifndef __NX_LOCALS_PRESENT__
		;// require locals directive to ensure stack
		;// frame initialized properly prior to invoke.
		%fatal 'missing locals directive'
	%endif

	%push _NX_CTX_INVOKE
	%assign %$args 0
	%assign %$__nx_intargs 0           ;// init int args counter
	%assign %$__nx_floatargs 0         ;// init float args counter

	%assign %$__nx_bytecount (( __NASMX_ABI_BITS__ / 8 ) * ( %0 - 1 ))
	%ifdef __nxsig@@%[%1]
		nx_parse_tokens __nxsig@@%[%1]
		%assign %$__nx_callconv __nx_token_1
		%assign %%__bytecount __nx_token_2
		%if %%__bytecount > 0
			;// assert: only perform sig check on defined funcs with 1 or more
			;// params due to current import scheme and cdecl varargs.
			;// TODO: revisit this code when import includes are updated
			%if %%__bytecount != %$__nx_bytecount
				%error 'parameter count mismatch'
			%endif
		%endif

		%ifndef __nxsig_declared_%[%1]
			%ifndef __nxsig_defined_%[%1]
				EXTERN	%[%1]
				%xdefine __nxsig_declared_%[%1] extern
			%endif
		%endif
	%else
		%warning %1 declspec unknown (PROTO/IMPORT missing), assuming __declspec(DEFAULT)
		%assign %$__nx_callconv __NASMX_DECLSPEC_CALLCONV_DEFAULT__
	%endif

	%ifndef __NX_PROLOGUE_PRESENT__
		;// assert: leaf functions should not be making calls thus
		;// we have to set up a proper function prologue here to prevent
		;// a hung application.
		;// However, the program entry function main is also handled by this code when
		;// it is not defined using parameters and local vars as with the example code
		%define __NX_PROLOGUE_PRESENT__
		push __BP
		mov  __BP, __SP
	%endif

	%assign %%__nx_argrotate nx_declspec_cc_argrotate(%$__nx_callconv)
	%if %%__nx_argrotate > 0
		%assign %$__nx_argrotate 1
	%else
		%assign %$__nx_argrotate -1
	%endif
	%assign %$__nx_retpopsargs nx_declspec_cc_retpopsargs(%$__nx_callconv)
	%assign %%__cc_enum nx_declspec_cc_enum(%$__nx_callconv)
	%xdefine %$__nx_proc %1

	%if %%__cc_enum == __NASMX_DECLSPEC_CC_ENUM_FASTCALL__
		%if __NASMX_DECLSPEC_SYSTYPE_DEFAULT__ == __NASMX_DECLSPEC_SYSTYPE_WINDOWS__
			%assign %$__nx_stack_adjust 0
			%assign %$__nx_invoke_stack_adjust %$__nx_bytecount
			%ifdef __NX_CALLSTACK_ADJUST__
				%assign %$__nx_stack_adjust __NX_CALLSTACK_ADJUST__
				%if %$__nx_stack_adjust < %$__nx_bytecount
					%$__nx_stack_adjust = 0
					%warning insufficient callstack size for procedure %[%$__nx_proc], generating inefficient code...
				%else
					%assign %$__nx_invoke_stack_adjust 0
				%endif
			%endif
			%if %$__nx_invoke_stack_adjust > 0
				%if __BITS__ == 64
					%if %$__nx_invoke_stack_adjust < 32
						%assign %$__nx_invoke_stack_adjust 32
					%endif
				%endif
				%assign %%__align __NASMX_ABI_BITS__ / 4
				%assign %%__off (((%$__nx_invoke_stack_adjust + %%__align) / %%__align) * %%__align)
				%assign %%__tmp (%$__nx_invoke_stack_adjust + %%__align)
				%if (%%__off != %%__tmp)
					%assign %$__nx_invoke_stack_adjust %%__off
				%endif
				sub __SP, %$__nx_invoke_stack_adjust
			%endif

			;// the following variable is used as a flag to catch a very bad logic state
			;// in 64 bit code when using RAX as a paramater since RAX is used to spill
			;// parameters to the stack, potentially causing a very tough bug to find!
			%assign %%__reg_ax_used 0

			%assign %$__param_type_ctr 2    ; arg types follow cconv,bytecount
			%assign %$args 0
			%rep %0-1
				%rotate 1
				%assign %$__param_type_ctr %$__param_type_ctr + 1
				%ifdef __nx_token_%[%$__param_type_ctr]
					%assign %%__type __nx_token_%[%$__param_type_ctr]
					%assign %%__isfloat %%__type & 0x80
					%assign %%__param_size %%__type & 0x3F
				%else
					%assign %%__type sizeof(size_t)
					%assign %%__isfloat 0
					%assign %%__param_size sizeof(size_t)
				%endif

				;// set up internal vars used to determine if argv address mode used
				nx_analyze_argv_mode %1

				%if %$__nx_intargs < __NASMX_DECLSPEC_FASTCALL_MAXINTREGS__
					;// Windows fastcall uses one index for param count which
					;// indexes either int or float for purpose of preloading regs
					%if %%__isfloat == 0
						%substr %%__regstr __NASMX_DECLSPEC_FASTCALL_REGINTARGS_%[%$__nx_castsize]__ (%$__nx_intargs * 3 + 1), 3
						%deftok %$arg_cur %%__regstr
						%undef %%__regstr
						%ifnum %1
							%if %1 == -1
								or %$arg_cur, %1
							%elif %1 == 0
								xor %$arg_cur, %$arg_cur
							%else
								mov %$arg_cur, %1
							%endif
						%elifstr %1
							jmp %%endstr_%$args
							%%str_%$args: declare(NASMX_TCHAR) NASMX_TEXT(%1), 0
							%%endstr_%$args:
							lea %$arg_cur,[rel %%str_%$args]
						%else
							%if %$__nx_argv_mode_indirect > 0
								mov  %$arg_cur, %1
							%elif %$__nx_argv_mode_bp > 0
								mov  %$arg_cur, __BP
								%if %$__nx_argv_mode_sign == __NX_ARGV_MODE_SIGN_ADD__
									add %$arg_cur, %$__nx_argv_mode_bp_offset
								%elif %$__nx_argv_mode_sign == __NX_ARGV_MODE_SIGN_SUB__
									sub %$arg_cur, %$__nx_argv_mode_bp_offset
								%else
									%fatal Unknown addressing mode for %{1}
								%endif
							%elifnidni %$arg_cur, %1
								mov  %$arg_cur, %1
							%endif
						%endif
					%else
						;// assert: float param
						;// TODO: Be smarter with floats
						%if __BITS__ == 64
							%if   %$args == 0
								%xdefine %$arg_cur xmm0
							%elif %$args == 8
								%xdefine %$arg_cur xmm1
							%elif %$args == 16
								%xdefine %$arg_cur xmm2
							%else
								%xdefine %$arg_cur xmm3
							%endif
						%else
							%xdefine %$arg_cur __AX
							%assign %%__reg_ax_used 1
						%endif
						mov %$arg_cur, %1
					%endif
					;// Windows requires that we spill registers
					mov [__SP + %$args], %$arg_cur
					%undef %$arg_cur
					%assign %$__nx_intargs 1 + %$__nx_intargs
				%else
					;// assert: exhausted available registers
					%ifnum %1
						mov size_t [__SP + %$args], %{1}
					%elifstr %1
						jmp %%endstr_%$args
						%%str_%$args: declare(NASMX_TCHAR) NASMX_TEXT(%1), 0
						%%endstr_%$args:
						lea __AX,[rel %%str_%$args]
						mov [__SP + %$args], __AX
						%assign %%__reg_ax_used 1
					%else
						%if %$__nx_argv_mode_indirect > 0
							%if %$__nx_castsize < 4
								%xdefine %$arg_cur AX
							%elif %$__nx_castsize < 8
								%xdefine %$arg_cur EAX
							%else
								%xdefine %$arg_cur RAX
							%endif
							%assign %%__reg_ax_used 1
							mov %$arg_cur, %{1}
							mov [__SP + %$args], __AX
							%undef %$arg_cur
						%elif %$__nx_argv_mode_bp > 0
							%assign %%__reg_ax_used 1
							mov  __AX, __BP
							%if %$__nx_argv_mode_sign == __NX_ARGV_MODE_SIGN_ADD__
								add __AX, %$__nx_argv_mode_bp_offset
							%elif %$__nx_argv_mode_sign == __NX_ARGV_MODE_SIGN_SUB__
								sub __AX, %$__nx_argv_mode_bp_offset
							%else
								%fatal Unknown addressing mode for %{1}
							%endif
							mov [__SP + %$args], __AX
						%else
							%ifidni %1, __AX
								%if %%__reg_ax_used > 0
									%warning use of _AX as arg resulted in inconsistent logic state
								%endif
							%endif
							mov size_t [__SP + %$args], %{1}
						%endif
					%endif
				%endif
				%assign %$args %$args + sizeof(size_t)
			%endrep
			call	%$__nx_proc
			%if %$__nx_bytecount > 0
				%if %$__nx_stack_adjust == 0
					%if %$__nx_retpopsargs == 0
						add	__SP, %$__nx_invoke_stack_adjust
					%endif
				%endif
			%endif
		%else
			%error 'currently unsupported 64-bit INVOKE'
		%endif
	%else
		;// assert: assembling for 32-bit mode
		;// arg types follow cconv,bytecount when defined
		%if %$__nx_argrotate > 0
			%assign %$__param_type_ctr 2    
		%else
			%assign %$__param_type_ctr %0+1
		%endif

		;// the following variable is used as a flag to catch a very bad logic state
		;// when using __AX as a paramater since __AX is used internally to spill certain
		;// parameters to the stack, potentially causing a very tough bug to find!
		%assign %%__reg_ax_used 0

		%rep %0-1
			%rotate %$__nx_argrotate
			%assign %$__param_type_ctr %$__param_type_ctr + %$__nx_argrotate
			%ifdef __nx_token_%[%$__param_type_ctr]
				%assign %%__type __nx_token_%[%$__param_type_ctr]
				%assign %%__isfloat %%__type & 0x80
				%assign %%__param_size %%__type & 0x3F
			%else
				%assign %%__type sizeof(size_t)
				%assign %%__isfloat 0
				%assign %%__param_size sizeof(size_t)
			%endif

			;// set up internal vars used to determine if argv address mode used
			nx_analyze_argv_mode %{1}

			%ifstr	%1
				jmp	%%endstr_%$args
				%%str_%$args: declare(NASMX_TCHAR) NASMX_TEXT(%{1}), 0
				%%endstr_%$args:
				push size_t %%str_%$args
			%elifnum %1
				push size_t %1
			%elif %$__nx_argv_mode_indirect > 0
				push size_t %1
			%elif %$__nx_argv_mode_bp > 0
				%assign %%__reg_ax_used 1
				mov  __AX, __BP
				%if %$__nx_argv_mode_sign == __NX_ARGV_MODE_SIGN_ADD__
					add __AX, %$__nx_argv_mode_bp_offset
				%elif %$__nx_argv_mode_sign == __NX_ARGV_MODE_SIGN_SUB__
					sub __AX, %$__nx_argv_mode_bp_offset
				%else
					%fatal Unknown addressing mode for %{1}
				%endif
				push __AX
			%else
				%ifidni %1, __AX
					%if %%__reg_ax_used > 0
						%warning use of _AX as arg resulted in inconsistent logic state
					%endif
				%endif
				push size_t %1
			%endif
			%assign %$args %$args + __BITS__ / 8
		%endrep
		call	%$__nx_proc
		%if %$args > 0
			%if %$__nx_retpopsargs == 0
				add	__SP, %$args
			%endif
		%endif
	%endif

	;// cleanup global arg token defs
	%assign %%__ctr 1
	%rep 16
		%ifdef __nx_token_%[%%__ctr]
			%undef __nx_token_%[%%__ctr]
		%endif
		%assign %%__ctr %%__ctr + 1
	%endrep

	;// restore context stack
	%pop
%endmacro


;//////////////////////////////////////////////////////////////
;// MACRO PROC
;//
;// usage:
;//    PROC [CALLCONV,] funcname [ arg, arg, ...]
;//
;// examples:
;//    Using default calling convention:
;//       proc funcname, arg1, arg2
;//    Specifying calling convention:
;//       proc cdecl, fprintf
;//
;// notes:
;//   The calling convention, if specified, must match either
;//   the prototype or import specification.
;//   Also remember that, when invoked during a fastcall, the
;//   register parameters are not automatically spilled, only
;//   the space assigned on the stack is allocated.
;//   This allows the user to determine whether or not to use
;//   the spill area if needed.
;//
%imacro PROC 1-100.nolist
	%ifdef NASMX_ENDPROC
		%fatal 'missing endproc directive.'
	%endif
	%push __NX_CTX_PROC__
	%assign %$__nx_locnt 0             ;// init locals offset
	%assign %$__nx_arg_bias 0          ;// init 64-bit bias
	%assign %$__nx_uses_stack_adjust 0 ;// init regs used save area
	%assign %$__nx_intargs 0           ;// init int args counter
	%assign %$__nx_floatargs 0         ;// init float args counter
	%assign %$__nx_uses_count 0        ;// init regs used counter
	%assign %$__nx_argcount 0          ;// init proc args counter
	%assign %$__nx_bytecount 0         ;// init total args byte count
	%assign %$__nx_protobytecount -1
	%ifndef __NASMX_DECLSPEC_CALLCONV_%[%1]__
		;// check for prototyped func
		%ifdef __nxsig@@%[%1]
			nx_parse_tokens __nxsig@@%[%1]
			%assign %$__nx_callconv __nx_token_1
			%assign %$__nx_protobytecount __nx_token_2
		%else
			%assign %$__nx_callconv __NASMX_DECLSPEC_CALLCONV_DEFAULT__
		%endif
		%define %$__nx_proc %1
		%assign %$__nx_repcnt %0-1
	%else
		%if %0 < 2
			%fatal 'usage: PROC [CALLCONV, ] FUNCNAME [,ARG1,ARG2,...]'
		%endif
		%assign %$__nx_callconv __NASMX_DECLSPEC_CALLCONV_%[%1]__
		%define %$__nx_proc %2
		%assign %$__nx_repcnt %0-2
		;// check for prototyped func
		%ifdef __nxsig@@%[%2]
			nx_parse_tokens __nxsig@@%[%2]
			%if %$__nx_callconv != __nx_token_1
				%fatal calling convention mismatch for %$__nx_proc
			%endif
			%assign %$__nx_protobytecount __nx_token_2
		%endif
	%endif
	%assign %$__nx_bytecount %$__nx_repcnt * sizeof(size_t)
	%assign %$__nx_cc_enum nx_declspec_cc_enum(%[%$__nx_callconv])
	%ifidn __BITS__,64
		%assign %$__nx_argv 16
		%ifnidni __OUTPUT_FORMAT__,win64
			%if %$__nx_cc_enum == __NASMX_DECLSPEC_CC_ENUM_FASTCALL__
				;// assert: create Linux spill area based on param count.
				;// This may result in slightly wasted stack space but is
				;// required to avoid alignment issues for params that
				;//  exceed allocated registers.
				%assign %$__nx_arg_bias 8 * %$__nx_repcnt
			%endif
		%endif
	%else
		%assign %$__nx_argv 8
	%endif

	%ifndef %[%$__nx_proc]
		;// assert: we must generate an appropriate label for the function call
		;// here in order for the parameters to be equated properly
		%ifndef __nxsig@@%[%$__nx_proc]
			;// assert: build the parameter type list here as the procedure has
			;// not been prototyped or imported.
			;// The signature must be defined in full before use because once the
			;// procedure has been defined we are not able to easily redefine it.
			;// Thus the rep loop is required twice:
			;//     First, to build the parameter type list
			;//     Then, later on, to build the parameter offset equates.
			%ifdef __nx_proto_param_list
				%undef __nx_proto_param_list
			%endif
			%rep %0-%$__nx_repcnt
				%rotate 1
			%endrep
			%rep %$__nx_repcnt
				nx_strtok %1, ' '
				%xdefine __nx_proto_argtype %$__nx_token %+ _type
				%ifndef __nx_proto_param_list
					%defstr __nx_proto_param_list __nx_proto_argtype
				%else
					%defstr __nx_proto_argstr __nx_proto_argtype
					%strcat __nx_proto_param_list __nx_proto_param_list,',',__nx_proto_argstr
					%undef __nx_proto_argstr
				%endif
				%undef __nx_proto_argtype
				%rotate 1
			%endrep
			nx_callconv_decorate %$__nx_callconv,%$__nx_proc,%$__nx_bytecount
			%ifdef __nx_proto_param_list
				%deftok __nx_proto_params __nx_proto_param_list
				%xdefine __nxsig@@%[%$__nxtok_decorated_name] %[%$__nx_callconv],%[%$__nx_bytecount],__nx_proto_params
			%else
				%xdefine __nxsig@@%[%$__nxtok_decorated_name] %[%$__nx_callconv],%[%$__nx_bytecount]
			%endif
			%ifnidn %$__nx_proc,%$__nxtok_decorated_name
				%xdefine %[%$__nx_proc] %[%$__nxtok_decorated_name]
			%endif
		%endif
	%endif
	%ifdef __nxsig_defined_%[%$__nx_proc]
		%fatal procedure %[%$__nx_proc] already defined
	%endif
	%xdefine __nxsig_defined_%[%$__nx_proc]
	%[%$__nx_proc]:

	;// The following define can/should be used by the user to properly
	;// return from a function ( ie: jmp NASMX_ENDPROC ) or via use of
	;// the RETURN macro
	%xdefine NASMX_ENDPROC __nx_endproc@@%[%$__nx_proc]

	%if %$__nx_cc_enum != __NASMX_DECLSPEC_CC_ENUM_NAKED__
		;// assert: calc byte count for sig check and argv() offsets
		;// we must reverse arg push logic to get correct results
		%assign %$__nx_bytecount 0
		%assign %$__cc_argrotate nx_declspec_cc_argrotate(%[%$__nx_callconv])
		%if %$__cc_argrotate != 0
			%assign %$__nx_argrotate -1
			%rotate -1
		%else
			%assign %$__nx_argrotate 1
			%rep %0-%$__nx_repcnt
				%rotate 1
			%endrep
		%endif
		%rep %$__nx_repcnt
			;// obtain param type and size and validate against current ABI
			nx_strtok %1, ' '
			%assign %%__isfloat is_typeof_float(%[%$__nx_token])
			%assign %%__bytes %[%$__nx_token]_size
			nx_strtok 0, ' '
			%if %%__bytes > sizeof(size_t)
				%fatal parameter %[%$__nx_token] exceeds native size of __NASMX_ABI_BITS__ bits
			%endif
			%if %%__bytes < sizeof(size_t)
				%assign %%__bytes sizeof(size_t)
			%endif
			%assign %$__nx_bytecount %$__nx_bytecount + %%__bytes

			%ifidn __BITS__,64
				%if %%__isfloat == 0
					%assign %$__nx_intargs 1 + %$__nx_intargs
				%else
					%assign %$__nx_floatargs 1 + %$__nx_floatargs
				%endif
				%if %$__nx_cc_enum == __NASMX_DECLSPEC_CC_ENUM_FASTCALL__
					%if __NASMX_DECLSPEC_SYSTYPE_DEFAULT__ == __NASMX_DECLSPEC_SYSTYPE_WINDOWS__
						;// assert: Windows 64-bit register spill area
						;// located above return address, thus bias
						;// not affected
						.%[%$__nx_token] EQU %[%$__nx_argv]
						%assign %$__nx_argv 8 + %$__nx_argv
					%else
						;// assert: Linux 64-bit register spill area
						;// located below frame pointer thus we must
						;// account for bias of args from frame while
						;// accounting for param types supplied
						%if %%__isfloat == 0
							%if %$__nx_intargs > __NASMX_DECLSPEC_FASTCALL_MAXINTREGS__
								.%[%$__nx_token] EQU %[%$__nx_argv]
								%assign %$__nx_argv 8 + %$__nx_argv
							%else
								.%[%$__nx_token] EQU %[%$__nx_locnt] - %[%$__nx_arg_bias]
								%assign %$__nx_locnt 8 + %$__nx_locnt
							%endif
						%else
							%if %$__nx_floatargs > __NASMX_DECLSPEC_FASTCALL_MAXFLOATREGS__
								.%[%$__nx_token] EQU %[%$__nx_argv]
								%assign %$__nx_argv 8 + %$__nx_argv
							%else
								.%[%$__nx_token] EQU %[%$__nx_locnt] - %[%$__nx_arg_bias]
								%assign %$__nx_locnt 8 + %$__nx_locnt
							%endif
						%endif
					%endif
				%else
					.%[%$__nx_token] EQU %[%$__nx_argv]
					%assign %$__nx_argv %$__nx_argv + %%__bytes
				%endif
			%else
				.%[%$__nx_token] EQU %[%$__nx_argv]
				%assign %$__nx_argv %$__nx_argv + %%__bytes
			%endif
			%rotate %$__nx_argrotate
		%endrep

		%if %$__nx_protobytecount >= 0
			%if %$__nx_bytecount != %$__nx_protobytecount
				;// unfortunately we must check callconv for cdecl on win32
				;// and fastcall on win64 as currently the import files do
				;// not contain bytecounts to verify against.
				;// TODO: When import files are updated in the future we can
				;// revisit this code.
				%ifidni __OUTPUT_FORMAT__,win32
					%if %$__nx_cc_enum != __NASMX_DECLSPEC_CC_ENUM_CDECL__
						%warning prototype arg mismatch for %$__nx_proc
					%endif
				%elifidni __OUTPUT_FORMAT__,win64
					%if %$__nx_cc_enum != __NASMX_DECLSPEC_CC_ENUM_FASTCALL__
						%warning prototype arg mismatch for %$__nx_proc
					%endif
				%else
					%warning prototype arg mismatch for %$__nx_proc
				%endif
			%endif
		%endif

		%if %$__nx_bytecount > 0
			%define __NX_PROLOGUE_PRESENT__
			push __BP
			mov  __BP, __SP
		%endif
	%endif
%endmacro


;//////////////////////////////////////////////////////////////
;// MACRO USES
;//
;// usage:
;//    USES reg [,reg ,reg, ...]
;//
;// examples:
;//    USES rbx, r15
;//
;// notes:
;//    This macro can only be used within the proc prologue
;//    Fatals are used rather than errors as this macro is
;//    extremely critical to proper function definition and
;//    stack alignment if used.
;//
%imacro USES 1-8.nolist
	%ifndef NASMX_ENDPROC
		%fatal 'missing proc directive.'
	%endif
	%ifnctx __NX_CTX_PROC__
		%fatal 'current context unknown.'
	%endif
	%ifdef __NX_LOCALS_PRESENT__
		%fatal 'uses directive must come before locals directive.'
	%endif
	%ifdef __NX_USES_PRESENT__
		%fatal 'uses directive previously set for this procedure.'
	%endif
	%define __NX_USES_PRESENT__
	%ifndef __NX_PROLOGUE_PRESENT__
		;// assert: at this point we have absolutely no way of knowing whether
		;// the function will contain locals or not; thus, using this macro
		;// forces our hand and requires us to set up the function prologue
		%define __NX_PROLOGUE_PRESENT__
		push __BP
		mov  __BP, __SP
	%endif
	%assign %%__sys_size (sizeof(size_t) * 8)
	;// keep stack aligned
	%assign %%__align __NASMX_ABI_BITS__ / 4
	%assign %$__nx_uses_stack_adjust (sizeof(size_t) * %0)
	%assign %%__off (((%$__nx_uses_stack_adjust + %%__align) / %%__align) * %%__align)
	%assign %%__tmp (%$__nx_uses_stack_adjust + %%__align)
	%if (%%__off != %%__tmp)
		%assign %$__nx_uses_stack_adjust %%__off
	%endif

	%rep %0
		%ifndef %[%1]_size
			%fatal unknown register: %1
		%endif
		%assign %%__reg_size %[%1]_size
		%if %%__reg_size < sizeof(size_t)
			%fatal extended version of register %1 required for %%__sys_size bit mode
		%elif %%__reg_size > sizeof(size_t)
			%fatal %1 not available in %%__sys_size bit mode
		%endif
		;// assert: use mov rather than push to defer sub rsp,xxx
		%assign %%__off (%$__nx_uses_stack_adjust + %$__nx_arg_bias - (sizeof(size_t) * %$__nx_uses_count))
		mov  __nx_error_token_size_%[%%__reg_size] [__BP - %%__off], %[%1]
		%assign %$__nx_uses_count 1 + %$__nx_uses_count
		%xdefine __nx_uses_reg_%[%$__nx_uses_count] %[%1]
		%rotate 1
	%endrep
%endmacro


;//////////////////////////////////////////////////////////////
;// MACRO LOCALS
;//
;// usage:
;//    locals [none | xxx]
;// where
;//    none - allows us to avoid using stackframe if user
;//           writing a small leaf function or will handle
;//           function prologue separately.  Also indicates
;//           that endlocals directive not required.
;//
;// notes:
;//    This macro can only be used within the proc prologue
;//    and must precede any assembly code. Invoke checks to
;//    verify that this macro was called to ensure that the
;//    prologue was initialized properly.
;//
%imacro LOCALS 0-8.nolist
	%ifndef NASMX_ENDPROC
		%error 'missing proc directive.'
	%endif
	%ifndef __NX_LOCALS_PRESENT__
		%define __NX_LOCALS_PRESENT__
	%endif
	%if %0 == 1
		%ifidni %1,none
			%define __NX_LOCALS_NONE__
		%else
			%warning unknown locals directive: %1
		%endif
	%endif
	%assign %$__nx_locnt 0
	%ifdef __NX_CALLSTACK_ADJUST__
		%assign %$__nx_stack_adjust __NX_CALLSTACK_ADJUST__
	%else
		%assign %$__nx_stack_adjust 0
	%endif
	%ifdef __NX_LOCALS_NONE__
		%assign %%__adjust %$__nx_stack_adjust + %$__nx_arg_bias + %$__nx_uses_stack_adjust
		%if %%__adjust > 0
			%ifndef __NX_PROLOGUE_PRESENT__
				%define __NX_PROLOGUE_PRESENT__
				push __BP
				mov  __BP, __SP
			%endif
			sub  __SP, %%__adjust
		%endif
	%endif
%endmacro


%imacro LOCAL 2-3.nolist 1
	%ifndef __NX_LOCALS_PRESENT__
		%error 'missing locals directive.'
	%endif
	%ifdef __NX_LOCALS_NONE__
		%error 'conflicts with locals directive: none'
	%endif
	%ifndef %[%2]_size
		%error %1 unknown size: %2
	%endif
	;// maintain natural size_t boundary alignment
	%assign %%__size %[%2]_size
	%assign %$__nx_locnt %$__nx_locnt + %%__size * %3
	%assign %%__size sizeof(size_t)
	%assign %%__off (((%$__nx_locnt + %%__size) / %%__size) * %%__size)
	%assign %%__tmp (%$__nx_locnt + %%__size)
	%if (%%__off != %%__tmp)
		%assign %$__nx_locnt %%__off
	%endif
	.%[%1] EQU %$__nx_arg_bias + %$__nx_uses_stack_adjust + %$__nx_locnt
%endmacro


%imacro ENDLOCALS 0.nolist
	%ifndef __NX_LOCALS_PRESENT__
		%error 'missing locals directive.'
	%endif
	%ifndef __NX_LOCALS_NONE__
		%if %$__nx_locnt > 0
			;// keep stack aligned
			%assign %%__align __NASMX_ABI_BITS__ / 4
			%assign %%__off (((%$__nx_locnt + %%__align) / %%__align) * %%__align)
			%assign %%__tmp (%$__nx_locnt + %%__align)
			%if (%%__off != %%__tmp)
				%assign %$__nx_locnt %%__off
			%endif
		%endif

		%assign %%__adjust %$__nx_arg_bias + %$__nx_uses_stack_adjust + %$__nx_locnt + %$__nx_stack_adjust
		%if %%__adjust > 0
			%ifndef __NX_PROLOGUE_PRESENT__
				%define __NX_PROLOGUE_PRESENT__
				push __BP
				mov  __BP, __SP
			%endif
			sub  __SP, %%__adjust
		%endif
	%endif
%endmacro


%ifidn __BITS__,64
	%idefine argv(v) rbp + v
	%idefine  var(v) rbp - v
%else
	%idefine argv(v) ebp + v
	%idefine  var(v) ebp - v
%endif

%idefine OFFSET

%imacro RETURN 0-1.nolist
	%if %0 > 0
		%ifnum %1
			%if %1 == -1
				or __AX, %1
			%elif %1 == 0
				xor __AX, __AX
			%else
				mov __AX, %1
			%endif
		%else
			%ifnidni %1, __AX
				mov __AX, %[%1]
			%endif
		%endif
	%endif
	jmp  NASMX_ENDPROC
%endmacro

%imacro LEAVE 0.nolist
	%ifndef __NX_LEAVE_PRESENT__
		%define __NX_LEAVE_PRESENT__
		%ifdef NASMX_ENDPROC
			%ifdef __NX_CALLSTACK_ADJUST__
				%assign %$__nx_stack_adjust __NX_CALLSTACK_ADJUST__
			%else
				%assign %$__nx_stack_adjust 0
			%endif
			%ifdef __NX_LOCALS_PRESENT__
				%assign %%__adjust %$__nx_locnt + %$__nx_stack_adjust
				%if  %%__adjust > 0
					add __SP, %%__adjust
				%endif
			%endif
			%ifdef __NX_USES_PRESENT__
				%assign %%__nx_reg 1
				%rep %$__nx_uses_count
					pop __nx_uses_reg_%[%%__nx_reg]
					%undef __nx_uses_reg_%[%%__nx_reg]
					%assign %%__nx_reg %%__nx_reg + 1
				%endrep
			%endif
		%endif
		%ifdef __NX_PROLOGUE_PRESENT__
			mov __SP, __BP
			pop __BP
		%endif
	%endif
%endmacro

%imacro RET 0-1.nolist
	%ifdef NASMX_ENDPROC
		%ifndef __NX_LEAVE_PRESENT__
			leave
		%endif
		%define __NX_RETURN_PRESENT__
	%endif

	%if %0 == 1
		%ifnum %1
			%if %1 > 0
				ret %1
			%else
				ret
			%endif
		%elifid %1
			%if %[%1] > 0
				ret %[%1]
			%else
				ret
			%endif
		%else
			%warning 'invalid operand supplied to ret opcode'
			ret
		%endif
	%else
		ret
	%endif
%endmacro

%imacro ENDPROC 0.nolist
	%ifndef NASMX_ENDPROC
		%fatal 'missing proc directive.'
	%endif

	;// provide a proc end jmp label
	%[NASMX_ENDPROC]:

	;// assert: we can not be certain at what context level we are at,
	;// thus we pop all contexts until we get to __NX_CTX_PROC__
	%rep 32
		%ifctx __NX_CTX_PROC__
			%exitrep
		%endif
		%pop
	%endrep

	%ifndef __NX_RETURN_PRESENT__
		%assign %%__cc_retpopsargs nx_declspec_cc_retpopsargs(%$__nx_callconv)
		%if %%__cc_retpopsargs == 0
			ret
		%else
			%if %$__nx_bytecount > 0
				ret %$__nx_bytecount
			%else
				ret
			%endif
		%endif
	%endif
	%pop
	%undef NASMX_ENDPROC
	%ifdef __NX_LEAVE_PRESENT__
		%undef __NX_LEAVE_PRESENT__
	%endif
	%ifdef __NX_RETURN_PRESENT__
		%undef __NX_RETURN_PRESENT__
	%endif
	%ifdef __NX_USES_PRESENT__
		%undef __NX_USES_PRESENT__
	%endif
	%ifdef __NX_LOCALS_PRESENT__
		%undef __NX_LOCALS_PRESENT__
	%endif
	%ifdef __NX_LOCALS_NONE__
		%undef __NX_LOCALS_NONE__
	%endif
	%ifdef __NX_PROLOGUE_PRESENT__
		%undef __NX_PROLOGUE_PRESENT__
	%endif
	%ifdef __NASMX_ARG_BIAS__
		%undef __NASMX_ARG_BIAS__
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
		cmp __DX, %1
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

;// The following is used to wrap test code when debugging
;%define __NX_DEBUG__  ;;//// * * * BEGIN NASMX DEBUG FRAME * * * ///////////////
%ifdef __NX_DEBUG__

%xdefine __NX_DEBUG_SOURCE_LINE_START__ __LINE__

;;// * * PLACE TEST CODE HERE * *

%xdefine __NX_DEBUG_SOURCE_LINE_END__ __LINE__
%ifndef __NX_DEBUG_SOURCE_LINE_START__
   %fatal NXDEBUG: BREAK line: __LINE__ section(????,__NX_DEBUG_SOURCE_LINE_END__) __NX_DEBUG_SOURCE_LINE_START__ undefined!
%endif
%assign __NX_DEBUG_SOURCE_LINE_COUNT__ __NX_DEBUG_SOURCE_LINE_END__ - __NX_DEBUG_SOURCE_LINE_START__
%fatal NXDEBUG: BREAK line: __LINE__ section(__NX_DEBUG_SOURCE_LINE_START__,__NX_DEBUG_SOURCE_LINE_END__) __NX_DEBUG_SOURCE_LINE_COUNT__ lines
%endif  ;;///////////////// * * * END NASMX DEBUG FRAME * * * /////////////////

%endif	; ifndef __NASMX_INCLUDED__
