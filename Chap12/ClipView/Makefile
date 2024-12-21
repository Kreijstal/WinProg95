PROG = ClipView.exe
SOURCES = ClipView.c
OBJS = $(SOURCES:.c=.o)

CFLAGS = -mwindows
LDFLAGS = -mwindows

$(PROG): $(OBJS)
	gcc $(OBJS) $(LDFLAGS) -o $(PROG)

.c.o:
	gcc -c $(CFLAGS) $<

clean:
	rm -f $(PROG) $(OBJS)
