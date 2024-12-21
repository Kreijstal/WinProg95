PROG = TextMCI.exe
OBJS = TestMci.o TestMci.res

CFLAGS = -Wall
LDFLAGS = -mwindows
LDLIBS = -lwinmm

$(PROG): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LDLIBS)

.PHONY: clean
clean:
	rm -f $(PROG) $(OBJS)

%.res: %.rc
	$(RC) $< -O coff -o $@
