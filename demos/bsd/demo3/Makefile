##### Makefile #####
NAME=demo3
AS=nasm
ASFLAGS=-f elf32 -dFREEBSD
LD=gcc
LDFLAGS		=-m32 -Wall -s
LIBS		=-lc

# [ Suffixes ]
# Change the suffixes to match your system environment
O           = .o
ASM         = .asm
INC         = .inc
LST         = .lst

OBJS = $(NAME)$(O)

all: $(NAME)

$(NAME): $(OBJS)
	$(LD) $(LDFLAGS) -o $(NAME) $(OBJS) $(LIBS)

$(NAME)$(O): $(NAME)$(ASM)
	$(AS) $(ASFLAGS) $(NAME)$(ASM) -o $(NAME)$(O)

clean:
	rm *$(O) ./$(NAME)

##### End Makefile #####
