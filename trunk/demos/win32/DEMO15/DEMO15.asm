;// DEMO15.ASM
;//
;// Copyright (C)2005-2012 The NASMX Project
;//
;// 32 Bit OpenGL Sample Program.
;// 
;// Contributors:
;//    Mathi (Translated to NASMX)
;//    ;; **Original code by Serge | (C)hardCode | http://bizarrecreations.webjump.com**
;//    ;; http://read.pudn.com/downloads10/sourcecode/graph/43579/NASM/ntorus.asm__.htm
;//

%include 'DEMO15.inc'
%include "..\..\..\inc\opengl\gl.inc"

[section .text]
entry demo15

proc SetupOpenGL,ptrdiff_t hWnd
locals none
	invoke GetDC,ptrdiff_t [argv(.hWnd)]
	mov [hDC],eax

	mov word [pfd+PIXELFORMATDESCRIPTOR.nSize],PIXELFORMATDESCRIPTOR_size
	mov word [pfd+PIXELFORMATDESCRIPTOR.nVersion],1
	mov dword [pfd+PIXELFORMATDESCRIPTOR.dwFlags],PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER | PFD_DRAW_TO_WINDOW
	mov dword [pfd+PIXELFORMATDESCRIPTOR.dwLayerMask],PFD_MAIN_PLANE
	mov byte [pfd+PIXELFORMATDESCRIPTOR.iPixelType],PFD_TYPE_RGBA
	mov byte [pfd+PIXELFORMATDESCRIPTOR.cColorBits],16
	mov byte [pfd+PIXELFORMATDESCRIPTOR.cDepthBits],16
	mov byte [pfd+PIXELFORMATDESCRIPTOR.cAccumBits],0
	mov byte [pfd+PIXELFORMATDESCRIPTOR.cStencilBits],0

	invoke ChoosePixelFormat,[hDC],pfd

	invoke SetPixelFormat,[hDC],eax,pfd

	invoke wglCreateContext,[hDC]
	mov [hRC],eax

	invoke wglMakeCurrent,[hDC],[hRC]

	; position viewer
	_glMatrixMode GL_MODELVIEW

	_glTranslatef 0.0,0.0,-2.0

	; position light0
	invoke glLightfv,GL_LIGHT0,GL_POSITION,light0Pos

	_glEnable GL_LIGHTING
	_glEnable GL_LIGHT0
	_glEnable GL_DEPTH_TEST
	_glEnable GL_CULL_FACE
	_glShadeModel GL_SMOOTH
endproc

proc GL_Resize,dword w,dword h
locals
	local left, qword
	local right, qword
	local bottom, qword
	local top, qword
endlocals
		
	fld dword [glHalf]
	fst qword [var(.right)]   ; 0.5
	fst qword [var(.top)]     ; 0.5
	fchs
	fst qword [var(.left)]    ; -0.5
	fstp qword [var(.bottom)] ; -0.5
	_glMatrixMode GL_PROJECTION
	_glLoadIdentity
	fild dword [argv(.w)]
	fild dword [argv(.h)]
	; take care of aspect ratio
	mov eax,[argv(.w)]
	if eax,ABOVE,[argv(.h)]
		fdivp st1,st0  ; w/h
		fld st0
		fmul qword [var(.right)]
		fxch
		fmul qword [var(.left)]
		fstp qword [var(.left)]
		fstp qword [var(.right)]
	else
		fdivrp st1,st0 ; h/w
		fld st0
		fmul qword [var(.top)]
		fxch
		fmul qword [var(.bottom)]
		fstp qword [var(.bottom)]
		fstp qword [var(.top)]
	endif

	_glFrustum dword var(.left),dword var(.right),dword var(.bottom),dword var(.top),1.0,3.0
	_glMatrixMode GL_MODELVIEW
	_glViewport 0,0,dword [argv(.w)],dword [argv(.h)]

endproc

proc KillOpenGL,ptrdiff_t hWnd
locals none
	 invoke wglMakeCurrent,0,0
	 invoke wglDeleteContext,[hRC]
	 invoke ReleaseDC,ptrdiff_t [argv(.hWnd)],[hDC]
endproc

