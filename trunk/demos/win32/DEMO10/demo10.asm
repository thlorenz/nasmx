%include '..\..\..\inc\nasmx.inc'
%include '..\..\..\inc\win32\windows.inc'
%include '..\..\..\inc\win32\kernel32.inc'
%include '..\..\..\inc\win32\user32.inc'
%include '..\..\..\inc\win32\stdwin.inc'

entry    demo10

[section .text]
proc    demo10

    invoke   GetModuleHandleA, dword NULL
    mov      [hInstance], eax
    invoke   WinMain, dword hInstance, dword NULL, dword NULL, dword SW_SHOWNORMAL
    invoke   ExitProcess, dword NULL
    ret

endproc

proc    WinMain, hinst, hpinst, cmdln, dwshow

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

proc    WndProc, hwnd, umsg, wparam, lparam


    switch dword argv(umsg)
    case dword WM_CREATE

        ButtonCtl szStringA, 500, 0, 0, 100, 40, argv(hwnd), [wc + WNDCLASSEX.hInstance]
        ButtonCtl szStringB, 501, 100, 0, 100, 40, argv(hwnd), [wc + WNDCLASSEX.hInstance]
        StaticCtl szContent, 502, 0, 40, 200, 40, argv(hwnd), [wc + WNDCLASSEX.hInstance]
        ComboCtl szContent, 503, 0, 80, 200, 100, argv(hwnd), [wc + WNDCLASSEX.hInstance]
        ListBoxCtl szContent, 504, 0, 106, 200, 100, argv(hwnd), [wc + WNDCLASSEX.hInstance]

    case dword WM_COMMAND
        if argv(wparam), ==, dword 500
            invoke   MessageBoxA, dword NULL, dword szMessageA, dword szTitle, dword MB_OK
        elsif argv(wparam), ==, dword 501
            invoke	MessageBoxA, dword NULL, dword szMessageB, dword szTitle, dword MB_OK
        else
            jmp near .defwndproc
        endif

    case dword WM_DESTROY

        invoke   PostQuitMessage, dword NULL

    default
        .defwndproc:
        invoke   DefWindowProcA, dword argv(hwnd), dword argv(umsg), dword argv(wparam), dword argv(lparam)

    endswitch
    ret

endproc

[section .bss]
    hInstance:   resd 1
    hWnd:        resd 1

[section .data]
    szStringA:  db    "Click Me!", 0x0
    szStringB:  db    "Me Too!", 0x0
    szContent:  db    "Win32Nasm Demo #10", 0x0
    szMessageA: db    "With the NasmX Library...", 0x0
    szMessageB: db    "Assembly is a cinche!", 0x0
    szTitle:    db    "Demo10", 0x0
    szClass:    db    "Demo10Class", 0x0

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
