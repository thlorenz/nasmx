##### Makefile #####
AS=nasm
AFLAGS=-f win32
#AFLAGS=-f win32 -dUNICODE=1
LD=GoLink
LDFLAGS		=/console /mix /entry _main
#LDFLAGS		=/entry _main -debug coff
LIBS		=msvcrt.dll

# [ Suffixes ]
# Change the suffixes to match your system environment
O           = .obj
X           = .exe
ASM         = .asm
INC         = .inc
LST         = .lst

# rules
DEMO14=	demo14$(O)

all: demo14$(X)

demo14: demo14$(X)

demo14$(X): $(DEMO14)
	$(LD) $(LDFLAGS) $(DEMO14) $(LIBS)

demo14$(O): demo14$(ASM)
	$(AS) $(AFLAGS) demo14$(ASM) -o demo14$(O) -l demo14$(LST)

clean:
	-del /F demo*.obj
	-del /F demo*.lst

cleaner:
	-del /F demo*.bak
	-del /F demo*.lst
	-del /F demo*.obj
	-del /F demo*.exe

##### End Makefile #####
