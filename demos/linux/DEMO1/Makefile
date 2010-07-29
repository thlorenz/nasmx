##### Makefile #####
demo1: demo1.o
	gcc -Wall -s -o demo1 demo1.o

demo1.o: demo1.asm
	nasm -f elf demo1.asm

clean:
	rm *.o ./demo1
##### End Makefile #####


