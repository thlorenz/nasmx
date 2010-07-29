%include '..\..\..\inc\nasmx.inc'
%include '..\..\..\inc\win32\windows.inc'
%include '..\..\..\inc\win32\kernel32.inc'
%include '..\..\..\inc\win32\user32.inc'

entry demo2

[section .text]
proc    demo2

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

    invoke   CreateWindowExA, dword WS_EX_TOOLWINDOW, dword szClass, dword szTitle, dword WS_CAPTION + WS_SYSMENU + WS_VISIBLE, dword 100, dword 120, dword 200, dword 100, dword NULL, dword NULL, dword [wc + WNDCLASSEX.hInstance], dword NULL
    mov      [hWnd], eax

    invoke   ShowWindow, dword hWnd, dword argv(dwshow)
    invoke   UpdateWindow, dword hWnd

    .msgloop:
        invoke   GetMessageA, dword message, dword NULL, dword NULL, dword NULL
        cmp      eax, dword 0
        je       .exit
        invoke   TranslateMessage, dword message
        invoke   DispatchMessageA, dword message
        jmp      .msgloop
    .exit:

    mov      eax, dword [message + MSG.wParam]
    ret

endproc

proc    WndProc
hwnd    argd        ; Window handle
umsg    argd        ; Window message
wparam  argd        ; wParam
lparam  argd        ; lParam


.wm_create:
    cmp      argv(umsg), dword WM_CREATE
    jnz      .wm_destroy

    invoke   GetClientRect, dword argv(hwnd), dword rct
    invoke   CreateWindowExA, dword NULL, dword szStatic, dword szTitle, dword WS_CHILD + WS_VISIBLE + SS_CENTER, dword 0, dword 0, dword [rct + RECT.right], dword [rct + RECT.bottom], dword argv(hwnd), dword 500, dword [wc + WNDCLASSEX.hInstance], dword NULL
    jmp      .wm_default

.wm_destroy:
    cmp      argv(umsg), dword WM_DESTROY
    jnz      .wm_default

    invoke   PostQuitMessage, dword NULL

.wm_default:
    invoke   DefWindowProcA, dword argv(hwnd), dword argv(umsg), dword argv(wparam), dword argv(lparam)
    
.exit:
    ret

endproc

[section .bss]
    hInstance:   resd 1
    hWnd:        resd 1

[section .data]
    szStatic:   db    "STATIC", 0x0
    szTitle:    db    "Demo2", 0x0
    szClass:    db    "Demo2Class", 0x0

    wc:
    istruc WNDCLASSEX
        at WNDCLASSEX.cbSize,          dd    WNDCLASSEX_size
        at WNDCLASSEX.style,           dd    CS_VREDRAW + CS_HREDRAW
        at WNDCLASSEX.lpfnWndProc,     dd    NULL
        at WNDCLASSEX.cbClsExtra,      dd    NULL
        at WNDCLASSEX.cbWndExtra,      dd    NULL
        at WNDCLASSEX.hInstance,       dd    NULL
        at WNDCLASSEX.hIcon,           dd    NULL
        at WNDCLASSEX.hCursor,         dd    NULL
        at WNDCLASSEX.hbrBackground,   dd    COLOR_BTNFACE + 1
        at WNDCLASSEX.lpszMenuName,    dd    NULL
        at WNDCLASSEX.lpszClassName,   dd    NULL
        at WNDCLASSEX.hIconSm,         dd    NULL
    iend

    message:
    istruc MSG
        at MSG.hwnd,                   dd    NULL
        at MSG.message,                dd    NULL
        at MSG.wParam,                 dd    NULL
        at MSG.lParam,                 dd    NULL
        at MSG.time,                   dd    NULL
        at MSG.pt,                     dd    NULL
    iend

    rct:
    istruc RECT
        at RECT.left,                  dd    NULL
        at RECT.top,                   dd    NULL
        at RECT.right,                 dd    NULL
        at RECT.bottom,                dd    NULL
    iend
