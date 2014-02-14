;// DEMO1.ASM
;//
;// Copyright (C)2005-2013 The NASMX Project
;//
;// Purpose:
;//    This program demonstrates X11 programming
;//
;// Contributors:
;//    Bryant Keller
;//    Kieth Kanios
;//    Rob Neff
;//


;##### Include Files #####
%include 'nasmx.inc'
%include 'linux/libc.inc'
%include 'x11/X.inc'
%include 'x11/cursorfont.inc'


;##### Initialized Data #####
[section .data]
app_title	DB	"My first X11 Window!!!",0
app_text	DB	"Hello, World.",0
font.name	DB	"*",0  ;"6x10",0
msg	 	DB	"Event Type: %i",10,0
dbgstr  	DB	"retval = %i",10,0

;#### Error messages
szFuncMsgErr	DB	"%s returned error %i",10,0
szXOpenDisplay	DB	"XOpenDisplay"
szXLoadQueryFont DB	"XLoadQueryFont"


;##### Uninitialzed Data #####
SECTION .bss
    display	RESB 4		;Display Pointer
    screen	RESB 4		;Default Screen Pointer
    root_window	RESB 4		;Root Window
    pixel.black	RESB 4		;Default "Black" Color
    pixel.white	RESB 4		;Default "White" Color
    window	RESB 4		;Window Pointer
    window.gc	RESD 24		;Window Graphics Content
    gc.font     RESB 4		;Window Font
    gc.value    RESD 24		;Window GC Values
    pixmap	RESB 4		;Pixmap
    font.info   RESB 4		;Font Info
    event	RESD 5		;Window Event Buffer


;##### Code #####
SECTION .text

entry	demo1

;##### Event Handler #####
proc   EventHandle, dword event
locals none

	;#### Print "Event Type" Message to the Console ####
	invoke	printf, msg, DWORD [argv(.event)]

	cmp	DWORD [argv(.event)],0x05
	jle	.process_input

	invoke	XDrawString, DWORD[display], DWORD[window], DWORD[window.gc], DWORD 100, DWORD 150, DWORD app_text, DWORD 13

.process_input:
	invoke	XFlush, DWORD[display]

endproc



;##### Program Entrypoint #####
proc   demo1
locals none

	;#### Open Default Display ####
	invoke	XOpenDisplay, DWORD 0
	cmp     eax, 0
	jne	.have_display

	;#### Open Display Error ####
	invoke	printf, szFuncMsgErr, szXOpenDisplay, eax
	return	1

.have_display:
	mov	DWORD[display], eax		;Store the Display Structure

	;#### Get Default Screen ####
	invoke	XDefaultScreen, DWORD[display]
	mov	DWORD[screen], eax

	;#### Get Default Colors of the Window ####
	invoke	XBlackPixel, DWORD[display], DWORD[screen]
	mov	DWORD[pixel.black], eax
	invoke	XWhitePixel, DWORD[display], DWORD[screen]
	mov	DWORD[pixel.white], eax

	;#### Get Root Window of the Default Display ####
	invoke	XDefaultRootWindow, DWORD[display]
	mov	DWORD[root_window],eax		;Store Root Window

	;#### XCreateWindow ####
	invoke	XCreateSimpleWindow, DWORD[display], DWORD[root_window], DWORD 0, DWORD 0, DWORD 300, DWORD 300, DWORD 5, DWORD[pixel.black], DWORD[pixel.white]
	mov	DWORD[window],eax	;Store Window ID

	;#### Set Window Characteristics ####
	invoke	XSetStandardProperties, DWORD[display], DWORD[window], DWORD app_title, DWORD 0, DWORD 0, DWORD 0, DWORD 0, DWORD 0
    
	;#### Enable Inputs ####
	invoke	XSelectInput, DWORD[display], DWORD[window], DWORD KeyPressMask + KeyReleaseMask + ButtonPressMask + ButtonReleaseMask + ExposureMask

	;#### Setup the Pixmap ####
	invoke	XCreatePixmap, DWORD[display], dword[window], DWORD 200, DWORD 100, DWORD 24
	mov	DWORD[pixmap],eax

	;#### Setup the Window Graphics Content ####
	invoke	XLoadQueryFont, DWORD[display], DWORD font.name
	cmp     eax, 0
	jne     .have_font
	
	;#### Error querying for font ####
	invoke	printf, szFuncMsgErr, szXLoadQueryFont, eax
	return  1

.have_font:
	mov	DWORD[font.info], eax
	mov	ebx, DWORD[eax+4]		;Load Font ID
	mov	DWORD[gc.value+60], ebx		;Store Font ID

	mov	DWORD[gc.value], GXcopy		;Set to GXCopy

	invoke	XAllPlanes
	mov	DWORD[gc.value+4], eax
	invoke  printf, dbgstr, eax

	mov	eax, DWORD[pixel.black]
	mov	DWORD[gc.value+8], eax

	mov	eax, DWORD[pixel.white]
	mov	DWORD[gc.value+12], eax

	;#### Create the Window Graphics Content ####
	invoke	XCreateGC, DWORD[display], DWORD[window], DWORD GCFunction + GCPlaneMask + GCForeground + GCBackground + GCFont, DWORD gc.value
	mov	DWORD[window.gc], eax
	invoke	XCreateFontCursor, DWORD[display], DWORD XC_trek
	invoke	XDefineCursor, DWORD[display], DWORD[window], DWORD eax

	;#### Clear the Window, and make it top-most ####
	invoke	XClearWindow, DWORD[display], DWORD[window]
	invoke	XMapRaised, DWORD[display], DWORD[window]

	;#### Event Loop ####
.loop:
	invoke	XNextEvent, DWORD[display], event
	invoke	EventHandle, DWORD[event]
	jmp	.loop				;Event Loop

	;#### Destroy the Window ####
	invoke	XDestroyWindow, DWORD[display], DWORD[window]

	;#### Close the Display ####
	invoke	XCloseDisplay, DWORD[display]

	;#### Exit with NULL Return Value ####
	invoke	exit, DWORD 0

endproc

