CC = gcc
CFLAGS = -o $@ -Wall -mwindows
TARGET = StokFont.exe
OBJS = StokFont.o

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS)

clean:
	rm -f $(TARGET) $(OBJS)
