CC = cc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32

TARGET = Sketch.exe
OBJS = Sketch.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
