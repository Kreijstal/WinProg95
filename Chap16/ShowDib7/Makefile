CFLAGS = -Wall -Wextra -I. -I../ShowDib3
LIBS = -lgdi32 -luser32 -lkernel32 -lcomdlg32

all: ShowDib7.exe

ShowDib7.exe: ShowDib7.o ShowDib7.res ../ShowDib3/PackeDib.o
	$(CC) -o ShowDib7.exe ShowDib7.o ShowDib7.res ../ShowDib3/PackeDib.o $(LIBS)

ShowDib7.res: ShowDib7.rc Resource.h
	$(RC) ShowDib7.rc -O coff -o ShowDib7.res

clean:
	rm -f *.o *.exe *.res
