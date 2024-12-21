.PHONY: all clean

all: environ.exe

environ.exe: environ.c
	cc environ.c -o environ.exe -Wall -mwindows -lcomctl32

clean:
	rm -f environ.exe
