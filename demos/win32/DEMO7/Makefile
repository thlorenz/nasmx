##### Makefile #####
AS=nasm
AFLAGS=-f win32
#AFLAGS=-f win32 -dUNICODE=1
LD=GoLink
LDFLAGS		=/entry _main
LIBS		=kernel32.dll user32.dll

# [ Suffixes ]
# Change the suffixes to match your system environment
O           = .obj
X           = .exe
ASM         = .asm
INC         = .inc
LST         = .lst
RCX         = .rc
# rules
DEMO7 =	demo7$(O)

all: demo7$(X)

demo7: demo7$(X)

demo7$(X): $(DEMO7)
	$(LD) $(LDFLAGS) $(DEMO7) $(LIBS)

demo7$(O): demo7$(ASM)
	$(AS) $(AFLAGS) demo7$(ASM) -o demo7$(O) -l demo7$(LST)

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
