##### Makefile #####
NAME=demo5
AS=nasm
ASFLAGS=-f elf64
LD=gcc
LDFLAGS		=-Wall -s
LIBS		=-lX11
INCLUDES	=-I../../../inc/
# [ Suffixes ]
# Change the suffixes to match your system environment
O           = .o
ASM         = .asm
INC         = .inc
LST         = .lst



OBJS = $(NAME)$(O)

ifneq ($(shell uname -i), x86_64)
      
$(info "***********************  WARNING  *******************************")
$(info "This program will run only on X86_64 platform.                   ")
$(info "*****************************************************************")

endif

all: $(NAME)

$(NAME): $(OBJS)
	$(LD) $(LDFLAGS) -o $(NAME) $(OBJS) $(LIBS)

$(NAME)$(O): $(NAME)$(ASM)
	$(AS) $(ASFLAGS) $(INCLUDES) $(NAME)$(ASM) -o $(NAME)$(O)

clean:
	rm *$(O) ./$(NAME)

##### End Makefile #####
