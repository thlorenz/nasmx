;////////////////////////////////////////////////////////////////
;// DEMO7.ASM
;//
;// Copyright (C)2005-2012 The NASMX Project
;//
;// Purpose:
;//    NASMX - OpenGL/Glut Demo in Linux 32 bit.
;//
;// Contributors:
;//    Mathi
;//
;// This demo needs mesa and freeglut packages.
;//  
;// sudo apt-get install mesa-common-dev
;// sudo apt-get install freeglut3-dev
;//

BITS 32

%include 'nasmx.inc'
%include 'linux/syscall.inc'

%include 'opengl/glut.inc'
ENTRY demo7

IMPORT  glClearColor
IMPORT  glEnable
IMPORT  glClear
IMPORT  glLoadIdentity
IMPORT  glTranslatef
IMPORT  glRotatef
IMPORT  glBegin
IMPORT  glColor3f
IMPORT  glVertex2f
IMPORT  glPushMatrix
IMPORT  glPopMatrix
IMPORT  glViewport
IMPORT  glEnd
IMPORT  glFlush

IMPORT  glutInit
IMPORT  glutInitDisplayMode
IMPORT  glutInitWindowSize
IMPORT  glutCreateWindow

IMPORT  glutDisplayFunc
IMPORT  glutReshapeFunc
IMPORT  glutKeyboardFunc

IMPORT  glutMainLoop

IMPORT  glutSwapBuffers
IMPORT  glutPostRedisplay
IMPORT  usleep

SECTION .data

fzero 	declare(float_t) 	 0.0e0		
fone 	declare(float_t) 	 1.0e0		
fmdot87 declare(float_t) 	-0.87e0
fdot87 	declare(float_t) 	 0.87e0
fmdot5 	declare(float_t) 	-0.5e0

theta 	declare(float_t) 	1.0e0


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
SECTION .text
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;Define the call back functions (Note the cdecl- since they are called from c libraries.
;;Function called to update rendering
proc   cdecl, DisplayFunc
locals none
	invoke usleep, 2000  ;; Slow down!!  Delay = 2 ms
	;;** Clear the buffer, clear the matrix **
	invoke glClearColor, [fzero], [fzero], [fzero], [fzero] 
	invoke glClear, GL_COLOR_BUFFER_BIT   
	
	invoke glLoadIdentity
	invoke glPushMatrix

	;; ** Rotate by Theta degrees **
	invoke glRotatef, [theta], [fzero], [fzero], [fone]

	;;Draw a Triangle.
	invoke glBegin, GL_TRIANGLES 
	invoke glColor3f, [fone], [fzero],[fzero]
	invoke glVertex2f, [fzero], [fone]
	invoke glColor3f, [fzero], [fone],[fzero]
	invoke glVertex2f, [fdot87], [fmdot5]
	invoke glColor3f, [fzero], [fzero], [fone] 
	invoke glVertex2f,[fmdot87], [fmdot5]
	invoke glEnd

	invoke glPopMatrix
	
	invoke glFlush
  	invoke glutSwapBuffers

	fld dword[theta]              ;; theta = theta - 0.5f
	fadd dword[fmdot5]
	fstp dword[theta]

        ;; Keep calling the rendering function. 
  	invoke glutPostRedisplay

endproc

;; **Function called when the window is created or resized**

proc cdecl, ReshapeFunc, dword width, dword height
locals none
	invoke glViewport, 0, 0, dword [argv(.width)], dword [argv(.height)]
endproc

;; ** Function called when a key is hit **
proc cdecl, KeyboardFunc, uchar_t key, dword x, dword y
locals none
	if byte [argv(.key)],==, 27  ;; Press ESC key to exit.
		syscall exit, 0
	endif
endproc

PROC   demo7, ptrdiff_t count, ptrdiff_t cmdline
locals none

	invoke glutInit, argv(.count), argv(.cmdline)
	invoke glutInitDisplayMode, GLUT_RGB
	invoke glutInitWindowSize , 500, 500
	invoke glutCreateWindow, "Spinning Triangle - NASMX - OpenGL/GLUT Demo"
	invoke glClearColor, 0, 0, 0, 0

	;;Assign the call back functions
	invoke glutDisplayFunc, ptrdiff_t DisplayFunc
	invoke glutReshapeFunc, ptrdiff_t ReshapeFunc
	invoke glutKeyboardFunc, ptrdiff_t KeyboardFunc

	invoke glutMainLoop

endproc

