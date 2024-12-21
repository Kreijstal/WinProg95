CFLAGS = -Wall -Wextra -I. -I../ShowDib3
LIBS = -lgdi32 -luser32 -lkernel32 -lcomdlg32

all: ShowDib4.exe

ShowDib4.exe: ShowDib4.o ShowDib4.res ../ShowDib3/PackeDib.o
	$(CC) -o ShowDib4.exe ShowDib4.o ShowDib4.res ../ShowDib3/PackeDib.o $(LIBS)

ShowDib4.res: ShowDib4.rc Resource.h
	$(RC) ShowDib4.rc -O coff -o ShowDib4.res

clean:
	rm -f *.o *.exe *.res
