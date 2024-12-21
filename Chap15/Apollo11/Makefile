
CC = gcc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32

TARGET = Apollo11.exe
SRCS = Apollo11.c
OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(LIBS) -o $(TARGET)

.c.o:
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS) $(TARGET)
