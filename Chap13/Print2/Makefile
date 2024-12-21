CC = gcc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32

TARGET = Print2.exe
OBJS = Print2.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)

clean:
	rm -f $(TARGET) $(OBJS)
