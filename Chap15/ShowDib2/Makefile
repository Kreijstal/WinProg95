
CC = gcc
CFLAGS = -Wall -mwindows -I..
LIBS = -lgdi32

TARGET = ShowDib2.exe
SRCS = ShowDib2.c ../DibFile.c
RES = ShowDib2.res
OBJS = $(SRCS:.c=.o) $(RES)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(LIBS) -o $(TARGET)

.c.o:
	$(CC) $(CFLAGS) -c $<

$(RES): ShowDib2.rc
	windres -i ShowDib2.rc -o $(RES)

clean:
	rm -f $(OBJS) $(TARGET)
