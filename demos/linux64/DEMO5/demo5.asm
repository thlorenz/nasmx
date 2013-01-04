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
%include 'x11-x64/Xlib.inc'

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

PROC   demo5, ptrdiff_t count, ptrdiff_t cmdline
locals none

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
push rax
WhitePixel _dpy,scr
push rax
sub rsp,4         ;;
mov dword[rsp],0  ;; push dword 0 

invoke XCreateSimpleWindow, [_dpy], [rootwin], 0, 0, 200, 150 ;; rest of the variables already pushed on stack
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
			mov dword[rsp], htextlen
			invoke XDrawString, [_dpy], [win], [gc], 30, 30, hellotext ;; htextlen already passed in stack  ;; TODO
		endif
	elsif rbx,==,ButtonPress
		jmp JumpOutofWhile  ;; need the BREAK macro fixed !!
	elsif rbx,==,ClientMessage
		mov rdx,[_event + XClientMessageEvent.data+0*8]
		if rdx,==,[wmDeleteMessage]		 
			jmp JumpOutofWhile  ;; need the BREAK macro fixed !!
		endif
	endif
WHILE rax,==,rax

JumpOutofWhile:

endproc
