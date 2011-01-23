##### Makefile #####
AS=nasm
AFLAGS=-f win64
#AFLAGS=-f win32
LD=GoLink
LDFLAGS		=/entry main
#LDFLAGS		=/mix /entry _main
LIBS		=kernel32.dll user32.dll

# [ Suffixes ]
# Change the suffixes to match your system environment
O           = .obj
X           = .exe
ASM         = .asm
INC         = .inc
LST         = .lst

# rules
DEMO5 =	demo5$(O)

all: demo5$(X)

demo5: demo5$(X)

demo5$(X): $(DEMO5)
	$(LD) $(LDFLAGS) $(DEMO5) $(LIBS)

demo5$(O): demo5$(ASM)
	$(AS) $(AFLAGS) demo5$(ASM) -o demo5$(O) -l demo5$(LST)

clean:
	-del /f demo*.obj
	-del /f demo*.lst

cleaner:
	-del /f demo*.bak
	-del /f demo*.lst
	-del /f demo*.obj
	-del /f demo*.exe

##### End Makefile #####
