##### Makefile #####
AS=nasm
AFLAGS=-f win64
#AFLAGS=-f win64 -dUNICODE=1
LD=GoLink
LDFLAGS		=/console /entry main
LIBS		=kernel32.dll user32.dll

# [ Suffixes ]
# Change the suffixes to match your system environment
O           = .obj
X           = .exe
ASM         = .asm
INC         = .inc
LST         = .lst

# rules
DEMO3 =	demo3$(O)

all: demo3$(X)

demo3: demo3$(X)

demo3$(X): $(DEMO3)
	$(LD) $(LDFLAGS) $(DEMO3) $(LIBS)

demo3$(O): demo3$(ASM)
	$(AS) $(AFLAGS) demo3$(ASM) -o demo3$(O) -l demo3$(LST)

clean:
	-del /f *.obj
	-del /f *.lst

cleaner:
	-del /f *.bak
	-del /f *.lst
	-del /f *.obj
	-del /f *.exe

##### End Makefile #####
