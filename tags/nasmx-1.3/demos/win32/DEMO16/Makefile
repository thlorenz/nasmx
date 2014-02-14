##### Makefile #####
AS=nasm
AFLAGS=-f win32 -I ..\\..\\..\\inc\\
#AFLAGS=-f win32 -dUNICODE=1
LD=GoLink
LDFLAGS		=/entry _main
#LDFLAGS		=/entry _main -debug coff
LIBS		="libgtk-win32-2.0-0.dll" "libgobject-2.0-0.dll"

# [ Suffixes ]
# Change the suffixes to match your system environment
O           = .obj
X           = .exe
ASM         = .asm
INC         = .inc
LST         = .lst
$(info "This Demo requires GTK2.0 Runtime dlls")
$(info "Download from http://www.gtk.org/download/win32.php")
$(info "All in One Bundle -  http://ftp.gnome.org/pub/gnome/binaries/win32/gtk+/2.24/gtk+-bundle_2.24.10-20120208_win32.zip")
# rules
DEMO16=	demo16$(O)

all: demo16$(X)

demo16: demo16$(X)

demo16$(X): $(DEMO16)
	$(LD) $(LDFLAGS) $(DEMO16) $(LIBS)

demo16$(O): demo16$(ASM)
	$(AS) $(AFLAGS) demo16$(ASM) -o demo16$(O) -l demo16$(LST)

clean:
	-del /F demo*.obj
	-del /F demo*.lst

cleaner:
	-del /F demo*.bak
	-del /F demo*.lst
	-del /F demo*.obj
	-del /F demo*.exe

##### End Makefile #####
