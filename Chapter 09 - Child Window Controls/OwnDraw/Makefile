.PHONY: all clean

all: owndraw.exe

owndraw.exe: owndraw.c
	cc owndraw.c -o owndraw.exe -Wall -mwindows -lcomctl32

clean:
	rm -f owndraw.exe
