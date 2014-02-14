;##### Include Files #####
%include "../../../inc/xbox/kernel.inc"
%include "../../../inc/xbox/xbe.inc"

;##### XBOX Kernel Imports #####
IMPORT	KeTickCount
IMPORT	HalReturnToFirmware

;##### XBOX Program Entry Point #####
XBE_START

	;#### Fill the Screen with GREEN!!! ####
	mov	eax,0x0000FF00
	mov	ebx,VIDEO_MEMORY
	mov	ecx,VIDEO_LIMIT
.fill:
	mov	DWORD[ebx],eax
	add	ebx,4
	cmp	ebx,ecx
	jl	.fill

	;#### Wait 5 seconds... ####
	mov	ebx,DWORD[KeTickCount]
	mov	ecx,DWORD[ebx]
	add	ecx,5000
.waitloop:
	cmp	DWORD[ebx],ecx
	jl	.waitloop

	;#### Return to the Dashboard ####
	push	DWORD	0x02
	call	[HalReturnToFirmware]
	add	esp,4
jmp $

;##### End of XBOX Program #####
XBE_END
