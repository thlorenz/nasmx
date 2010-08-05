##### Makefile #####
AS=nasm
AFLAGS=-f win32
#AFLAGS=-f win32 -dUNICODE=1
LD=GoLink
LDFLAGS		=/entry _main
LIBS		=kernel32.dll user32.dll
RC=GoRC
RCFLAGS     =/r=DEMO5.res
# [ Suffixes ]
# Change the suffixes to match your system environment
O           = .obj
X           = .exe
ASM         = .asm
INC         = .inc
LST         = .lst
RES         = .res
RCX         = .rc
# rules
DEMO5 =	demo5$(O) demo5$(RES)

all: demo5$(X)

demo5: demo5$(X)

demo5$(X): $(DEMO5)
	$(LD) $(LDFLAGS) $(DEMO5) $(LIBS)

demo5$(O): demo5$(ASM)
	$(AS) $(AFLAGS) demo5$(ASM) -o demo5$(O) -l demo5$(LST)

demo5$(RES) : demo5$(RCX)
	$(RC) $(RCFLAGS) demo5$(RCX)
clean:
	-del /f *.obj
	-del /f *.res
	-del /f *.lst

cleaner:
	-del /f *.bak
	-del /f *.lst
	-del /f *.obj
	-del /f *.res
	-del /f *.exe

##### End Makefile #####
