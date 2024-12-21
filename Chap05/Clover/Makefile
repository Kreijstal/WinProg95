CC = gcc
CFLAGS = -o $@ -Wall -mwindows 
TARGET = Clover.exe
OBJS = Clover.o

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS)

clean:
	rm -f $(TARGET) $(OBJS)