proc SelectMaterial,dword matNum
locals none
	if dword [argv(.matNum)],==,0
		_glMaterialfv GL_FRONT,GL_AMBIENT,mat0_Ambient
		_glMaterialfv GL_FRONT,GL_DIFFUSE,mat0_Diffuse
		_glMaterialfv GL_FRONT,GL_SPECULAR,mat0_Specular
		_glMaterialfv GL_FRONT,GL_SHININESS,mat0_Shine
	else
		_glMaterialfv GL_FRONT,GL_AMBIENT,mat1_Ambient
		_glMaterialfv GL_FRONT,GL_DIFFUSE,mat1_Diffuse
		_glMaterialfv GL_FRONT,GL_SPECULAR,mat1_Specular
		_glMaterialfv GL_FRONT,GL_SHININESS,mat1_Shine
	endif
endproc


proc glTorus,dword majorRadius,dword minorRadius,dword numMajor,dword numMinor
locals 
	local baseMat,dword
	local majorStep,dword
	local minorStep,dword
	local majcounter,dword
	local mincounter,dword
	
	local sin0,dword
	local cos0,dword
	local sin1,dword
	local cos1,dword
	;* normals
	local n0X,dword
	local n0Y,dword
	local n0Z,dword
	local n1X,dword
	local n1Y,dword
	local n1Z,dword
	;* vertices
	local v0X,dword
	local v0Y,dword
	local v0Z,dword
	local v1X,dword
	local v1Y,dword
	local v1Z,dword
endlocals
	fldpi
	fadd st0,st0
	fld st0
	fidiv dword [argv(.numMinor)]
	fxch
	fidiv dword [argv(.numMajor)]  ; FPU: majorStep=2PI/numMajor, minorStep=2PI/numMinor
	m2m [var(.majcounter)],[argv(.numMajor)]
	fstp dword [var(.majorStep)]
	fstp dword [var(.minorStep)]
    	DO
		mov eax,[argv(.numMajor)]
		mov ecx,[var(.majcounter)]
		sub eax,ecx
		push eax
		fild dword [esp]
		fmul dword [var(.majorStep)]
		fld st0
		fadd dword [var(.majorStep)]  ; b,a
		fsincos                      ; cos(b),sin(b),a
		fxch st2                     ; a,sin(b),cos(b)
		fsincos                      ; cos(a),sin(a),sin(b),cos(b),majorStep,minorStep
		pop eax
		and eax,1
		mov dword [var(.baseMat)],eax
		fstp dword [var(.cos0)]
		fstp dword [var(.sin0)]
		fstp dword [var(.sin1)]
		fstp dword [var(.cos1)]
		_glBegin GL_TRIANGLE_STRIP
		m2m [var(.mincounter)],[argv(.numMinor)]
		DO
			mov eax,dword [argv(.numMinor)]
			mov ecx,dword [var(.mincounter)]
			sub eax,ecx
			push eax
			fild dword [esp]
			fmul dword [var(.minorStep)]
			fsincos           ; cos(x),sin(x)
			fld st0
			fmul dword [argv(.minorRadius)]
			fadd dword [argv(.majorRadius)]  ; r=cos(x)*minorRadius+majorRadius,cos(x),sin(x)
			fxch st2
			fmul dword [argv(.minorRadius)]  ; z=minorRadius*sin(x),cos(x),r
			fxch                           ; cos(x),z,r
				; calc normals & vertices
			fld st0
			fmul dword [var(.cos0)]
			fstp dword [var(.n0X)]
			fld st0
			fmul dword [var(.sin0)]
			fstp dword [var(.n0Y)]
			fld st0
			fmul dword [var(.cos1)]
			fstp dword [var(.n1X)]
			fmul dword [var(.sin1)]
			fstp dword [var(.n1Y)]
			fst dword [var(.v0Z)]
			fst dword [var(.v1Z)]
			fdiv dword [argv(.minorRadius)]
			fst dword [var(.n0Z)]
			fstp dword [var(.n1Z)]
			fld st0
			fmul dword [var(.cos0)]
			fstp dword [var(.v0X)]
			fld st0
			fmul dword [var(.sin0)]
			fstp dword [var(.v0Y)]
			fld st0
			fmul dword [var(.cos1)]
			fstp dword [var(.v1X)]
			fmul dword [var(.sin1)]
			fstp dword [var(.v1Y)]
			pop eax
			and eax,1
			add eax,dword [var(.baseMat)]
			and eax,1
			invoke SelectMaterial,eax
			_glNormal3f var(.n0X),var(.n0Y),var(.n0Z)
			_glVertex3f var(.v0X),var(.v0Y),var(.v0Z)
			_glNormal3f var(.n1X),var(.n1Y),var(.n1Z)
			_glVertex3f var(.v1X),var(.v1Y),var(.v1Z)
			dec dword[var(.mincounter)]
		WHILE dword[var(.mincounter)],>=,0   ;;DO..WHILE loop
		invoke glEnd
		dec dword[var(.majcounter)]
	WHILE dword[var(.majcounter)],!=,0   ;;DO..WHILE loop
