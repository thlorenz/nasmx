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
DEMO8 =	demo8$(O)

all: demo8$(X)

demo8: demo8$(X)

demo8$(X): $(DEMO8)
	$(LD) $(LDFLAGS) $(DEMO8) $(LIBS)

demo8$(O): demo8$(ASM)
	$(AS) $(AFLAGS) demo8$(ASM) -o demo8$(O) -l demo8$(LST)

clean:
	-del /F demo*.obj
	-del /F demo*.res
	-del /F demo*.lst

cleaner:
	-del /F demo*.bak
	-del /F demo*.lst
	-del /F demo*.obj
	-del /F demo*.res
	-del /F demo*.exe

##### End Makefile #####
