CFLAGS = -Wall
OBJS = About1.o

all: About1.exe

About1.exe: $(OBJS) About1.res
	$(CC) -o $@ $(OBJS) About1.res -lgdi32

About1.res: About1.rc
	windres -i About1.rc -o About1.res

clean:
	rm -f *.o *.res *.exe
