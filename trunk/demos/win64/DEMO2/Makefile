##### Makefile #####
AS=nasm
AFLAGS=-f win64
#AFLAGS=-f win64 -dUNICODE=1
LD=GoLink
LDFLAGS		=/entry main
LIBS		=msvcrt.dll

# [ Suffixes ]
# Change the suffixes to match your system environment
O           = .obj
X           = .exe
ASM         = .asm
INC         = .inc
LST         = .lst

# rules
DEMO2 =	demo2$(O)

all: demo2$(X)

demo2: demo2$(X)

demo2$(X): $(DEMO2)
	$(LD) $(LDFLAGS) $(DEMO2) $(LIBS)

demo2$(O): demo2$(ASM)
	$(AS) $(AFLAGS) demo2$(ASM) -o demo2$(O) -l demo2$(LST)

clean:
	-del /f *.obj
	-del /f *.lst

cleaner:
	-del /f *.bak
	-del /f *.lst
	-del /f *.obj
	-del /f *.exe

##### End Makefile #####
