CFLAGS = -Wall -Wextra
LIBS = -lgdi32 -luser32 -lkernel32

all: Bounce2.exe

Bounce2.exe: Bounce2.o PalAnim.o
	$(CC) -o Bounce2.exe Bounce2.o PalAnim.o $(LIBS)

clean:
	rm -f *.o *.exe
