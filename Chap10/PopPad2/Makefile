# Makefile for PopPad2

CC = gcc
CFLAGS = -Wall
LIBS = -lgdi32 -luser32 -lkernel32
RC = windres

PopPad2.exe: PopPad2.o PopPad2_res.o
	$(CC) -o $@ $^ $(LIBS)

PopPad2.o: PopPad2.c
	$(CC) $(CFLAGS) -c $<

PopPad2_res.o: PopPad2.rc Resource.h PopPad2.ico
	$(RC) $< $@

clean:
	rm -f *.exe *.o
