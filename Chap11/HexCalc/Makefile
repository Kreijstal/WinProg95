CFLAGS = -Wall
OBJS = HexCalc.o
RC = windres

all: HexCalc.exe

HexCalc.exe: $(OBJS) HexCalc.res
	$(CC) -o $@ $(OBJS) HexCalc.res -lgdi32 -Wl,--major-subsystem-version=6,--minor-subsystem-version=0

%.res: %.rc
	$(RC) $< -O coff -o $@

clean:
	rm -f *.o *.res *.exe
