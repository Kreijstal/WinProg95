PROG = ClipText.exe
SOURCES = ClipText.c
RESOURCES = ClipText.rc
OBJS = ClipText.o ClipText_rc.o

CFLAGS = -mwindows
LDFLAGS = -mwindows

$(PROG): $(OBJS)
	gcc $(OBJS) $(LDFLAGS) -o $(PROG)

ClipText.o: ClipText.c
	gcc -c $(CFLAGS) $<

ClipText_rc.o: $(RESOURCES)
	windres -i $< -o $@

clean:
	rm -f $(PROG) $(OBJS)
