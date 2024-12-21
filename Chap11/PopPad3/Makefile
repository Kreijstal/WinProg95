CFLAGS = -Wall
OBJS = PopPad.o PopFile.o PopFind.o PopFont.o PopPrntNull.o

all: PopPad3.exe

PopPad3.exe: $(OBJS) PopPad.res
	$(CC) -o $@ $(OBJS) PopPad.res -lgdi32 -lcomdlg32 -Wl,--major-subsystem-version=6,--minor-subsystem-version=0

PopPad.res: PopPad.rc
	windres -i PopPad.rc -o PopPad.res -O coff --target=pe-x86-64

clean:
	rm -f *.o *.res *.exe
