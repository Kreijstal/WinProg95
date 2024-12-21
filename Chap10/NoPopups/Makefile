# Makefile for NoPopups

CC = gcc
CFLAGS = -Wall
LIBS = -lgdi32 -luser32 -lkernel32
RC = windres

NoPopups.exe: NoPopups.o NoPopups_res.o
	$(CC) -o $@ $^ $(LIBS)

NoPopups.o: NoPopups.c
	$(CC) $(CFLAGS) -c $<

NoPopups_res.o: NoPopups.rc Resource.h
	$(RC) $< $@

clean:
	rm -f *.exe *.o
