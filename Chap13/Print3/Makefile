CC = cc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32 -lwinspool

TARGET = Print3.exe
OBJS = Print3.o Print.res ../FormFeed/GetPrnDC.o ../Print1/Print.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)

Print.res: Print.rc Resource.h
	$(RC) Print.rc -o Print.res

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
