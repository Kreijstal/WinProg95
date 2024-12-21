RC ?= windres

PROG = Record1.exe
OBJS = Record1.o Record.res

CFLAGS = -Wall
LDFLAGS = -mwindows
LDLIBS = -lwinmm

$(PROG): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) $(LDLIBS) -o $(PROG)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.res: %.rc
	$(RC) -I. $< -O coff -o $@

.PHONY: clean
clean:
	rm -f $(PROG) $(OBJS)
