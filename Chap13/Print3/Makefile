CC = cc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32 -lwinspool

TARGET = Print3.exe
OBJS = Print3.o Print.res ../FormFeed/GetPrnDC.o ../Print1/Print.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)

%.res: %.rc Resource.h
	$(RC) -O coff $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
