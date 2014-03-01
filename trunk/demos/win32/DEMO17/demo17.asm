; ----------------------------------------------------------------------------
; -       TITLE   : NASMX Win Floor Demo                                     -
; -----                                                                  -----
; -       AUTHOR  : Alfonso Víctor Caballero Hurtado                         -
; -----                                                                  -----
; -----                                                                  -----
; -       VERSION : 1.0                                                      -
; -      (c) 2012 The NASMX Project                                          -
; ----------------------------------------------------------------------------


; For a Win32 environment use NASMENV to point to the NASMX include
; directory prior to assembly, eg:
;    set NASMENV="-IC:\nasmx-1.2\inc\"

; nasm -fwin32 demo17.asm
; golink /entry _main kernel32.dll user32.dll gdi32.dll demo17.obj

%include '..\..\windemos.inc'
%include 'win32\stdwin.inc'

cdXPos              EQU  128               
cdYPos              EQU  128               
cdYSize             EQU  400               
cdXSize             EQU  640               
cdVIcon             EQU  IDI_APPLICATION   
cdVCursor           EQU  IDC_ARROW         
cdVBarType          EQU  NULL              
cdVBtnType          EQU  0x20000+0x80000+0x10000000
cdIdTimer           EQU  1
DIB_RGB_COLORS      EQU  0


[section .text]
entry WinFloor

proc CreateMyPalette
uses esi        ; Save the CCALL convention registers used,
                ; eg: ebx, esi, edi.  Remember that ebp is
                ; used by the NASMX macros argv() and var()
                ; for accessing the procedure parameters
                ; and local variables respectively.

locals none     ; Always include the locals macro regardless
                ; of whether or not you have local vars.
                ; Many key internal NASMX %defines and stack
                ; alignment depend on it.  The invoke macro,
                ; if used, will check for this.

    ; Creates colors for the floor palette
    mov    esi, myPalette
    mov    ecx, 256

    ; All labels must use the Nasm dot notation.  This requirement
    ; enables you to reuse label names in multiple procedures
    ; within your source code.  The label name is associated
    ; with the procedure name.
    .Bucle_Paleta1:
        mov    eax, 256
        sub    eax, ecx
        mov    byte [esi + PALETTEENTRY.peRed], al
        mov    byte [esi + PALETTEENTRY.peGreen], al
        mov    byte [esi + PALETTEENTRY.peBlue], 40
        mov    byte [esi + PALETTEENTRY.peFlags], 0
        add    esi, 4
    loop   .Bucle_Paleta1

;   ret
; The ret opcode is over-ridden by the NASMX ret macro and is not
; required in any code.  It's still OK to use this prior to
; procedure exit; however, get in the habit of NOT using either
; the ret or the enter/leave opcodes.

endproc

proc DrawFloor
uses ebx, esi, edi        ; Save the CCALL convention registers used.
locals none

    ; Draws the floor
    mov      edi, dword[pDIBFloor]          ; Points to the DIB buffer
    movzx    ecx, byte [vbMotion]
    mov      edx, cdYSize-1                 ; Y-Rows

    .Rows:                                 
      mov      ebx, cdXSize-1               ; X-Columns
      .Columns:                            
        mov      esi, edx                   ; The active row
        add      esi, ecx                   ; The motion
        mov      eax, ebx                   ; The active column
        sub      eax, ecx                   ; Substract the motion
        xor      eax, esi                   ; XOR with active row + motion
        and      eax, 0FFh                  
        shl      eax, 2                     ; Because they are dwords
        mov      eax, dword [eax+myPalette] ; Taking the value from the palette
        stosd
        dec      ebx
      jns      .Columns
      dec      edx
    jns      .Rows
    inc      byte [vbMotion]

endproc


proc   WndProc, ptrdiff_t hWnd, dword uMsg, size_t wParam, size_t lParam
locals none
    ; Notice that Nasm's dot notation is also used when accessing
    ; procedure parameters as the following line demonstrates.
    ; This notation ties the parameter name to the procedure name
    ; and enables use of identical parameter names by all
    ; procedures within the same source file.
    mov      eax, dword [argv(.uMsg)]
    cmp      eax, dword WM_ERASEBKGND
    jz       .wmEraseBackground
    cmp      eax, dword WM_PAINT
    jz       .wmPaint
    cmp      eax, dword WM_DESTROY
    jz       .wmDestroy
    cmp      eax, dword WM_TIMER
    jz       .wmTimer
    cmp      eax, dword WM_CREATE
    jz       .wmCreate
    cmp      eax, dword WM_CLOSE
    jz       .wmClose
    cmp      eax, dword WM_KEYDOWN
    jz       .wmKeyDown

.wmDefault:
    invoke   DefWindowProc, ptrdiff_t [argv(.hWnd)], dword [argv(.uMsg)], size_t [argv(.wParam)], size_t [argv(.lParam)]
    ; We leave the return value of DefWindowProc in eax
    ; and jump to the end of this procedure.
    jmp       .exit

