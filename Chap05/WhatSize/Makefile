CC = gcc
CFLAGS = -o $@ -Wall -mwindows 
TARGET = WhatSize.exe
OBJS = WhatSize.o

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS)

clean:
	rm -f $(TARGET) $(OBJS)
