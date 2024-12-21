CFLAGS = -Wall
OBJS = About1.o
RC = windres

all: About1.exe

About1.exe: $(OBJS) About1.res
	$(CC) -o $@ $(OBJS) About1.res -lgdi32 -Wl,--major-subsystem-version=6,--minor-subsystem-version=0

%.res: %.rc
	$(RC) $< -O coff -o $@

clean:
	rm -f *.o *.res *.exe
