CFLAGS = -Wall
LDFLAGS = -mwindows 
LDLIBS = -lcomctl32

.PHONY: all clean

all: PopPad1.exe

PopPad1.exe: PopPad1.o
	$(CC) $(LDFLAGS) -o $@ $^ $(LDLIBS)

clean:
	rm -f PopPad1.exe PopPad1.o
