CFLAGS = -Wall -Wextra -I. -I../ShowDib3
LIBS = -lgdi32 -luser32 -lkernel32 -lcomdlg32

all: ShowDib8.exe

ShowDib8.exe: ShowDib8.o ShowDib8.res ../ShowDib3/PackeDib.o
	$(CC) -o ShowDib8.exe ShowDib8.o ShowDib8.res ../ShowDib3/PackeDib.o $(LIBS)

ShowDib8.res: ShowDib8.rc Resource.h
	$(RC) ShowDib8.rc -O coff -o ShowDib8.res

clean:
	rm -f *.o *.exe *.res
