.PHONY: all clean

CFLAGS = -Wall
LDFLAGS = -mwindows
LDLIBS = -lcomctl32

TARGET = Colors1.exe
OBJS = Colors1.o 

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LDLIBS)

clean:
	rm -f $(TARGET) $(OBJS)
