CFLAGS = -Wall -Wextra
LIBS = -lgdi32 -luser32 -lkernel32

all: Pipes.exe

Pipes.exe: Pipes.o
	$(CC) -o Pipes.exe Pipes.o $(LIBS)

clean:
	rm -f *.o *.exe
