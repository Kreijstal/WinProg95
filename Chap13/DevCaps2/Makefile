# Makefile for DevCaps2 project using $(CC) and windres

# Compiler and linker settings
CC = gcc
WINDRES = windres

# Compiler flags
CFLAGS = -Wall -g

# Linker flags
LFLAGS = -mwindows

# Project name
TARGET = DevCaps2.exe

# Source files
SRCS = DevCaps2.c
RES_SCRIPT = DevCaps2.rc
RES_OBJ = DevCaps2_res.o

# Object files
OBJS = $(SRCS:.c=.o)

# Header files
HEADERS = Resource.h

# Main target
all: $(TARGET)

# Linking
$(TARGET): $(OBJS) $(RES_OBJ)
	$(CC) $(LFLAGS) -o $@ $^

# Compiling
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Resource compilation
$(RES_OBJ): $(RES_SCRIPT) $(HEADERS)
	$(WINDRES) -O coff $< $@

# Clean rule
clean:
	rm -f $(OBJS) $(RES_OBJ) $(TARGET)

.PHONY: all clean
