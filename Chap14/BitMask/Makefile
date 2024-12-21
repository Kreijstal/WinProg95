CFLAGS = -Wall -mwindows
LDLIBS = -lgdi32

TARGET = BitMask.exe
OBJS = BitMask.o BitMask.res

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LDLIBS)

%.res: %.rc
	$(RC) $< -O coff -o $@

clean:
	rm -f $(TARGET) $(OBJS)
