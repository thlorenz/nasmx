;////////////////////////////////////////////////////////////////
;// demo5.asm
;//
;// Copyright (C)2005-2013 The NASMX Project
;//
;// Purpose:
;//    This program demonstrates bit manipulation and
;//    invoking our own external function.
;//
;// Contributors:
;//    Bryant Keller
;//    Rob Neff
;//
;//

;////////////////////////////////////////////////////////////////
; INCLUDES
; Make sure nasm can locate the NASMX include files by using
; either the NASMENV environment variable or editing the
; Makefile.
;
%include 'nasmx.inc'
%include 'linux/libc.inc'
%include 'ddtostr.inc'  ;// our project defines


;////////////////////////////////////////////////////////////////
; IMPORTS
;
; import our own external function definition
import ddtostr, dword ddvar, ptrdiff_t strbuf, dword radix


;////////////////////////////////////////////////////////////////
; DEFINES

%define DEMO_BUF_SIZE 18


;////////////////////////////////////////////////////////////////
SECTION .data

strBitFormat DB 'EAX: %s', 10, 0


;////////////////////////////////////////////////////////////////
SECTION .bss

strBuffer RESB DEMO_BUF_SIZE


;////////////////////////////////////////////////////////////////
SECTION .text

ENTRY demo5

;////////////////////////////////////////////////////////////////
; FUNCTION
;       void clear_buffer( void )
;
; DESCRIPTION
;       Simple function to clear our string buffer
;
; ARGS
;       none
;
; RETURNS
;       void
;
proc   clear_buffer
locals none

	mov  ecx, DEMO_BUF_SIZE
	mov  edi, dword strBuffer
	xor  eax, eax
.clear:
	stosb
	dec  ecx
	jnz  .clear
endproc


;////////////////////////////////////////////////////////////////
; FUNCTION
;       int demo5( void )
;
; DESCRIPTION
;       The program's main() entry point
;
; ARGS
;       none
;
; RETURNS
;       zero if success, otherwise error
;
proc   demo5
locals none

	;// AND two values
	invoke clear_buffer
	mov  eax, 01001100b
	mov  ecx, 00101101b
	and  eax, ecx
	invoke ddtostr, eax, strBuffer, DTOS_BINARY
	invoke printf, strBitFormat, strBuffer

	;// OR two values
	invoke clear_buffer
	mov  eax, 01001100b
	mov  ecx, 00101101b
	or   eax, ecx
	invoke ddtostr, eax, strBuffer, DTOS_BINARY
	invoke printf, strBitFormat, strBuffer

	;// XOR two values
	invoke clear_buffer
	mov  eax, 01001100b
	mov  ecx, 00101101b
	xor  eax, ecx
	invoke ddtostr, eax, strBuffer, DTOS_BINARY
	invoke printf, strBitFormat, strBuffer

	;// NOT a value
	invoke clear_buffer
	mov  eax, 01001100b
	not  eax
	invoke ddtostr, eax, strBuffer, DTOS_BINARY
	invoke printf, strBitFormat, strBuffer

	;// use XOR to show zero
	invoke clear_buffer
	xor  eax, eax
	invoke ddtostr, eax, strBuffer, DTOS_BINARY
	invoke printf, strBitFormat, strBuffer

	xor    eax, eax
	invoke exit

endproc
