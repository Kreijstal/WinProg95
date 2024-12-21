CFLAGS = -Wall -Wextra
LIBS = -lgdi32 -luser32 -lkernel32

all: Tunnel.exe

Tunnel.exe: Tunnel.o
	$(CC) -o Tunnel.exe Tunnel.o $(LIBS)

clean:
	rm -f *.o *.exe
