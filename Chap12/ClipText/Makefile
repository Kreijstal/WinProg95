PROG = ClipText.exe
SOURCES = ClipText.c
RESOURCES = ClipText.rc
OBJS = ClipText.o ClipText_rc.o

CFLAGS = -mwindows -I.
LDFLAGS = -mwindows

$(PROG): $(OBJS)
	gcc $(OBJS) $(LDFLAGS) -o $(PROG)

ClipText.o: ClipText.c resource.h
	gcc -c $(CFLAGS) $<

ClipText_rc.o: $(RESOURCES) resource.h
	windres -I. -i $< -o $@

clean:
	rm -f $(PROG) $(OBJS)
