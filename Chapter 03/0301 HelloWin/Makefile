# Makefile for HelloWin using MSYS2/MinGW

CC = cc
CFLAGS = -Wall -Wextra -D_UNICODE -DUNICODE
LDFLAGS = -mwindows -lwinmm

TARGET = HelloWin.exe
SRC = HelloWin.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
