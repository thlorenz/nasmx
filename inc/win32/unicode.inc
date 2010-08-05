%ifndef __NASMX_UNICODE_INC__
%define __NASMX_UNICODE_INC__

%ifdef UNICODE
	%define CreateWindowEx CreateWindowExW
	%define DefWindowProc DefWindowProcW
	%define DialogBoxParam DialogBoxParamW
	%define DispatchMessage DispatchMessageW
	%define GetMessage GetMessageW
	%define GetModuleHandle GetModuleHandleW
	%define LoadIcon LoadIconW
	%define MessageBox MessageBoxW
	%define RegisterClassEx RegisterClassExW
	%define SendDlgItemMessage SendDlgItemMessageW
%else
	%define CreateWindowEx CreateWindowExA
	%define DefWindowProc DefWindowProcA
	%define DialogBoxParam DialogBoxParamA
	%define DispatchMessage DispatchMessageA
	%define GetMessage GetMessageA
	%define GetModuleHandle GetModuleHandleA
	%define LoadIcon LoadIconA
	%define MessageBox MessageBoxA
	%define RegisterClassEx RegisterClassExA
	%define SendDlgItemMessage SendDlgItemMessageA
%endif

%endif
