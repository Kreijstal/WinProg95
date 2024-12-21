# Makefile for MDIDemo

PROGRAM = MDIDemo
RC = windres

SOURCES = $(PROGRAM).c
OBJECTS = $(SOURCES:.c=.o) $(PROGRAM)_res.o

CFLAGS = -Wall -Wextra
LDLIBS = -lgdi32 -luser32 -lkernel32 -lcomctl32

all: $(PROGRAM)

$(PROGRAM): $(OBJECTS)
	$(CC) -o $@ $(OBJECTS) $(LDLIBS)

$(PROGRAM)_res.o: $(PROGRAM).rc Resource.h
	$(RC) -I. $< -O coff -o $@

clean:
	rm -f $(PROGRAM) $(OBJECTS)
