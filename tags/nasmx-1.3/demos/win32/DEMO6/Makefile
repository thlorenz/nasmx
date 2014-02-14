##### Makefile #####
AS=nasm
#AFLAGS=-f win32
AFLAGS=-f win32 -dUNICODE=1
LD=GoLink
LDFLAGS		=/entry _main
LIBS		=kernel32.dll user32.dll
RC=GoRC
RCFLAGS     =/r=DEMO6.res
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
DEMO6 =	demo6$(O) demo6$(RES)

all: demo6$(X)

demo6: demo6$(X)

demo6$(X): $(DEMO6)
	$(LD) $(LDFLAGS) $(DEMO6) $(LIBS)

demo6$(O): demo6$(ASM)
	$(AS) $(AFLAGS) demo6$(ASM) -o demo6$(O) -l demo6$(LST)

demo6$(RES) : demo6$(RCX)
	$(RC) $(RCFLAGS) demo6$(RCX)
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
