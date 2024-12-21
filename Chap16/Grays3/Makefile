CFLAGS = -Wall -Wextra
LIBS = -lgdi32 -luser32 -lkernel32

all: Grays3.exe

Grays3.exe: Grays3.o
	$(CC) -o Grays3.exe Grays3.o $(LIBS)

clean:
	rm -f *.o *.exe
