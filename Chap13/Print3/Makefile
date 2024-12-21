CC = gcc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32 -lwinspool

TARGET = Print3.exe
OBJS = Print3.o Print_res.o GetPrnDC.o Print.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)

Print_res.o: Print.rc Resource.h
	windres Print.rc -o Print_res.o

clean:
	rm -f $(TARGET) $(OBJS)
