PROG = ClipText.exe
SOURCES = ClipText.c
RESOURCES = ClipText.rc
OBJS = ClipText.o ClipText_rc.o

CFLAGS = -mwindows -I. -DUNICODE -D_UNICODE
LDFLAGS = -mwindows -municode

$(PROG): $(OBJS)
	cc $(OBJS) $(LDFLAGS) -o $(PROG)

ClipText.o: ClipText.c Resource.h
	cc -c $(CFLAGS) $<

ClipText_rc.o: $(RESOURCES) Resource.h
	windres -I. -i $< -o $@

clean:
	rm -f $(PROG) $(OBJS)
