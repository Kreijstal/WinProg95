CC = gcc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32

TARGET = Bricks3.exe
OBJS = Bricks3.o Bricks3_res.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)

Bricks3_res.o: Bricks3.rc
	windres $< $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
