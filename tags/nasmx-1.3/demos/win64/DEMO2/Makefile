##### Makefile #####
AS=nasm
AFLAGS=-f win64
#AFLAGS=-f win64 -dUNICODE=1
LD=GoLink
LDFLAGS		=/console /entry main
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
	-del /f demo*.obj
	-del /f demo*.lst

cleaner:
	-del /f demo*.bak
	-del /f demo*.lst
	-del /f demo*.obj
	-del /f demo*.exe

##### End Makefile #####
