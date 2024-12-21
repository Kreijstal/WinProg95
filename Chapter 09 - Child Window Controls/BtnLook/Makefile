.PHONY: all clean

CFLAGS = -Wall
LDFLAGS = -mwindows
LDLIBS = -lcomctl32

TARGET = BtnLook.exe
OBJS = BtnLook.o BtnLook.res

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LDLIBS)

%.res: %.rc
	$(RC) $< -O coff -o $@

clean:
	rm -f $(TARGET) $(OBJS)
