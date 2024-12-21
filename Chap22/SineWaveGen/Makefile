PROG = SineWaveGen.exe
OBJS = SineWaveGen.o SineWaveGen.res

CFLAGS = -Wall
LDFLAGS = -mwindows
LDLIBS = -lwinmm

$(PROG): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LDLIBS)

.PHONY: clean
clean:
	rm -f $(PROG) $(OBJS)

%.res: %.rc
	windres $< -O coff -o $@
