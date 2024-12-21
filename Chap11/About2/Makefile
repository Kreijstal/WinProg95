CFLAGS = -Wall
OBJS = About2.o
RC = windres

all: About2.exe

About2.exe: $(OBJS) About2.res
	$(CC) -o $@ $(OBJS) About2.res -lgdi32 -Wl,--major-subsystem-version=6,--minor-subsystem-version=0

%.res: %.rc
	$(RC) $< -O coff -o $@

clean:
	rm -f *.o *.res *.exe
