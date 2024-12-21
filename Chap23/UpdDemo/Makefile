RC ?= windres

CFLAGS = -Wall
LDFLAGS = -mwindows
LDLIBS = -lwinmm -lcomctl32 -lwininet

TARGET = UpdDemo.exe
OBJS = UpdDemo.o UpdDemo.res

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) $(LDLIBS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.res: %.rc
	$(RC) -I. $< -O coff -o $@

clean:
	rm -f $(TARGET) $(OBJS)
