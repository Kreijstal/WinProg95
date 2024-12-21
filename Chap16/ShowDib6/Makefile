CFLAGS = -Wall -Wextra -I.
LIBS = -lgdi32 -luser32 -lkernel32 -lcomdlg32

all: ShowDib6.exe

ShowDib6.exe: ShowDib6.o ShowDib6.res
	$(CC) -o ShowDib6.exe ShowDib6.o ShowDib6.res $(LIBS)

ShowDib6.res: ShowDib6.rc Resource.h
	windres ShowDib6.rc -O coff -o ShowDib6.res

clean:
	rm -f *.o *.exe *.res
