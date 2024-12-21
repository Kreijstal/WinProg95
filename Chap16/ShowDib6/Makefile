CFLAGS = -Wall -Wextra -I. -I../ShowDib3
LIBS = -lgdi32 -luser32 -lkernel32 -lcomdlg32

all: ShowDib6.exe

ShowDib6.exe: ShowDib6.o ShowDib6.res ../ShowDib3/PackeDib.o
	$(CC) -o ShowDib6.exe ShowDib6.o ShowDib6.res ../ShowDib3/PackeDib.o $(LIBS)

ShowDib6.res: ShowDib6.rc Resource.h
	$(RC) ShowDib6.rc -O coff -o ShowDib6.res

clean:
	rm -f *.o *.exe *.res
