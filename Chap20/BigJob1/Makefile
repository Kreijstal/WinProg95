CC = gcc
CFLAGS = -Wall -mwindows
TARGET = BigJob1
SRCS = BigJob1.c
OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(CFLAGS)

clean:
	rm -f $(OBJS) $(TARGET) $(TARGET).exe
