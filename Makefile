TARGET = x86_64
ASM = nasm
LINKER = ld

CC = clang
CFLAGS = -std=c11 -O3 -g -Wall -Wextra -Wpedantic -Wstrict-aliasing

SRC = $(wildcard src/*.c) $(wildcard src/**/*.c)  $(wildcard src/**/**/*.c)  $(wildcard src/**/**/**/*.c) 
OBJ = $(SRC:.c=.o)
BIN = bin

.PHONY: all clean main

all: dirs main

main: $(OBJ)
	$(CC) -o $(BIN)/main $^ $(LDFLAGS)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

dirs:
	mkdir -p ./$(BIN)

run:
	./bin/main	

clean:
	rm -rf $(BIN) $(OBJ)
