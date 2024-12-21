CC = gcc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32

TARGET = Print1.exe
OBJS = Print1.o Print.o ../FormFeed/GetPrnDC.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
