CFLAGS = -Wall
LDFLAGS = -mwindows 
LDLIBS = -lcomctl32

.PHONY: all clean

all: Environ.exe

Environ.exe: Environ.o
	$(CC) $(LDFLAGS) -o $@ $^ $(LDLIBS)

clean:
	rm -f Environ.exe Environ.o
