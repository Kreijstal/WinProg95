CC = gcc
CFLAGS = -Wall -Wextra -g
WINLIBS = -lgdi32 -luser32 -lkernel32 -lcomctl32

TARGET = FontRot
SRCS = FontRot.c ../EZTest/EZFont.c
INCLUDES = -I../EZTest

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(INCLUDES) $(SRCS) -o $(TARGET) $(WINLIBS)

clean:
	rm -f $(TARGET)
