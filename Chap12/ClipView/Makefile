PROG = ClipView.exe
SOURCES = ClipView.c
OBJS = $(SOURCES:.c=.o)

CFLAGS = -mwindows
LDFLAGS = -mwindows

$(PROG): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(PROG)

.c.o:
	$(CC) -c $(CFLAGS) $<

clean:
	rm -f $(PROG) $(OBJS)
