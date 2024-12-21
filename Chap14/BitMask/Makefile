CFLAGS = -Wall
LDFLAGS = -mwindows
LDLIBS = -lgdi32

TARGET = BitMask.exe
OBJS = BitMask.o BitMask.res

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LDLIBS)

%.res: %.rc
	$(RC) $< -O coff -o $@

clean:
	rm -f $(TARGET) $(OBJS)
