RC ?= windres

CFLAGS = -Wall
LDFLAGS = -mwindows
LDLIBS = -lwinmm -lcomctl32 -lws2_32

TARGET = NetTime.exe
OBJS = NetTime.o NetTime.res

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) $(LDLIBS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.res: %.rc
	$(RC) -I. $< -O coff -o $@

clean:
	rm -f $(TARGET) $(OBJS)
