
CC = gcc
CFLAGS = -Wall -mwindows -I..
LIBS = -lgdi32

TARGET = ShowDib1.exe
SRCS = ShowDib1.c ../DibFile.c
RES = ShowDib1.res
OBJS = $(SRCS:.c=.o) $(RES)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(LIBS) -o $(TARGET)

.c.o:
	$(CC) $(CFLAGS) -c $<

$(RES): ShowDib1.rc
	windres -i ShowDib1.rc -o $(RES)

clean:
	rm -f $(OBJS) $(TARGET)
