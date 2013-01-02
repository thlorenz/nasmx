##### Makefile #####
AS=nasm
AFLAGS=-f win32
#AFLAGS=-f win32 -dUNICODE=1
LD=GoLink
LDFLAGS		=/entry _main
#LDFLAGS		=/entry _main -debug coff
LIBS		=kernel32.dll user32.dll gdi32.dll

# [ Suffixes ]
# Change the suffixes to match your system environment
O           = .obj
X           = .exe
ASM         = .asm
INC         = .inc
LST         = .lst

# rules
DEMO17=	demo17$(O)

all: demo17$(X)

demo17: demo17$(X)

demo17$(X): $(DEMO17)
	$(LD) $(LDFLAGS) $(DEMO17) $(LIBS)

demo17$(O): demo17$(ASM)
	$(AS) $(AFLAGS) demo17$(ASM) -o demo17$(O) -l demo17$(LST)

clean:
	-del /F demo*.obj
	-del /F demo*.lst

cleaner:
	-del /F demo*.bak
	-del /F demo*.lst
	-del /F demo*.obj
	-del /F demo*.exe

##### End Makefile #####
