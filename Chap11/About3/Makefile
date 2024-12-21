CFLAGS = -Wall
OBJS = About3.o
RC = windres

all: About3.exe

About3.exe: $(OBJS) About3.res
	$(CC) -o $@ $(OBJS) About3.res -lgdi32 -Wl,--major-subsystem-version=6,--minor-subsystem-version=0

%.res: %.rc
	$(RC) $< -O coff -o $@

clean:
	rm -f *.o *.res *.exe
