CC = gcc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32

TARGET = Scramble.exe
OBJS = Scramble.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
