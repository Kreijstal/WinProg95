# Makefile for DevCaps2 project using $(CC) and windres

# Compiler and linker settings
CC = cc
RC = windres

# Compiler flags
CFLAGS = -Wall -g

# Linker flags
LFLAGS = -mwindows -lwinspool

# Project name
TARGET = DevCaps2.exe

# Source files
SRCS = DevCaps2.c
RES_SCRIPT = DevCaps2.rc

# Object files
OBJS = $(SRCS:.c=.o) DevCaps2.res

# Header files
HEADERS = Resource.h

# Main target
all: $(TARGET)

# Linking
$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(LFLAGS)

# Compiling
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Resource compilation
%.res: %.rc $(HEADERS)
	$(RC) -O coff $< -o $@

# Clean rule
clean:
	rm -f $(OBJS) $(RES_OBJ) $(TARGET)

.PHONY: all clean
