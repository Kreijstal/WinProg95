# Makefile for SysMets2 using MSYS2/MinGW

CC = gcc
CFLAGS = -Wall -Wextra -D_UNICODE -DUNICODE
LDFLAGS = -mwindows

TARGET = SysMets2.exe
SRC = SysMets2.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
