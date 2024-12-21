CC = cc
CFLAGS = -Wall -mwindows
TARGET = Multi1
SRCS = Multi1.c
OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(CFLAGS)

clean:
	rm -f $(OBJS) $(TARGET) $(TARGET).exe
