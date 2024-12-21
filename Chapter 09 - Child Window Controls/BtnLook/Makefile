.PHONY: all clean

all: btnlook.exe

btnlook.exe: btnlook.c
	gcc btnlook.c -o btnlook.exe -Wall -mwindows -lcomctl32

clean:
	rm -f btnlook.exe
