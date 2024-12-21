CC = cc
CFLAGS = -o $@ -Wall -mwindows 
TARGET = Bezier.exe
OBJS = Bezier.o

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS)

clean:
	rm -f $(TARGET) $(OBJS)
