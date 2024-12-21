# Makefile for ScrnSize using MSYS2/MinGW

CC = gcc
CFLAGS = -Wall -Wextra -D_UNICODE -DUNICODE
LDFLAGS = -mwindows

TARGET = ScrnSize.exe
SRC = ScrnSize.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
