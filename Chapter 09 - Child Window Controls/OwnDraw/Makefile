CFLAGS = -Wall
LDFLAGS = -mwindows 
LDLIBS = -lcomctl32

.PHONY: all clean

all: OwnDraw.exe

OwnDraw.exe: OwnDraw.o
	$(CC) $(LDFLAGS) -o $@ $^ $(LDLIBS)

clean:
	rm -f OwnDraw.exe OwnDraw.o
