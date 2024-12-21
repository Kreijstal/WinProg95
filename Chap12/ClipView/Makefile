PROG = ClipView.exe
SOURCES = ClipView.c
OBJS = $(SOURCES:.c=.o)

CFLAGS = -mwindows
LDFLAGS = -mwindows

$(PROG): $(OBJS)
	cc $(OBJS) $(LDFLAGS) -o $(PROG)

.c.o:
	cc -c $(CFLAGS) $<

clean:
	rm -f $(PROG) $(OBJS)
