CFLAGS = -Wall -Wextra -I.
LIBS = -lgdi32 -luser32 -lkernel32 -lcomdlg32

all: ShowDib3.exe

ShowDib3.exe: ShowDib3.o PackeDib.o ShowDib3.res
	$(CC) -o ShowDib3.exe ShowDib3.o PackeDib.o ShowDib3.res $(LIBS)

ShowDib3.res: ShowDib3.rc Resource.h
	windres ShowDib3.rc -O coff -o ShowDib3.res

clean:
	rm -f *.o *.exe *.res
