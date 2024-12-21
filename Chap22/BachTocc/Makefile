PROG = BachTocc.exe
OBJS = BachTocc.o

CFLAGS = -Wall
LDFLAGS = -mwindows
LDLIBS = -lwinmm

$(PROG): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LDLIBS)

.PHONY: clean
clean:
	rm -f $(PROG) $(OBJS)
