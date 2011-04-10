##### Makefile #####

NAME = demo1

AS = nasm
ASFLAGS =-f elf32
LD = gcc
LDFLAGS =-Wall -s
X11_LIBS = -L/usr/X11R6/lib -lX11


$(NAME): $(NAME).o
	$(LD) $(X11_LIBS) $(LDFLAGS) -o $(NAME) $(NAME).o

$(NAME).o: $(NAME).asm
	$(AS) $(ASFLAGS) $(NAME).asm -o $(NAME).o

clean:
	rm *.o ./$(NAME)
##### End Makefile #####


