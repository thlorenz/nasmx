##### Makefile #####
AS=nasm
AFLAGS=-f win32
#AFLAGS=-f win32 -dUNICODE=1
LD=GoLink
LDFLAGS		=/entry _main
#LDFLAGS		=/entry _main -debug coff
LIBS		=kernel32.dll user32.dll

# [ Suffixes ]
# Change the suffixes to match your system environment
O           = .obj
X           = .exe
ASM         = .asm
INC         = .inc
LST         = .lst

# rules
DEMO13 =	demo13$(O)

all: demo13$(X)

demo13: demo13$(X)

demo13$(X): $(DEMO13)
	$(LD) $(LDFLAGS) $(DEMO13) $(LIBS)

demo13$(O): demo13$(ASM)
	$(AS) $(AFLAGS) demo13$(ASM) -o demo13$(O)

clean:
	-del /F demo*.obj
	-del /F demo*.lst

cleaner:
	-del /F demo*.bak
	-del /F demo*.lst
	-del /F demo*.obj
	-del /F demo*.exe

##### End Makefile #####
