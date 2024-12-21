CFLAGS = -Wall
OBJS = HexCalc.o

all: HexCalc.exe

HexCalc.exe: $(OBJS) HexCalc.res
	$(CC) -o $@ $(OBJS) HexCalc.res -lgdi32 -Wl,--major-subsystem-version=6,--minor-subsystem-version=0

HexCalc.res: HexCalc.rc
	windres -i HexCalc.rc -o HexCalc.res --target=pe-x86-64

clean:
	rm -f *.o *.res *.exe
