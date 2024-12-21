CC = gcc
CFLAGS = -o $@ -Wall -mwindows
TARGET = KeyView2.exe
OBJS = KeyView2.o

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS)

clean:
	rm -f $(TARGET) $(OBJS)
