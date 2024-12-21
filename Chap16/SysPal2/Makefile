CFLAGS = -Wall -Wextra
LIBS = -lgdi32 -luser32 -lkernel32

all: SysPal2.exe

SysPal2.exe: SysPal2.o
	$(CC) -o SysPal2.exe SysPal2.o $(LIBS)

clean:
	rm -f *.o *.exe
