CFLAGS = -Wall
OBJS = Colors2.o

all: Colors2.exe

Colors2.exe: $(OBJS) Colors2.res
	$(CC) -o $@ $(OBJS) Colors2.res -lgdi32

Colors2.res: Colors2.rc
	windres -i Colors2.rc -o Colors2.res

clean:
	rm -f *.o *.res *.exe
