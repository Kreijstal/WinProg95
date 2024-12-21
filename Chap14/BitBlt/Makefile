CC = gcc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32

TARGET = BitBlt.exe
OBJS = BitBlt.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
