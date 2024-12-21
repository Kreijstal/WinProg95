CC = cc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32 -lwinspool

TARGET = Print2.exe
OBJS = Print2.o ../FormFeed/GetPrnDC.o ../Print1/Print.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
