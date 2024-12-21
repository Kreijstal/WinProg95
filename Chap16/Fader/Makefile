CFLAGS = -Wall -Wextra
LIBS = -lgdi32 -luser32 -lkernel32

all: Fader.exe

Fader.exe: Fader.o
	$(CC) -o Fader.exe Fader.o $(LIBS)

clean:
	rm -f *.o *.exe
