CFLAGS = -Wall
OBJS = HexCalc.o

all: HexCalc.exe

HexCalc.exe: $(OBJS) HexCalc.res
	$(CC) -o $@ $(OBJS) HexCalc.res -lgdi32

HexCalc.res: HexCalc.rc
	windres -i HexCalc.rc -o HexCalc.res

clean:
	rm -f *.o *.res *.exe
