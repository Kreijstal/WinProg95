CC = gcc
CFLAGS = -o $@ -Wall -mwindows
TARGET = KeyView1.exe
OBJS = KeyView1.o

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS)

clean:
	rm -f $(TARGET) $(OBJS)
