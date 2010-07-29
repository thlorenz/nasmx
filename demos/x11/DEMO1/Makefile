##### Makefile #####
X11_LIBS = -L/usr/X11R6/lib -lX11


demo1: demo1.o
	gcc $(X11_LIBS) -Wall -s -o demo1 demo1.o

demo1.o: demo1.asm
	nasm -f elf demo1.asm

clean:
	rm *.o ./demo1
##### End Makefile #####


