##### Makefile #####
AS=nasm
#AFLAGS=-f win32
AFLAGS=-f win32 -dUNICODE=1
LD=GoLink
LDFLAGS		=/entry _main
LDFLAGS_SO	=/dll /export Say /entry _main
LIBS		=DEMO9.dll kernel32.dll user32.dll
LIBS_SO		=kernel32.dll user32.dll

# [ Suffixes ]
# Change the suffixes to match your system environment
O           = .obj
SO          = .dll
X           = .exe
ASM         = .asm
INC         = .inc
LST         = .lst
RCX         = .rc
# rules
DEMO9 =	demo9$(O)
DEMO9B =	demo9b$(O)

all: demo9$(SO) demo9b$(X)

demo9: demo9$(SO)
demo9b: demo9b$(X)

demo9$(SO): $(DEMO9)
	$(LD) $(LDFLAGS_SO) $(DEMO9) $(LIBS_SO)

demo9b$(X): $(DEMO9B) $(DEMO9)
	$(LD) $(LDFLAGS) $(DEMO9B) $(LIBS)

demo9$(O): demo9$(ASM)
	$(AS) $(AFLAGS) demo9$(ASM) -o demo9$(O)

demo9b$(O): demo9b$(ASM)
	$(AS) $(AFLAGS) demo9b$(ASM) -o demo9b$(O)

clean:
	-del /f demo*.obj
	-del /f demo*.res

cleaner:
	-del /f demo*.bak
	-del /f demo*.lst
	-del /f demo*.obj
	-del /f demo*.res
	-del /f demo*.exe
	-del /f demo*.dll

##### End Makefile #####
