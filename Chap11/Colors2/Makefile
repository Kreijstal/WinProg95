CFLAGS = -Wall
OBJS = Colors2.o
RC = windres

all: Colors2.exe

Colors2.exe: $(OBJS) Colors2.res
	$(CC) -o $@ $(OBJS) Colors2.res -lgdi32 -Wl,--major-subsystem-version=6,--minor-subsystem-version=0

%.res: %.rc
	$(RC) $< -O coff -o $@

clean:
	rm -f *.o *.res *.exe
