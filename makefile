SRCS = kernel/kernel.c kernel/proc/proc.cc kernel/utils.c
OBJS = $(SRCS:.c=.o)

OUTPUT = kernel.bin

LD = ld
LDFLAGS = -T linker.ld -m elf_i386

CC = gcc
CFLAGS = -m32 -ffreestanding -Wall -Wextra

all:$(OUTPUT)

$(OUTPUT): $(OBJS)
	$(LD) $(LDFLAGS) -o $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OUTPUT)

