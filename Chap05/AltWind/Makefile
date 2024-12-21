CC = gcc
CFLAGS = -o $@ -Wall -mwindows 
TARGET = AltWind.exe
OBJS = AltWind.o

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS)

clean:
	rm -f $(TARGET) $(OBJS)
