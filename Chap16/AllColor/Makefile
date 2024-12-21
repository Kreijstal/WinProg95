CFLAGS = -Wall -Wextra
LIBS = -lgdi32 -luser32 -lkernel32

all: AllColor.exe

AllColor.exe: AllColor.o
	$(CC) -o AllColor.exe AllColor.o $(LIBS)

clean:
	rm -f *.o *.exe
