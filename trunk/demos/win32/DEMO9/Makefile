##### Makefile #####
AS=nasm
AFLAGS=-f win32
LD=GoLink
LDFLAGS		=/entry _main
LDFLAGS_SO	=/dll /export _Say /entry _main
LIBS		=DEMO9B.dll kernel32.dll user32.dll
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
DEMO9B      = demo9b$(O)
DEMO9       = demo9$(O)

all: demo9b$(SO) demo9$(X)

demo9b: demo9b$(SO)
demo9: demo9$(X)

demo9b$(SO): $(DEMO9B)
	$(LD) $(LDFLAGS_SO) $(DEMO9B) $(LIBS_SO)

demo9$(X): $(DEMO9) $(DEMO9B)
	$(LD) $(LDFLAGS) $(DEMO9) $(LIBS)

demo9b$(O): demo9b$(ASM)
	$(AS) $(AFLAGS) demo9b$(ASM) -o demo9b$(O)

demo9$(O): demo9$(ASM)
	$(AS) $(AFLAGS) demo9$(ASM) -o demo9$(O)


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
