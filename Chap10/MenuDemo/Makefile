# Makefile for MenuDemo

CC = gcc
CFLAGS = -Wall
LIBS = -lgdi32 -luser32 -lkernel32
RC = windres

MenuDemo.exe: MenuDemo.o MenuDemo_res.o
	$(CC) -o $@ $^ $(LIBS)

MenuDemo.o: MenuDemo.c
	$(CC) $(CFLAGS) -c $<

MenuDemo_res.o: MenuDemo.rc Resource.h
	$(RC) $< $@

clean:
	rm -f *.exe *.o
