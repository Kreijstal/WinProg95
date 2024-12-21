CFLAGS = -Wall -Wextra -I.
LIBS = -lgdi32 -luser32 -lkernel32 -lcomdlg32

all: ShowDib8.exe

ShowDib8.exe: ShowDib8.o ShowDib8.res
	$(CC) -o ShowDib8.exe ShowDib8.o ShowDib8.res $(LIBS)

ShowDib8.res: ShowDib8.rc Resource.h
	windres ShowDib8.rc -O coff -o ShowDib8.res

clean:
	rm -f *.o *.exe *.res
