CC = gcc
CFLAGS = -o $@ -Wall -mwindows -I. -I../../Chap04/SysMets1
TARGET = SysMets5.exe
OBJS = SysMets5.o

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS)

clean:
	rm -f $(TARGET) $(OBJS)
