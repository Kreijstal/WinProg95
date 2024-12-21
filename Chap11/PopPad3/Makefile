CFLAGS = -Wall
OBJS = PopPad.o PopFile.o PopFind.o PopFont.o PopPrntNull.o

all: PopPad3.exe

PopPad3.exe: $(OBJS) PopPad.res
	$(CC) -o $@ $(OBJS) PopPad.res -lgdi32 -lcomdlg32

PopPad.res: PopPad.rc
	windres -i PopPad.rc -o PopPad.res

clean:
	rm -f *.o *.res *.exe
