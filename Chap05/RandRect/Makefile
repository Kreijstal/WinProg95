CC = gcc
CFLAGS = -o $@ -Wall -mwindows 
TARGET = RandRect.exe
OBJS = RandRect.o

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS)

clean:
	rm -f $(TARGET) $(OBJS)
