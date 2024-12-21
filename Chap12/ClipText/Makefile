RC ?= windres

PROG = ClipText.exe
SOURCES = ClipText.c
RESOURCES = ClipText.rc
OBJS = ClipText.o ClipText.res

CFLAGS = -mwindows -I. -DUNICODE -D_UNICODE
LDFLAGS = -mwindows -municode

$(PROG): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(PROG)

ClipText.o: ClipText.c Resource.h
	$(CC) -c $(CFLAGS) $<

%.res: %.rc Resource.h
	$(RC) -I. $< -O coff -o $@

clean:
	rm -f $(PROG) $(OBJS)
