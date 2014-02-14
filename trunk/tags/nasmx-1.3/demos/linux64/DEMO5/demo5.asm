;////////////////////////////////////////////////////////////////
;// DEMO5.ASM
;//
;// Copyright (C)2005-2013 The NASMX Project
;//
;// Purpose:
;//    NASMX - Xlib Demo in Linux 64 bit.
;//
;// Contributors:
;//    Mathi
;//


%include 'nasmx.inc'
%include 'x11/Xlib.inc'

ENTRY demo5

extern XOpenDisplay
extern XCreateSimpleWindow
extern XStoreName
extern XCreateGC
extern XSetForeground
extern XSelectInput
extern XMapWindow 
extern XNextEvent
extern XDrawString
extern XSetWMProtocols
extern XInternAtom

segment .bss

scr: 		reserve(uint32_t) 1
cmap: 		reserve(Colormap) 1
rootwin:	 reserve(Window) 1
win:		reserve(Window) 1
wmDeleteMessage: reserve(Atom) 1

_dpy: 		reserve(uint64_t) 1    ;; pointer of _XDisplay struct
gc:		reserve(uint64_t) 1  ;; pointer of _XGC  struct
bpixel: 	reserve(uint64_t) 1 
wpixel: 	reserve(uint64_t) 1
_event: 	reserve(XEvent) XEvent_size      ;;need to improve


segment .data 

hellocap:   declare(NASMX_TCHAR) NASMX_TEXT("hello"), 0x0
hellotext:   declare(NASMX_TCHAR) NASMX_TEXT("Hello World!!")
htextlen equ $-hellotext

section .text

;; When programming for x64 with NASMX if a procedure will invoke 2 or
;; more function calls that have more than 6 parameters then your programs
;; can be smaller and faster if you use the global callstack optimization.
NASMX_PRAGMA CALLSTACK, 32

PROC   demo5, ptrdiff_t count, ptrdiff_t cmdline
locals none

mov edi, 0
invoke XOpenDisplay, 0 
if rax,==,0
	mov rax,-1  ;;; Error !!
	return
endif
mov [_dpy],rax

DefaultScreen _dpy
mov [scr],eax

RootWindow _dpy,scr
mov [rootwin],rax

DefaultColormap _dpy,scr
mov [cmap],rax

BlackPixel _dpy,scr
mov [bpixel],rax
WhitePixel _dpy,scr
mov [wpixel], rax
invoke XCreateSimpleWindow, [_dpy], [rootwin], 0, 0, 200, 150, 0, [wpixel], [bpixel]
mov [win],rax

invoke XStoreName, [_dpy], [win], hellocap

invoke XCreateGC, [_dpy], [win], 0, 0
mov [gc],rax

WhitePixel _dpy,scr
mov rdx,rax
invoke XSetForeground, [_dpy], [gc], rdx

invoke XSelectInput, [_dpy], [win], ExposureMask|ButtonPressMask

invoke XMapWindow, [_dpy], [win]


invoke XInternAtom, [_dpy], "WM_DELETE_WINDOW", False  ;; Needed for Graceful exit of the program.
mov [wmDeleteMessage], rax
invoke XSetWMProtocols,[_dpy], [win], wmDeleteMessage, 1

DO
	invoke XNextEvent, [_dpy], _event
	
	movsx rbx,dword[_event]  ;;_event.type
	
	mov rcx,[_event + XExposeEvent.count]
	
	if rbx,==,Expose
		if rcx,<,1
			invoke XDrawString, [_dpy], [win], [gc], 30, 30, hellotext, htextlen
		endif
	elsif rbx,==,ButtonPress
		BREAK
	elsif rbx,==,ClientMessage
		;;XClientMessageEvent.data.l[0]
		mov rdx,[_event + XClientMessageEvent.data+0*8]
		if rdx,==,[wmDeleteMessage]		 
			BREAK
		endif
	endif
WHILE rax,==,rax

endproc
