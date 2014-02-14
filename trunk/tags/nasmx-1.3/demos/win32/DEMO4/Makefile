##### Makefile #####
AS=nasm
AFLAGS=-f win32
#AFLAGS=-f win32 -dUNICODE=1
LD=GoLink
LDFLAGS		=/entry _main
LIBS		=kernel32.dll user32.dll
RC=GoRC
RCFLAGS     =/r=DEMO4.res
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
DEMO4 =	demo4$(O) demo4$(RES)

all: demo4$(X)

demo4: demo4$(X)

demo4$(X): $(DEMO4)
	$(LD) $(LDFLAGS) $(DEMO4) $(LIBS)

demo4$(O): demo4$(ASM)
	$(AS) $(AFLAGS) demo4$(ASM) -o demo4$(O) -l demo4$(LST)

demo4$(RES) : demo4$(RCX)
	$(RC) $(RCFLAGS) demo4$(RCX)
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
