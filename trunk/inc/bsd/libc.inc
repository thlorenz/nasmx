;*****************************
;***** The NASMX Project *****
;*****************************

%ifndef __NASMX_LIBC_INC__
%define __NASMX_LIBC_INC__

IMPORT puts
IMPORT exit
IMPORT printf

%define STDIN_FILENO	0	; Standard input stream.
%define STDOUT_FILENO	1	; Standard output stream.
%define STDERR_FILENO	2	; Standard error output stream.

%define EOF		-1	; End of file character.
%define SEEK_SET	0	; Seek from beginning of file.
%define SEEK_CUR	1	; Seek from current position.
%define SEEK_END	2	; Seek from end of file.

%endif

