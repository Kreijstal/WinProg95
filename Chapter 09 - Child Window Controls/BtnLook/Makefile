.PHONY: all clean

CFLAGS = -Wall
LDFLAGS = -mwindows
LDLIBS = -lcomctl32

TARGET = BtnLook.exe
OBJS = BtnLook.o 

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LDLIBS)

clean:
	rm -f $(TARGET) $(OBJS)
