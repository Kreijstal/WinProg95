CFLAGS = -Wall -Wextra -I.
LIBS = -lgdi32 -luser32 -lkernel32 -lcomdlg32

all: ShowDib4.exe

ShowDib4.exe: ShowDib4.o ShowDib4.res
	$(CC) -o ShowDib4.exe ShowDib4.o ShowDib4.res $(LIBS)

ShowDib4.res: ShowDib4.rc Resource.h
	windres ShowDib4.rc -O coff -o ShowDib4.res

clean:
	rm -f *.o *.exe *.res
