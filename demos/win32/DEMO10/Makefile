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
DEMO10 =	demo10$(O)

all: demo10$(X)

demo10: demo10$(X)

demo10$(X): $(DEMO10)
	$(LD) $(LDFLAGS) $(DEMO10) $(LIBS)

demo10$(O): demo10$(ASM)
	$(AS) $(AFLAGS) demo10$(ASM) -o demo10$(O)

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
