CC = gcc
CFLAGS = -Wall -Wextra -g
WINLIBS = -lgdi32 -luser32 -lkernel32 -lcomctl32

TARGET = FontClip
SRCS = FontClip.c

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET) $(WINLIBS)

clean:
	rm -f $(TARGET)