endproc


proc GL_Paint
locals none
	if dword[hRC],!=,0
		;**** clear framebuffer and depth-buffer

		invoke glClear,GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT
		;**** rotate torus
		invoke glPushMatrix ; push viewer's matrix
		invoke glMatrixMode,GL_MODELVIEW
		
		_glRotatef Roll,0.0,1.0,0.0         ; rotate around Y axis

		fld dword [Roll]
		fadd dword [rotstep]
		fstp dword [Roll]

		_glRotatef Roll,1.0,0.0,0.0 ; rotate around X axis

		;**** draw torus
		push dword 24
		push dword 32
		gl_fpush 0.2
		gl_fpush 0.6
		invoke glTorus

		;**** finish
		invoke glPopMatrix
		invoke glFinish

		invoke SwapBuffers,[hDC]
	endif
 endproc


;;;;Our windows procedure
proc   WndProc, ptrdiff_t hWnd, dword uMsg, size_t wParam, size_t lParam
locals none
	if dword [argv(.uMsg)],==,WM_CLOSE
		invoke PostQuitMessage, 0	
		xor eax,eax
		
	elsif dword [argv(.uMsg)],==,WM_CREATE
		invoke SetupOpenGL,ptrdiff_t [argv(.hWnd)]
		invoke GetClientRect,ptrdiff_t [argv(.hWnd)], crect
		invoke GL_Resize,[crect+RECT.right],[crect+RECT.bottom]	

	elsif dword [argv(.uMsg)],==,WM_DESTROY
		invoke KillOpenGL,ptrdiff_t [argv(.hWnd)]
		invoke PostQuitMessage, 0	
		xor eax,eax

	elsif dword [argv(.uMsg)],==,WM_SIZE
		if dword [hRC],!=,0
			invoke GetClientRect, ptrdiff_t[argv(.hWnd)],crect
			invoke GL_Resize, [crect+RECT.right],[crect+RECT.bottom]
 		endif

 	elsif dword [argv(.uMsg)],==,WM_KEYDOWN
		if size_t [argv(.wParam)],==,VK_ESCAPE
			invoke PostQuitMessage, 0	
			xor eax,eax
		endif
	elsif dword [argv(.uMsg)],==,WM_PAINT
		invoke Sleep,1  ;; slow down plz! ( 1ms delay)
		invoke BeginPaint,ptrdiff_t [argv(.hWnd)], ps
 		invoke GL_Paint
 		invoke EndPaint, ptrdiff_t [argv(.hWnd)], ps
 	else
 		invoke DefWindowProcA, ptrdiff_t [argv(.hWnd)] , dword [argv(.uMsg)], size_t [argv(.wParam)], size_t [argv(.lParam)]
	endif
endproc


