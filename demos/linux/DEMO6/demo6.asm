; Filename:	ex06.asm
; Developers:	Bryant Keller
;               Rob Neff
; Date:		30 May 2011
; Purpose:	This program demonstrates
;		graphical application development
;		using the XLib interface.
; Build:
;  nasm -f elf -o demo6.o demo6.asm
;  gcc -o demo6 demo6.o -lX11 -L/usr/X11R6/lib
	
BITS 32
	
; X11 Defines and Structures
%include 'nasmx.inc'
%include 'x11/Xlib.inc' ; 05 Sep 2009 version of Keith Kanios' X.INC file

ENTRY demo6

IMPORT puts
IMPORT exit

;IMPORT XSetErrorHandler
IMPORT XStoreName
IMPORT XFreeGC
IMPORT XDrawImageString
IMPORT XDrawLine
IMPORT XSetForeground
IMPORT XSetBackground

%define RGB(r,g,b) (r << 16)+(g << 8)+(b)
	
%assign OurInputMask ( KeyPressMask + KeyReleaseMask + ExposureMask )

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
SECTION .data
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

strCaption DB 'Xlib NASM!', 0
strMessage DB "Bright, isn't it! :)"
lenMessage EQU ($-strMessage)

oError DD 0
strErrorDisplay DB 'XOpenDisplay: could not open connection to X server.', 0
strErrorCreation DB 'XCreateSimpleWindow: could not create window.', 0
strErrorShow DB 'XMapRaised: could not display window.', 0

hGC DD 0
hwin DD 0
hdisplay DD 0
event TIMES 20 DD 0 

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
SECTION .text
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
proc   Xshutdown
locals none

    invoke XFreeGC, dword [hdisplay], dword [hGC]
		
    invoke XDestroyWindow, dword [hdisplay], dword [hwin]
	
;    invoke XSetErrorHandler, dword [oError]

    xor    eax, eax

endproc


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
proc   Xinitialize, dword t, dword x, dword y, dword w, dword h
locals
    local hscreen, dword
    local hroot, dword
endlocals

;    invoke XSetErrorHandler, do_exit
;    mov    [oError], eax

    invoke XOpenDisplay, 0
    or     eax, eax
    jnz    .display_ok

    invoke puts, strErrorDisplay
    return -1

.display_ok:
    mov    dword [hdisplay], eax

    invoke XDefaultScreen, dword [hdisplay]
    mov    dword [var(.hscreen)], eax

    invoke XDefaultRootWindow, dword [hdisplay]
    mov    dword [var(.hroot)], eax

    invoke XCreateSimpleWindow, dword [hdisplay], dword [var(.hroot)], dword [argv(.x)], dword [argv(.y)], dword [argv(.w)], dword [argv(.h)], 5, RGB(255,0,0), RGB(255,255,0) 

    or     eax, eax
    jne    .create_ok
    invoke puts, strErrorCreation
    return -1

.create_ok:
    mov    dword [hwin], eax

    invoke XSelectInput, dword [hdisplay], dword [hwin], OurInputMask

    invoke XStoreName, dword [hdisplay], dword [hwin], dword [argv(.t)]

    invoke XMapRaised, dword [hdisplay], dword [hwin]
    or     eax, eax
    jnz    .show_ok

    invoke puts, strErrorShow
    return -1

.show_ok:
    invoke XCreateGC, dword [hdisplay], dword [hwin], 0, 0
    mov    dword [hGC], eax
		
    invoke XSetForeground, dword [hdisplay], dword [hGC], RGB(0,0,0)

    invoke XSetBackground, dword [hdisplay], dword [hGC], RGB(255,255,0)

    xor    eax, eax

endproc


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
proc   Xdrawscreen
locals none

    invoke XDrawLine, dword [hdisplay], dword [hwin], dword [hGC], 0, 110, 400, 110

    invoke XDrawLine, dword [hdisplay], dword [hwin], dword [hGC], 0, 80, 400, 80
	
    invoke XDrawImageString, dword [hdisplay], dword [hwin], dword [hGC], 150, 100, strMessage, lenMessage

endproc


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
proc   Xeventhandler
locals none

    clc ; clear carry

.on_expose:
    mov   eax, [event]
    cmp   eax, Expose
    jnz   .on_keypress

    ;;; draw some text on the screen
    invoke Xdrawscreen
    jmp   .exit

.on_keypress:
    cmp   eax, KeyPress
    jnz   .exit

    ;;; keypress exits the application
    return 1

.exit:
    xor    eax, eax

endproc


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
proc   demo6
locals none
	
    invoke Xinitialize, strCaption, 10, 20, 400, 200
    cmp    eax, -1
    je     .exit
		
;;; Main Event Loop
.msg_pump:

    invoke XNextEvent, dword [hdisplay], event

    invoke Xeventhandler
    cmp    eax, 1
    jne    .msg_pump

    invoke Xshutdown

    xor    eax, eax

.exit:
    invoke exit, eax

endproc

