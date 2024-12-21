# Makefile for PoorMenu

CC = cc
CFLAGS = -Wall
LIBS = -lgdi32 -luser32 -lkernel32

PoorMenu.exe: PoorMenu.o
	$(CC) -o $@ $^ $(LIBS)

PoorMenu.o: PoorMenu.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.exe *.o
