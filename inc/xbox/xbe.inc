[BITS 32]
ORG 0x00010000

;##### Include File Check #####
%ifndef	__XBE_INC__
%define	__XBE_INC__

;##### Static Sizes #####
%define	__XBE_IMAGE_SIZE__	(__XBE_END__-0x00010000)
%define __XBE_CODE_SIZE__	(__XBE_IMAGE_SIZE__-0x00002000)
%assign __XBE_THUNK_COUNT__	0

;##### XBE Image Header #####
DB	'XBEH'			;XBOX/XBE "Magic"
TIMES 256 DB 0			;Digital Signature
DD	0x00010000		;Base Address
DD	0x396			;Size of Headers
DD	__XBE_IMAGE_SIZE__	;Size of Image
DD	0x0178			;Size of Image Header
DD	0			;TimeDate
DD	0x00010178		;Certificate Address
DD	1			;Number of Sections
DD	0x00010354		;Section Headers Address
DD	0			;Initialization Flags
%ifdef XBOX_DEBUG
DD	0x9484BD4B		;Entry Point (Debug)
%else
DD	0xA8FD77AB		;Entry Point (Retail)
%endif
DD	__XBE_TLS__		;TLS Address
TIMES 7 DD 0			;PE Info (junk)
DD	0x001001D4		;Debug PathName Address
DD	0x001001D4		;Debug FileName Address
DD	0x001001D4		;Debug Unicode FileName Address
%ifdef XBOX_DEBUG
DD	0xEFB0E152		;Kernel Image Thunk Address (Debug)
%else
DD	0x5B6C50B6		;Kernel Image Thunk Address (Retail)
%endif
DD	0			;Non-Kernel Import Directory Address
DD	0			;Number of Library Versions
DD	0			;Library Versions Address
DD	3			;Kernel Library Version Address
DD	0			;XAPI Library Version Address
DD	0			;Logo Bitmap Address
DD	0			;Logo Bitmap Size
TIMES 0x178-($-$$) DB 0


;##### XBE Certificate #####
DD	0x01DC		;Size of Certificate
DD	0		;TimeDate
DD	0		;Title ID
TIMES 80 DB 0		;Title Name
TIMES 64 DB 0		;Alternate Title IDs
DD	0		;Allowed Media
DD	0		;Game Region
DD	0		;Game Ratings
DD	0		;Disk Number
DD	0		;Certificate Version
TIMES 16 DB 0		;LAN Key
TIMES 16 DB 0		;Signature Key
TIMES 256 DB 0		;Alternate Signature Key
TIMES 0x354-($-$$) DB 0


;##### XBE Section Headers #####
DD	0x00000007		;Section Flags
DD	0x00011000		;Virtual Address
DD	__XBE_CODE_SIZE__	;Virtual Size
DD	0x00001000		;Raw Address
DD	__XBE_CODE_SIZE__	;Raw Size
DD	0x0001038F		;Section Name Address
DD	0			;Section Name Reference Count
DD	0x000101D4		;Head Shared Page Reference Count Address
DD	0x000101D4		;Tail Shared Page Reference Count Address
TIMES 20 DB 0			;Section Digest
DB	0,0,0,'.text'		;Section Name
TIMES 0x1000-($-$$) DB 0

%imacro IMPORT	1
	%ifndef	__XBE_START__
		%ifnnum %1
			%ifndef	__imp_%1 %1
				%if __XBE_THUNK_COUNT__ < 365
					%ifdef __kticall_defined_%1
						%define __imp_%1 %1
						DD	__kticall_defined_%1
						%assign %1 0x00011000 + (__XBE_THUNK_COUNT__ * 4)
						%assign	__XBE_THUNK_COUNT__ __XBE_THUNK_COUNT__+1
					%else
						%error	Undefined XBOX Kernel Import (%1)
					%endif
				%else
					%error Too many XBOX Kernel Imports...
				%endif
			%else
				%error XBOX Kernel Import, %1, already defined...
			%endif
		%else
			%error Duplicate XBOX Kernel Import...
		%endif
	%else
		%error XBOX Kernel Imports must be before "XBE_START"...
	%endif
%endmacro

%macro	XBE_START 0
	align	4096, DB 0
	%ifndef	__defined_XBE_START__
		__XBE_START__:
		%define	__defined_XBE_START__
	%else
		%error Start of XBE has already been defined...
	%endif

%endmacro

%macro	XBE_END 0
	%ifdef	__defined_XBE_START__
		%ifndef __defined_XBE_END__
			align 4096, DB 0
			__XBE_TLS__:
			TIMES 10 DB 0
			align 4096, DB 0
			__XBE_END__:
			%define __defined_XBE_END__
		%else
			%error End of XBE has already been defined...
		%endif
	%else
		%error Start of XBE must be defined first...
	%endif
%endmacro

;##### End of Include File Check #####
%endif
