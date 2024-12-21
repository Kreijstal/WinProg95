CC = gcc
CFLAGS = -o $@ -Wall -mwindows
TARGET = Typer.exe
OBJS = Typer.o

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS)

clean:
	rm -f $(TARGET) $(OBJS)
