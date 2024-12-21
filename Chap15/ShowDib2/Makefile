
CC = gcc
CFLAGS = -Wall -mwindows -I../ShowDib1
LIBS = -lgdi32

TARGET = ShowDib2.exe
SRCS = ShowDib2.c ../ShowDib1/DibFile.c
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
