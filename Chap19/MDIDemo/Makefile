# Makefile for MDIDemo

PROGRAM = MDIDemo

SOURCES = $(PROGRAM).c
OBJECTS = $(SOURCES:.c=.o) $(PROGRAM)_res.o
RES = $(PROGRAM).res

CFLAGS = -Wall -Wextra
LDLIBS = -lgdi32 -luser32 -lkernel32 -lcomctl32

all: $(PROGRAM)

$(PROGRAM): $(OBJECTS)
	$(CC) -o $@ $(OBJECTS) $(LDLIBS)

$(PROGRAM)_res.o: $(RES)
	windres $< $@

%.res: %.rc resource.h
	windres -i $< -o $@

clean:
	rm -f $(PROGRAM) $(OBJECTS) $(RES)
