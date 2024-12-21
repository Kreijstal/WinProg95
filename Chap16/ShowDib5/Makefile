CFLAGS = -Wall -Wextra -I. -I../ShowDib3
LIBS = -lgdi32 -luser32 -lkernel32 -lcomdlg32

all: ShowDib5.exe

ShowDib5.exe: ShowDib5.o ShowDib5.res ../ShowDib3/PackeDib.o
	$(CC) -o ShowDib5.exe ShowDib5.o ShowDib5.res ../ShowDib3/PackeDib.o $(LIBS)

ShowDib5.res: ShowDib5.rc Resource.h
	windres ShowDib5.rc -O coff -o ShowDib5.res

clean:
	rm -f *.o *.exe *.res