.wmKeyDown:
    cmp       dword [argv(.wParam)], VK_ESCAPE   ; 1Bh
    jne       .wmFin
    invoke    PostMessage, ptrdiff_t [argv(.hWnd)], WM_CLOSE, 0, 0
    jmp       .wmFin

.wmCreate:
    invoke    CreateDCA, 0, 0, 0, 0
    ; It creates a dib buffer for the floor. pDIBFloor is a pointer to it
    invoke    CreateDIBSection, eax, LCDBITMAPINFO, DIB_RGB_COLORS,\
                                pDIBFloor, NULL, NULL
    mov       dword [hDIBFloor], eax
    ; invoke    CenterWindow, ptrdiff_t [argv(.hWnd)]
    invoke    CreateMyPalette
    invoke    SetTimer, ptrdiff_t [argv(.hWnd)], cdIdTimer, 20, NULL
    jmp       .wmFin

.wmTimer:
    invoke    InvalidateRect, ptrdiff_t [argv(.hWnd)], NULL, NULL
    jmp       .wmFin

.wmEraseBackground:
    mov       eax, 1   ; Using this trick, the background won't be erased
    jmp       .exit
    ; Another way of duplicating the behavior of the previous two lines
    ; is to use the NASMX macro "return".  It operates similar to the
    ; C language keyword.  For example:  
    ;     return 1

.wmPaint:
    invoke    BeginPaint, ptrdiff_t [argv(.hWnd)], ps
    mov       [hdc], eax

    invoke    CreateCompatibleDC, [hdc]
    mov       [bufDIBDC], eax
    invoke    SelectObject, [bufDIBDC], [hDIBFloor]   ; Select bitmap into DC
    mov       [hOldDIB], eax

    ; Creates the bmp buffer:
    invoke    CreateCompatibleDC, [hdc]
    mov       [hBackDC], eax
    invoke    CreateCompatibleBitmap, [hdc], cdXSize, cdYSize
    mov       [bufBMP], eax
    invoke    SelectObject, [hBackDC], [bufBMP]
    mov       [hOldBmp], eax

    invoke    DrawFloor

    ; Copy the DIB buffer into the BMP buffer
    invoke    BitBlt, [hBackDC], 0, 0, cdXSize, cdYSize, [bufDIBDC], 0, 0, SRCCOPY
    ; Copy the BMP buffer into the main window
    invoke    BitBlt, [hdc], 0, 0, cdXSize, cdYSize, [hBackDC], 0, 0, SRCCOPY
    ; Destroy
    invoke    SelectObject, [hBackDC], [hOldBmp]
    invoke    DeleteObject, [bufBMP]
    invoke    DeleteDC, [hBackDC]

    invoke    SelectObject, [bufDIBDC], [hOldDIB]
    invoke    DeleteDC, [bufDIBDC]

    invoke    EndPaint, ptrdiff_t [argv(.hWnd)], ps
    jmp       .wmFin

.wmClose:
    invoke    MessageBox, ptrdiff_t [argv(.hWnd)], MsgAgradecimiento, MsgCabAgradecimiento, MB_OK
    invoke    KillTimer, ptrdiff_t [argv(.hWnd)], cdIdTimer
    invoke    DeleteObject, ptrdiff_t [hDIBFloor]
    invoke    DestroyWindow, ptrdiff_t [argv(.hWnd)]
    jmp       .wmFin

.wmDestroy:
    invoke    PostQuitMessage, NULL

.wmFin:
  xor     eax, eax
    
.exit:

endproc

proc   WinMain, ptrdiff_t hinst, ptrdiff_t hpinst, ptrdiff_t cmdln, dword dwshow
locals none

    invoke   LoadIcon, NULL, cdVIcon
    mov      edx, eax
    mov      eax, ptrdiff_t [argv(.hinst)]
    mov      ebx, dword szClass
    mov      ecx, dword WndProc
    mov      [wc + WNDCLASSEX.hInstance], eax
    mov      [wc + WNDCLASSEX.lpszClassName], ebx
    mov      [wc + WNDCLASSEX.lpfnWndProc], ecx
    mov      [wc + WNDCLASSEX.hIcon], edx
    mov      [wc + WNDCLASSEX.hIconSm], edx

    invoke   RegisterClassEx, wc

    invoke    CreateWindowEx, cdVBarType, szClass, szTitle,\
              cdVBtnType, cdXPos, cdYPos, cdXSize, cdYSize,\
              NULL, NULL, [wc + WNDCLASSEX.hInstance],NULL
    mov      [hWnd], eax

    invoke   ShowWindow, hWnd, [argv(.dwshow)]
    invoke   UpdateWindow, hWnd

    .msgloop:
        invoke   GetMessage, message, NULL, NULL, NULL
        cmp      eax, dword 0
        je       .exit
        invoke   TranslateMessage, message
        invoke   DispatchMessage, message
        jmp      .msgloop

