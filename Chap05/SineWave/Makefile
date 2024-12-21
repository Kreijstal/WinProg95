CC = gcc
CFLAGS = -o $@ -Wall -mwindows 
TARGET = SineWave.exe
OBJS = SineWave.o

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS)

clean:
	rm -f $(TARGET) $(OBJS)
