CC = cc
CFLAGS = -o $@ -Wall -mwindows 
TARGET = DevCaps1.exe
OBJS = DevCaps1.o

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS)

clean:
	rm -f $(TARGET) $(OBJS)
