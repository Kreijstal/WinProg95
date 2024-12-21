CFLAGS = -Wall -Wextra -I.
LIBS = -lgdi32 -luser32 -lkernel32 -lcomdlg32

OBJS = Dibble.o DibConv.o DibHelp.o DibPal.o

all: Dibble.exe

Dibble.exe: $(OBJS) Dibble.res
	$(CC) -o Dibble.exe $(OBJS) Dibble.res $(LIBS)

Dibble.res: Dibble.rc Resource.h
	windres Dibble.rc -O coff -o Dibble.res

clean:
	rm -f *.o *.exe *.res
