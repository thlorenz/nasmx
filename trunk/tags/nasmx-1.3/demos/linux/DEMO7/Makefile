##### Makefile #####
NAME=demo7
AS=nasm
ASFLAGS=-f elf32
LD=gcc
LDFLAGS		=-Wall -s
LIBS		=-lc -lglut
INCLUDES	=-I../../../inc/

# [ Suffixes ]
# Change the suffixes to match your system environment
O           = .o
ASM         = .asm
INC         = .inc
LST         = .lst

$(info "************  Th‎is demo needs the following packages ************")
$(info "1. mesa-common-dev")
$(info "2. freeglut3-dev")
$(info "*****************************************************************")

OBJS = $(NAME)$(O)

all: $(NAME)

$(NAME): $(OBJS)
	$(LD) $(LDFLAGS) -o $(NAME) $(OBJS) $(LIBS)

$(NAME)$(O): $(NAME)$(ASM)
	$(AS) $(ASFLAGS) $(INCLUDES) $(NAME)$(ASM) -o $(NAME)$(O)

clean:
	rm *$(O) ./$(NAME)

##### End Makefile #####
