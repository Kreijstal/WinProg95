PROG = ClipText.exe
SOURCES = ClipText.c
RESOURCES = ClipText.rc
OBJS = ClipText.o ClipText_rc.o

CFLAGS = -mwindows -I. -DUNICODE -D_UNICODE
LDFLAGS = -mwindows -municode

$(PROG): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(PROG)

ClipText.o: ClipText.c Resource.h
	$(CC) -c $(CFLAGS) $<

ClipText_rc.o: $(RESOURCES) Resource.h
	$(RC) -I. -i $< -o $@

clean:
	rm -f $(PROG) $(OBJS)
