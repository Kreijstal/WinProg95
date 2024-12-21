CC = cc
CFLAGS = -Wall -mwindows
TARGET = RndRectMT
SRCS = RndRctMT.c
OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(CFLAGS)

clean:
	rm -f $(OBJS) $(TARGET) $(TARGET).exe
