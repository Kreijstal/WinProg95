# Makefile for IconDemo

CC = cc
CFLAGS = -Wall
LIBS = -lgdi32 -luser32 -lkernel32
RC = windres

IconDemo.exe: IconDemo.o IconDemo_res.o
	$(CC) -o $@ $^ $(LIBS)

IconDemo.o: IconDemo.c
	$(CC) $(CFLAGS) -c $<

IconDemo_res.o: IconDemo.rc Resource.h IconDemo.ico
	$(RC) $< $@

clean:
	rm -f *.exe *.o