proc WinMain,ptrdiff_t hInstance, ptrdiff_t hPrevInstance, ptrdiff_t lpCmdLine, dword nCmdShow
locals none
	mov eax, ptrdiff_t [argv(.hInstance)]
	mov dword [OurWindowclass+WNDCLASSEX.hInstance], eax
	invoke LoadIconA, NULL, IDI_APPLICATION
	mov dword [OurWindowclass+WNDCLASSEX.hIcon], eax
	mov dword [OurWindowclass+WNDCLASSEX.hIconSm], eax
	invoke LoadCursorA, NULL, IDC_ARROW
	mov dword [OurWindowclass+WNDCLASSEX.hCursor], eax
	invoke RegisterClassExA,OurWindowclass
	if eax,==,0
		return
	endif
	
	;--- create and show the main program window
	invoke CreateWindowExA,NULL,Windowclassname,Windowname,WS_OVERLAPPED|WS_VISIBLE|WS_CAPTION|WS_MINIMIZEBOX |WS_MAXIMIZEBOX|WS_SYSMENU,0,0,512,512, NULL, NULL, ptrdiff_t [argv(.hInstance)], NULL
	mov    ptrdiff_t [Windowhandle], eax
	invoke ShowWindow, ptrdiff_t [Windowhandle],SW_SHOW
	invoke UpdateWindow, ptrdiff_t [Windowhandle]
	
	; -- in order to get all messages imputed by the user 
	DO
		invoke InvalidateRect,ptrdiff_t [Windowhandle] ,0,0 ; force WM_PAINT
		invoke PeekMessageA, MessageBuffer, NULL, 0, 0,PM_REMOVE      
		if eax,!=,0
			if eax,<,0
				jmp near erro
			endif
			if dword[MessageBuffer+ MSG.message],==,WM_QUIT
				jmp near finish
			else
				invoke TranslateMessage,MessageBuffer
				invoke DispatchMessageA,MessageBuffer
			endif
		endif
	WHILE eax,==,eax  ;;infinite loop  ;;DO..WHILE loop
	
	erro:
	invoke MessageBoxA, 0, "ERROR", "Sorry ...", MB_OK
	mov eax, dword[MessageBuffer+MSG.wParam]
	finish:
endproc

proc   demo15, ptrdiff_t argcount, ptrdiff_t cmdline
locals none

    invoke   GetModuleHandleA, NULL
    mov      [hInstance], eax
    invoke   WinMain, [hInstance], NULL, NULL, SW_SHOWNORMAL
    invoke   ExitProcess, NULL

endproc

[section .data]

Windowclassname: declare(NASMX_TCHAR) NASMX_TEXT("OurWindowclass"),0x0
Windowname: declare(NASMX_TCHAR) NASMX_TEXT("OpenGL torus for NASMX"),0x0


Windowhandle declare(uint_t) 0

glHalf declare(float_t) 0.5

Roll declare(uint_t) 0
rotstep declare(float_t) 1.5

light0Pos declare(float_t) 0.70,0.70,1.25,0.00

mat0_Ambient  declare(float_t) 0.01,0.01,0.01,1.0
mat0_Diffuse  declare(float_t) 0.85,0.85,0.2,1.0
mat0_Specular declare(float_t) 0.5,0.5,0.5,1.0
mat0_Shine    declare(float_t) 20.0

mat1_Ambient  declare(float_t) 0.01,0.01,0.01,1.0
mat1_Diffuse  declare(float_t) 0.05,0.07,0.8,1.0
mat1_Specular declare(float_t) 0.5,0.5,0.5,1.0
mat1_Shine    declare(float_t) 20.0


NASMX_ISTRUC MessageBuffer, MSG
	 
NASMX_IENDSTRUC

NASMX_ISTRUC OurWindowclass, 		WNDCLASSEX
	NASMX_AT cbSize,		WNDCLASSEX_size
	NASMX_AT style,			CS_VREDRAW + CS_HREDRAW
	NASMX_AT lpfnWndProc,		WndProc
	NASMX_AT hbrBackground,		COLOR_GRAYTEXT
	NASMX_AT lpszMenuName,  	0
	NASMX_AT lpszClassName,		Windowclassname
NASMX_IENDSTRUC

NASMX_ISTRUC ps, PAINTSTRUCT

NASMX_IENDSTRUC


NASMX_ISTRUC pfd, PIXELFORMATDESCRIPTOR

NASMX_IENDSTRUC


NASMX_ISTRUC  crect, RECT

NASMX_IENDSTRUC


[section .bss]

hDC: reserve(ptrdiff_t) 1 ; GDI device context
hRC: reserve(ptrdiff_t) 1 ; OpenGL rendering context
hInstance: reserve(ptrdiff_t) 1 ; Application instance
