PROG = ClipText.exe
SOURCES = ClipText.c
RESOURCES = ClipText.rc
OBJS = $(SOURCES:.c=.o) $(RESOURCES:.rc=.o)

CFLAGS = -mwindows
LDFLAGS = -mwindows

$(PROG): $(OBJS)
	gcc $(OBJS) $(LDFLAGS) -o $(PROG)

.c.o:
	gcc -c $(CFLAGS) $<

$(RESOURCES:.rc=.o): $(RESOURCES)
	windres -i $< -o $@

clean:
	rm -f $(PROG) $(OBJS)
