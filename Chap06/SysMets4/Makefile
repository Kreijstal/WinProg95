CC = gcc
CFLAGS = -o $@ -Wall -mwindows -I. -I../../Chapter04/SysMets1
TARGET = SysMets4.exe
OBJS = SysMets4.o

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS)

clean:
	rm -f $(TARGET) $(OBJS)
