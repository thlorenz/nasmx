##### Makefile #####
AS=nasm
AFLAGS=-f win64
#AFLAGS=-f win64 -dUNICODE=1
LD=GoLink
LDFLAGS		=/entry main
#LDFLAGS		=/entry main -debug coff
LIBS		=kernel32.dll user32.dll gdi32.dll

# [ Suffixes ]
# Change the suffixes to match your system environment
O           = .obj
X           = .exe
ASM         = .asm
INC         = .inc
LST         = .lst

# rules
DEMO6=	demo6$(O)

all: demo6$(X)

demo6: demo6$(X)

demo6$(X): $(DEMO6)
	$(LD) $(LDFLAGS) $(DEMO6) $(LIBS)

demo6$(O): demo6$(ASM)
	$(AS) $(AFLAGS) demo6$(ASM) -o demo6$(O) -l demo6$(LST)

clean:
	-del /F demo6.obj
	-del /F demo6.lst

cleaner:
	-del /F demo6.bak
	-del /F demo6.lst
	-del /F demo6.obj
	-del /F demo6.exe

##### End Makefile #####
