##### Makefile #####
NAME=demo5
AS=nasm
ASFLAGS=-f elf32
LD=gcc
LDFLAGS		=-Wall -s
LIBS		=-lc
INCLUDES	=

# [ Suffixes ]
# Change the suffixes to match your system environment
O           = .o
ASM         = .asm
INC         = .inc
LST         = .lst

OBJS = $(NAME)$(O) ddtostr$(O)

all: $(NAME)

$(NAME): $(OBJS)
	$(LD) $(LDFLAGS) -o $(NAME) $(OBJS) $(LIBS)

ddtostr$(O): ddtostr$(ASM) ddtostr$(INC)
	$(AS) $(ASFLAGS) $(INCLUDES) ddtostr$(ASM) -o ddtostr$(O)

$(NAME)$(O): $(NAME)$(ASM) ddtostr$(INC)
	$(AS) $(ASFLAGS) $(INCLUDES) $(NAME)$(ASM) -o $(NAME)$(O)

clean:
	rm *$(O) ./$(NAME)

##### End Makefile #####
