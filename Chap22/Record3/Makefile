PROG = Record3.exe
OBJS = Record3.o Record.res

CFLAGS = -Wall -I../Record1
LDFLAGS = -mwindows
LDLIBS = -lwinmm

$(PROG): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LDLIBS)

.PHONY: clean
clean:
	rm -f $(PROG) $(OBJS)

%.res: %.rc
	$(RC) $< -O coff -o $@
