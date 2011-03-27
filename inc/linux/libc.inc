;*****************************
;***** The NASMX Project *****
;*****************************

%ifndef __LIBC_INC__
%define __LIBC_INC__

IMPORT puts
IMPORT exit
IMPORT printf

STDIN_FILENO	EQU	0	; Standard input stream.
STDOUT_FILENO	EQU	1	; Standard output stream.
STDERR_FILENO	EQU	2	; Standard error output stream.

EOF		EQU	-1	; End of file character.
SEEK_SET	EQU	0	; Seek from beginning of file.
SEEK_CUR	EQU	1	; Seek from current position.
SEEK_END	EQU	2	; Seek from end of file.

%endif
