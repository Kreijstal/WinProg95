CC = gcc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32

TARGET = BitMask.exe
OBJS = BitMask.o BitMask_res.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)

BitMask_res.o: BitMask.rc
	windres $< $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
