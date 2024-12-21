CC = gcc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32

TARGET = HelloBit.exe
OBJS = HelloBit.o HelloBit_res.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)

HelloBit_res.o: HelloBit.rc
	windres $< $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
