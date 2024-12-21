CFLAGS = -Wall -Wextra
LIBS = -lgdi32 -luser32 -lkernel32

all: Grays2.exe

Grays2.exe: Grays2.o
	$(CC) -o Grays2.exe Grays2.o $(LIBS)

clean:
	rm -f *.o *.exe
