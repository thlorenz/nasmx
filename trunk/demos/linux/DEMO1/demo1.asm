;##### Include Files #####
%include '../../../inc/nasmx.inc'
%include '../../../inc/linux/libc.inc'
%include '../../../inc/linux/syscall.inc'

entry	demo1

;##### Initialized Data #####
[section .data]
msg		DB	"Hello, World!!!",10,0
msglen		equ	($ - msg)

;##### Program Entrypoint #####
[section .text]
proc   demo1
locals none

	;#### SYSCALL Write Message to the Console ####
	syscall	write, STDOUT_FILENO, msg, msglen

	;#### Exit with NULL Return Value ####
	xor	eax,eax

endproc
