##### Makefile #####
AS=nasm
AFLAGS=-f win64
#AFLAGS=-f win64 -dUNICODE=1
LD=GoLink
LDFLAGS		=/console /entry main
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
DEMO4=	demo4$(O)

all: demo4$(X)

demo4: demo4$(X)

demo4$(X): $(DEMO4)
	$(LD) $(LDFLAGS) $(DEMO4) $(LIBS)

demo4$(O): demo4$(ASM)
	$(AS) $(AFLAGS) demo4$(ASM) -o demo4$(O) -l demo4$(LST)

clean:
	-del /F demo*.obj
	-del /F demo*.lst

cleaner:
	-del /F demo*.bak
	-del /F demo*.lst
	-del /F demo*.obj
	-del /F demo*.exe

##### End Makefile #####
