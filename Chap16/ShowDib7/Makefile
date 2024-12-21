CFLAGS = -Wall -Wextra -I.
LIBS = -lgdi32 -luser32 -lkernel32 -lcomdlg32

all: ShowDib7.exe

ShowDib7.exe: ShowDib7.o ShowDib7.res
	$(CC) -o ShowDib7.exe ShowDib7.o ShowDib7.res $(LIBS)

ShowDib7.res: ShowDib7.rc Resource.h
	windres ShowDib7.rc -O coff -o ShowDib7.res

clean:
	rm -f *.o *.exe *.res
