CC = cc
CFLAGS = -Wall -mwindows
TARGET = Multi2
SRCS = Multi2.c
OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(CFLAGS)

clean:
	rm -f $(OBJS) $(TARGET) $(TARGET).exe
