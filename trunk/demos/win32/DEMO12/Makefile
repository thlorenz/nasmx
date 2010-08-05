##### Makefile #####
AS=nasm
AFLAGS=-f win32
LD=GoLink
LDFLAGS		=/console /entry _main
LIBS		=kernel32.dll

# [ Suffixes ]
# Change the suffixes to match your system environment
O           = .obj
X           = .exe
ASM         = .asm
INC         = .inc
LST         = .lst
RCX         = .rc
# rules
DEMO12 =	demo12$(O)

all: demo12$(X)

demo12: demo12$(X)

demo12$(X): $(DEMO12)
	$(LD) $(LDFLAGS) $(DEMO12) $(LIBS)

demo12$(O): demo12$(ASM)
	$(AS) $(AFLAGS) demo12$(ASM) -o demo12$(O)

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
