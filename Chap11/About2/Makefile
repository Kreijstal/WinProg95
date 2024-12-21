CFLAGS = -Wall
OBJS = About2.o

all: About2.exe

About2.exe: $(OBJS) About2.res
	$(CC) -o $@ $(OBJS) About2.res -lgdi32

About2.res: About2.rc
	windres -i About2.rc -o About2.res

clean:
	rm -f *.o *.res *.exe
