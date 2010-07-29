%include '..\..\..\inc\nasmx.inc'
%include '..\..\..\inc\win32\windows.inc'
%include '..\..\..\inc\win32\kernel32.inc'
%include '..\..\..\inc\win32\user32.inc'
%include '..\..\..\inc\win32\stdwin.inc'

entry    demo8

[section .text]
proc    demo8

    invoke   GetModuleHandleA, dword NULL
    mov      [hInstance], eax
    invoke   WinMain, dword hInstance, dword NULL, dword NULL, dword SW_SHOWNORMAL
    invoke   ExitProcess, dword NULL
    ret

endproc

proc    WinMain
hinst    argd        ; Current instance handle
hpinst   argd        ; Previous instance handle
cmdln    argd        ; Command line arguments
dwshow   argd        ; Display style

    invoke   LoadIconA, dword NULL, dword IDI_APPLICATION
    mov      edx, eax
    mov      eax, dword argv(hinst)
    mov      ebx, dword szClass
    mov      ecx, dword WndProc
    mov      [wc + WNDCLASSEX.hInstance], eax
    mov      [wc + WNDCLASSEX.lpszClassName], ebx
    mov      [wc + WNDCLASSEX.lpfnWndProc], ecx
    mov      [wc + WNDCLASSEX.hIcon], edx
    mov      [wc + WNDCLASSEX.hIconSm], edx

    invoke   RegisterClassExA, dword wc

    StdWindow szClass, szTitle, 100, 120, 212, 232, NULL, [wc + WNDCLASSEX.hInstance]
    mov      [hWnd], eax

    invoke   ShowWindow, dword hWnd, dword argv(dwshow)
    invoke   UpdateWindow, dword hWnd

    do
        invoke   TranslateMessage, dword message
        invoke   DispatchMessageA, dword message
        invoke   GetMessageA, dword message, dword NULL, dword NULL, dword NULL
    while eax, !=, 0


    mov      eax, dword [message + MSG.wParam]
    ret

endproc

proc    WndProc
hwnd    argd        ; Window handle
umsg    argd        ; Window message
wparam  argd        ; wParam
lparam  argd        ; lParam


    switch dword argv(umsg)
    case dword WM_CREATE

        ButtonCtl szString, 500, 0, 0, 100, 40, argv(hwnd), [wc + WNDCLASSEX.hInstance]
        ButtonCtl szString, 500, 100, 0, 100, 40, argv(hwnd), [wc + WNDCLASSEX.hInstance]
        StaticCtl szContent, 501, 0, 40, 200, 40, argv(hwnd), [wc + WNDCLASSEX.hInstance]
        ComboCtl szContent, 502, 0, 80, 200, 100, argv(hwnd), [wc + WNDCLASSEX.hInstance]
        ListBoxCtl szContent, 502, 0, 106, 200, 100, argv(hwnd), [wc + WNDCLASSEX.hInstance]

    case dword WM_COMMAND

        cmp      argv(wparam), dword 500
        jz       near .bleh
            break
        .bleh:
        invoke   MessageBoxA, dword NULL, dword szContent, dword szTitle, dword MB_OK

    case dword WM_DESTROY

        invoke   PostQuitMessage, dword NULL

    default

        invoke   DefWindowProcA, dword argv(hwnd), dword argv(umsg), dword argv(wparam), dword argv(lparam)

    endswitch
    ret

endproc

[section .bss]
    hInstance:   resd 1
    hWnd:        resd 1

[section .data]
    szString:   db    "Click Me!", 0x0
    szContent:  db    "Win32Nasm Demo #8", 0x0
    szTitle:    db    "Demo8", 0x0
    szClass:    db    "Demo8Class", 0x0

    wc:
    istruc WNDCLASSEX
        at WNDCLASSEX.cbSize,           dd    WNDCLASSEX_size
        at WNDCLASSEX.style,            dd    CS_VREDRAW + CS_HREDRAW
        at WNDCLASSEX.lpfnWndProc,      dd    NULL
        at WNDCLASSEX.cbClsExtra,       dd    NULL
        at WNDCLASSEX.cbWndExtra,       dd    NULL
        at WNDCLASSEX.hInstance,        dd    NULL
        at WNDCLASSEX.hIcon,            dd    NULL
        at WNDCLASSEX.hCursor,          dd    NULL
        at WNDCLASSEX.hbrBackground,    dd    COLOR_BTNFACE + 1
        at WNDCLASSEX.lpszMenuName,     dd    NULL
        at WNDCLASSEX.lpszClassName,    dd    NULL
        at WNDCLASSEX.hIconSm,          dd    NULL
    iend

    message:
    istruc MSG
        at MSG.hwnd,                    dd    NULL
        at MSG.message,                 dd    NULL
        at MSG.wParam,                  dd    NULL
        at MSG.lParam,                  dd    NULL
        at MSG.time,                    dd    NULL
        at MSG.pt,                      dd    NULL
    iend
