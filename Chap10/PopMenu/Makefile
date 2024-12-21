# Makefile for PopMenu

CC = cc
CFLAGS = -Wall
LIBS = -lgdi32 -luser32 -lkernel32
RC = windres

PopMenu.exe: PopMenu.o PopMenu_res.o
	$(CC) -o $@ $^ $(LIBS)

PopMenu.o: PopMenu.c
	$(CC) $(CFLAGS) -c $<

PopMenu_res.o: PopMenu.rc Resource.h
	$(RC) $< $@

clean:
	rm -f *.exe *.o
