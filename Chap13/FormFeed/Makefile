# Makefile for FormFeed project using $(CC) and windres

# Compiler and linker settings
CC = cc
WINDRES = windres

# Compiler flags
CFLAGS = -Wall -g

# Linker flags
LFLAGS = -mwindows

# Project name
TARGET = FormFeed.exe

# Source files
SRCS = FormFeed.c GetPrnDC.c

# Object files
OBJS = $(SRCS:.c=.o)

# Header files
HEADERS = Print.h

# Main target
all: $(TARGET)

# Linking
$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(LFLAGS)

# Compiling
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
