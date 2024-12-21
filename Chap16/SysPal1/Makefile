CFLAGS = -Wall -Wextra
LIBS = -lgdi32 -luser32 -lkernel32

all: SysPal1.exe

SysPal1.exe: SysPal1.o
	$(CC) -o SysPal1.exe SysPal1.o $(LIBS)

clean:
	rm -f *.o *.exe
