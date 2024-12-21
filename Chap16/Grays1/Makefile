CFLAGS = -Wall -Wextra
LIBS = -lgdi32 -luser32 -lkernel32

all: Grays1.exe

Grays1.exe: Grays1.o
	$(CC) -o Grays1.exe Grays1.o $(LIBS)

clean:
	rm -f *.o *.exe
