CFLAGS = -Wall
LDLIBS = -lgdi32 -lcomdlg32
LDFLAGS = -Wl,--major-subsystem-version=6,--minor-subsystem-version=0
OBJS = Colors3.o

all: Colors3.exe

Colors3.exe: $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LDLIBS)

clean:
	rm -f *.o *.exe
