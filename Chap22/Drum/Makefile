PROG = Drum.exe
OBJS = Drum.o DrumFile.o DrumTime.o Drum.res

CFLAGS = -Wall
LDFLAGS = -mwindows
LDLIBS = -lwinmm -lcomdlg32

$(PROG): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LDLIBS)

.PHONY: clean
clean:
	rm -f $(PROG) $(OBJS)

%.res: %.rc
	$(RC) $< -O coff -o $@
