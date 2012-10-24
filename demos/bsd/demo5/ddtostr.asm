;////////////////////////////////////////////////////////////////
;// DDTOSTR.ASM
;//
;// Copyright (C)2005-2012 The NASMX Project
;//
;// Purpose:
;//    This routine coverts a dword value to
;//    a string in either binary, hex, or
;//    decimal notation.
;//
;// Contributors:
;//    Bryant Keller
;//    Rob Neff
;//

;////////////////////////////////////////////////////////////////
; INCLUDES
;
%include 'nasmx.inc'
%include 'ddtostr.inc'


;////////////////////////////////////////////////////////////////
; PROTOTYPES
proto ddtostr, dword ddvar, ptrdiff_t strbuf, dword radix 


;////////////////////////////////////////////////////////////////
SECTION .text


;////////////////////////////////////////////////////////////////
; FUNCTION
;	int ddtostr( int val, char* strbuf, unsigned int radix )
;
; DESCRIPTION
;	Output a radix formatted string
;
; ARGS
;	val    - value to convert
;	strbuf - buffer to contain string output
;	radix  - radix to use for conversion
;
; RETURNS
;	zero if success, otherwise error
;
proc   ddtostr, int32_t val, ptrdiff_t strbuf, uint32_t radix
uses   ebx
locals none

	;// load registers from parameters
	mov  edx, [argv(.val)]
	mov  edi, [argv(.strbuf)]
	mov  ecx, [argv(.radix)]

	;// test for null pointer
	cmp  edi, 0
	jne  .have_ptr

	;// someone passed a null ptr!
	return -1

.have_ptr:
	cmp  ecx, DTOS_BIN
	je   .binary

	cmp  ecx, DTOS_DEC
	je .decimal

	cmp  ecx, DTOS_HEX
	je   .hex
		
	;// invalid radix error
	return -1

.binary:
	;// binary string
	or   edx, edx
	jnz  .bin_ok

	mov  eax, '0'
	stosb
	xor  eax, eax  ;// nul-terminator and ret code
	stosb
	return

.bin_ok:
	xor  ecx, ecx
	mov  ecx, 32

.rep_bin:
	dec  ecx
	shl  edx, 1
	jnc  .rep_bin

	shr  edx, 1
	or   edx, 80000000h

.next_bit:
	shl  edx, 1
	mov  al, '0'
	adc  al, 0
	stosb
	dec  ecx
	jge  .next_bit

	xor  eax, eax  ;// nul-terminator and ret code
	stosb
	return
		
.decimal:
	;;; decimal string.
	or   edx, edx
	jnz  .not_zero

	mov  eax, '0'
	stosb
	xor  eax, eax  ;// nul-terminator and ret code
	stosb
	return

.not_zero:
	jns  .positive
	mov  eax, '-'
	stosb
	neg  edx

.positive:
	mov  eax, edx
	mov  ebx, 10
	xor  ecx, ecx

.scan_dec:
	xor  edx, edx
	div  ebx
	push edx
	inc  ecx
	or   eax, eax
	jnz  .scan_dec

.fill_dec:
	pop  edx
	add  dl, 30h
	mov  byte [edi], dl
	inc  edi
	loop .fill_dec
	return 0
		
.hex:
	;;; hexadecimal string.
	mov  ecx, 9

.scanner:
	rol  edx, 4
	mov  eax, edx
	and  eax, 0x0F
	add  eax, '0'
	cmp  eax, '9'
	jng  .skip

	add  eax, 'A' - '9' - 1
.skip:
	stosb
	dec  ecx
	jnz  .scanner
	dec  edi
	xor  eax, eax  ;// nul-terminator and ret code
	stosb
endproc

