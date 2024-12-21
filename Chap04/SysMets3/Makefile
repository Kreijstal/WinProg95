# Makefile for SysMets3 using MSYS2/MinGW

CC = gcc
CFLAGS = -Wall -Wextra -D_UNICODE -DUNICODE
LDFLAGS = -mwindows

TARGET = SysMets3.exe
SRC = SysMets3.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
