PROG = Record2.exe
OBJS = Record2.o

CFLAGS = -Wall
LDFLAGS = -mwindows
LDLIBS = -lwinmm

$(PROG): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LDLIBS)

.PHONY: clean
clean:
	rm -f $(PROG) $(OBJS)
