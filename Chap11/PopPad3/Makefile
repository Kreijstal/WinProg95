CFLAGS = -Wall
OBJS = PopPad.o PopFile.o PopFind.o PopFont.o PopPrntNull.o
RC = windres
all: PopPad3.exe

PopPad3.exe: $(OBJS) PopPad.res
	$(CC) -o $@ $(OBJS) PopPad.res -lgdi32 -lcomdlg32 -Wl,--major-subsystem-version=6,--minor-subsystem-version=0

%.res: %.rc
	$(RC) $< -O coff -o $@

clean:
	rm -f *.o *.res *.exe
