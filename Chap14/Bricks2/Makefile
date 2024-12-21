CC = cc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32

TARGET = Bricks2.exe
OBJS = Bricks2.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
