CC = cc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32

TARGET = Bricks1.exe
OBJS = Bricks1.o Bricks1_res.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)

Bricks1_res.o: Bricks1.rc
	windres $< $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
