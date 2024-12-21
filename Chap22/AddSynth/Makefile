RC ?= windres

PROG = AddSynth.exe
OBJS = AddSynth.o AddSynth.res

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
