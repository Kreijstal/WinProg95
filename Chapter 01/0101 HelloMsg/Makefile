# Makefile for HelloMsg using MSYS2/MinGW

CC = cc
CFLAGS = -Wall -Wextra
LDFLAGS = -mwindows

TARGET = HelloMsg.exe
SRC = HelloMsg.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(TARGET)
