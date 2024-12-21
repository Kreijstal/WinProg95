CC = cc
CFLAGS = -Wall -mwindows
TARGET = BigJob2
SRCS = BigJob2.c
OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(CFLAGS)

clean:
	rm -f $(OBJS) $(TARGET) $(TARGET).exe
