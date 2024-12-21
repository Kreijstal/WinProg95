# Makefile for PoePoem

CC = gcc
CFLAGS = -Wall
LIBS = -lgdi32 -luser32 -lkernel32
RC = windres

PoePoem.exe: PoePoem.o PoePoem_res.o
	$(CC) -o $@ $^ $(LIBS)

PoePoem.o: PoePoem.c
	$(CC) $(CFLAGS) -c $<

PoePoem_res.o: PoePoem.rc Resource.h PoePoem.ico
	$(RC) $< $@

clean:
	rm -f *.exe *.o
