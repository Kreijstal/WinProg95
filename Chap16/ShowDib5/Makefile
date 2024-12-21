CFLAGS = -Wall -Wextra -I.
LIBS = -lgdi32 -luser32 -lkernel32 -lcomdlg32

all: ShowDib5.exe

ShowDib5.exe: ShowDib5.o ShowDib5.res
	$(CC) -o ShowDib5.exe ShowDib5.o ShowDib5.res $(LIBS)

ShowDib5.res: ShowDib5.rc Resource.h
	windres ShowDib5.rc -O coff -o ShowDib5.res

clean:
	rm -f *.o *.exe *.res
