%include '..\..\..\inc\nasmx.inc'
%include '..\..\..\inc\win32\windows.inc'
%include '..\..\..\inc\win32\kernel32.inc'
%include '..\..\..\inc\win32\user32.inc'

entry	Demo9B

import	Say

[section .text]
proc	Demo9B
	invoke	Say, dword szContent, dword szTitle
	invoke	ExitProcess, dword NULL
	ret
    
endproc

[section .data]
	szTitle:	db 'Demo9B', 0x0
	szContent:	db 'Demo9 Test, Say()', 0x0
