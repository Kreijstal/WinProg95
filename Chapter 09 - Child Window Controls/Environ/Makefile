.PHONY: all clean

all: environ.exe

environ.exe: environ.c
	gcc environ.c -o environ.exe -Wall -mwindows -lcomctl32

clean:
	rm -f environ.exe
