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

# rules
DEMO1 =	demo1$(O)

all: demo1$(X)

demo1: demo1$(X)

demo1$(X): $(DEMO1)
	$(LD) $(LDFLAGS) $(DEMO1) $(LIBS)

demo1$(O): demo1$(ASM)
	$(AS) $(AFLAGS) demo1$(ASM) -o demo1$(O) -l demo1$(LST)

clean:
	-del /f *.obj
	-del /f *.lst

cleaner:
	-del /f *.bak
	-del /f *.lst
	-del /f *.obj
	-del /f *.exe

##### End Makefile #####
