CFLAGS = -Wall
LDFLAGS = -mwindows
LDLIBS = -lwinmm -lcomctl32 -lwininet

TARGET = UpdDemo.exe
OBJS = UpdDemo.o UpdDemo.res

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LDLIBS)

%.res: %.rc
	$(RC) $< -O coff -o $@

clean:
	rm -f $(TARGET) $(OBJS)
