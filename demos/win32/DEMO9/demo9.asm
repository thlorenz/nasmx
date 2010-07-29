%include "..\..\..\inc\nasmx.inc"
%include "..\..\..\inc\win32\windows.inc"
%include "..\..\..\inc\win32\kernel32.inc"
%include "..\..\..\inc\win32\user32.inc"

entry	DllEntry

proto	Say

[section .text]
proc	DllEntry
hinst		argd
reason		argd
reserved	argd

	mov	eax, TRUE
	ret

endproc

proc	Say
content	argd
apptitle	argd

	invoke	MessageBoxA, dword NULL, dword argv(content), dword argv(apptitle), dword MB_OK + MB_ICONINFORMATION
	xor	eax, eax
	ret

endproc
