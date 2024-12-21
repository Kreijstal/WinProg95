# Makefile for SysMets3 using MSYS2/MinGW

CC = cc
CFLAGS = -Wall -Wextra -D_UNICODE -DUNICODE -I../SysMets1
LDFLAGS = -mwindows

TARGET = SysMets3.exe
SRC = SysMets3.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
