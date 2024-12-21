.PHONY: all clean

CFLAGS = -Wall
LDFLAGS = -mwindows
LDLIBS = -lcomctl32

TARGET = Colors1.exe
OBJS = Colors1.o Colors1.res

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LDLIBS)

%.res: %.rc
	$(RC) $< -O coff -o $@

clean:
	rm -f $(TARGET) $(OBJS)
