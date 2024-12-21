CFLAGS = -Wall
LDFLAGS = -mwindows
LDLIBS = -lwinmm -lcomctl32 -lws2_32

TARGET = NetTime.exe
OBJS = NetTime.o NetTime.res

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LDLIBS)

%.res: %.rc
	$(RC) $< -O coff -o $@

clean:
	rm -f $(TARGET) $(OBJS)
