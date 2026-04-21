CC = gcc
CFLAGS = -Wall -O2

SRC = src/main.c \
      src/core/engine.c \
      src/config/config.c \
      src/env/env_check.c \
      src/scanner/scanner.c \
      src/generator/generator.c

OUT = compiler

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)