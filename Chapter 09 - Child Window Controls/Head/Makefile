CFLAGS = -Wall
LDFLAGS = -mwindows 
LDLIBS = -lcomctl32

.PHONY: all clean

all: Head.exe

Head.exe: Head.o
	$(CC) $(LDFLAGS) -o $@ $^ $(LDLIBS)

clean:
	rm -f Head.exe Head.o
