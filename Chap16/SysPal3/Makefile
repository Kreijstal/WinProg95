CFLAGS = -Wall -Wextra
LIBS = -lgdi32 -luser32 -lkernel32

all: SysPal3.exe

SysPal3.exe: SysPal3.o
	$(CC) -o SysPal3.exe SysPal3.o $(LIBS)

clean:
	rm -f *.o *.exe
