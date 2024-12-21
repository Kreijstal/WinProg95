CC = gcc
CFLAGS = -o $@ -Wall -mwindows 
TARGET = LineDemo.exe
OBJS = LineDemo.o

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS)

clean:
	rm -f $(TARGET) $(OBJS)
