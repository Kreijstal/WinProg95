CFLAGS = -Wall
OBJS = About3.o

all: About3.exe

About3.exe: $(OBJS) About3.res
	$(CC) -o $@ $(OBJS) About3.res -lgdi32 -Wl,--major-subsystem-version=6,--minor-subsystem-version=0

About3.res: About3.rc
	windres -i About3.rc -o About3.res -O coff --target=pe-x86-64

clean:
	rm -f *.o *.res *.exe
