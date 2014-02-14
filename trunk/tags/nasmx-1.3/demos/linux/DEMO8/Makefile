##### Makefile #####
NAME=demo8
AS=nasm
ASFLAGS=-f elf32
LD=gcc
LDFLAGS		=-Wall -s
# LIBS		=`pkg-config --cflags --libs gtk+-2.0`
LIBS		=`pkg-config --cflags --libs gtk+-x11-2.0`
INCLUDES	=-I../../../inc/

# [ Suffixes ]
# Change the suffixes to match your system environment
O           = .o
ASM         = .asm
INC         = .inc
LST         = .lst

$(info "************  This demo needs the following packages ************")
$(info "1. libgtk2.0-dev")
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
