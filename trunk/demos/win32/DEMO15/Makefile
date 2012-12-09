##### Makefile #####
AS=nasm
AFLAGS=-f win32
#AFLAGS=-f win32 -dUNICODE=1
LD=GoLink
LDFLAGS		=/entry _main
#LDFLAGS		=/entry _main -debug coff
LIBS		=kernel32.dll user32.dll gdi32.dll opengl32.dll

# [ Suffixes ]
# Change the suffixes to match your system environment
O           = .obj
X           = .exe
ASM         = .asm
INC         = .inc
LST         = .lst

# rules
DEMO15=	demo15$(O)

all: demo15$(X)

demo15: demo15$(X)

demo15$(X): $(DEMO15)
	$(LD) $(LDFLAGS) $(DEMO15) $(LIBS)

demo15$(O): demo15$(ASM)
	$(AS) $(AFLAGS) demo15$(ASM) -o demo15$(O) -l demo15$(LST)

clean:
	-del /F demo*.obj
	-del /F demo*.lst

cleaner:
	-del /F demo*.bak
	-del /F demo*.lst
	-del /F demo*.obj
	-del /F demo*.exe

##### End Makefile #####
