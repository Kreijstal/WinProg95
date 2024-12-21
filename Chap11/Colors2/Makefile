CFLAGS = -Wall
OBJS = Colors2.o

all: Colors2.exe

Colors2.exe: $(OBJS) Colors2.res
	$(CC) -o $@ $(OBJS) Colors2.res -lgdi32 -Wl,--major-subsystem-version=6,--minor-subsystem-version=0

Colors2.res: Colors2.rc
	windres -i Colors2.rc -o Colors2.res --target=pe-x86-64

clean:
	rm -f *.o *.res *.exe
