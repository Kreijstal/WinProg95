CC = gcc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32

TARGET = Print1.exe
OBJS = Print1.o Print.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)

clean:
	rm -f $(TARGET) $(OBJS)
