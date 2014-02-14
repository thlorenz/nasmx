##### Makefile #####
AS=nasm
AFLAGS=-f win32
LD=GoLink
LDFLAGS		=/console /mix /entry _main
LIBS		=msvcrt.dll

# [ Suffixes ]
# Change the suffixes to match your system environment
O           = .obj
X           = .exe
ASM         = .asm
INC         = .inc
LST         = .lst
RCX         = .rc
# rules
DEMO11 =	demo11$(O)

all: demo11$(X)

demo11: demo11$(X)

demo11$(X): $(DEMO11)
	$(LD) $(LDFLAGS) $(DEMO11) $(LIBS)

demo11$(O): demo11$(ASM)
	$(AS) $(AFLAGS) demo11$(ASM) -o demo11$(O)

clean:
	-del /F demo*.obj
	-del /F demo*.res

cleaner:
	-del /F demo*.bak
	-del /F demo*.lst
	-del /F demo*.obj
	-del /F demo*.res
	-del /F demo*.exe

##### End Makefile #####