.exit:
    mov      eax, dword [message + MSG.wParam]
endproc

proc   WinFloor, ptrdiff_t argcount, ptrdiff_t cmdline
locals none

    invoke   GetModuleHandle, NULL
    mov      [hInstance], eax
    invoke   WinMain, [hInstance], NULL, NULL, SW_SHOWNORMAL
    invoke   ExitProcess, NULL

endproc



[section .bss]
    hInstance:       reserve(ptrdiff_t) 1
    hWnd:            reserve(ptrdiff_t) 1
    hdc:             reserve(ptrdiff_t) 1
    CommandLine:     reserve(ptrdiff_t) 1
    bufDIBDC:        reserve(ptrdiff_t) 1  ; HDC
    bufBMP:          reserve(ptrdiff_t) 1  ; HBITMAP
    hOldBmp:         reserve(ptrdiff_t) 1
    ; 
    hDC:             reserve(ptrdiff_t) 1
    pDIBFloor:       reserve(ptrdiff_t) 1
    hDIBFloor:       reserve(ptrdiff_t) 1
    hLabelDC:        reserve(ptrdiff_t) 1
    hOldDIB:         reserve(ptrdiff_t) 1
    hBackDC:         reserve(ptrdiff_t) 1
    ps:		     resb PAINTSTRUCT_size 
    myPalette: 	     resb PALETTEENTRY_size
    resb 4*256

[section .data]

    szTitle:               declare(NASMX_TCHAR) NASMX_TEXT("Demo 17 - WinFloor"), 0x0
    szClass:               declare(NASMX_TCHAR) NASMX_TEXT("WinFloorClass"), 0x0
    vbMotion:              db    0
    MsgAgradecimiento:     declare(NASMX_TCHAR) NASMX_TEXT("* To Toni Gual for their floor demo in QBasic, I learned from him."), 13, 10
                           declare(NASMX_TCHAR) NASMX_TEXT("* To f0dder for his tips in this enhanced version."), 13, 10, 13, 10
                           declare(NASMX_TCHAR) NASMX_TEXT("(c) 2012 The NASMX Project"),  13, 10
                           declare(NASMX_TCHAR) NASMX_TEXT("Written by Alfonso Víctor Caballero Hurtado"), 13, 10
                           declare(NASMX_TCHAR) NASMX_TEXT("http://abreojosensamblador.net"), 0
    MsgCabAgradecimiento:  declare(NASMX_TCHAR) NASMX_TEXT("Acknowledgements"), 0

    NASMX_ISTRUC LCDBITMAPINFO, BITMAPINFOHEADER
      NASMX_AT biSize,            BITMAPINFOHEADER_size ; int32_t, 1
      NASMX_AT biWidth,           cdXSize               ; int32_t, 1
      NASMX_AT biHeight,          -1*cdYSize            ; int32_t, 1
      NASMX_AT biPlanes,          1                     ; short_t, 1
      NASMX_AT biBitCount,        32                    ; short_t, 1
      NASMX_AT biCompression,     0                     ; int32_t, 1
      NASMX_AT biSizeImage,       0                     ; int32_t, 1
      NASMX_AT biXPelsPerMeter,   0                     ; int32_t, 1
      NASMX_AT biYPelsPerMeter,   0                     ; int32_t, 1
      NASMX_AT biClrUsed,         0                     ; int32_t, 1
      NASMX_AT biClrImportant,    0                     ; int32_t, 1
    NASMX_IENDSTRUC
    
    NASMX_ISTRUC wc, WNDCLASSEX
        NASMX_AT cbSize,           WNDCLASSEX_size
        NASMX_AT style,            CS_VREDRAW + CS_HREDRAW
        NASMX_AT lpfnWndProc,      NULL
        NASMX_AT cbClsExtra,       NULL
        NASMX_AT cbWndExtra,       NULL
        NASMX_AT hInstance,        NULL
        NASMX_AT hIcon,            NULL
        NASMX_AT hCursor,          NULL
        NASMX_AT hbrBackground,    COLOR_BTNFACE + 1
        NASMX_AT lpszMenuName,     NULL
        NASMX_AT lpszClassName,    NULL
        NASMX_AT hIconSm,          NULL
    NASMX_IENDSTRUC

    NASMX_ISTRUC message, MSG
        NASMX_AT hwnd,             NULL
        NASMX_AT message,          NULL
        NASMX_AT wParam,           NULL
        NASMX_AT lParam,           NULL
        NASMX_AT time,             NULL
        NASMX_ISTRUC pt, POINT
          NASMX_AT x,          NULL
          NASMX_AT y,          NULL
        NASMX_IENDSTRUC
    NASMX_IENDSTRUC
