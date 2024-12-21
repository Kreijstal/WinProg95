
CC = gcc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32

TARGET = DibConv.exe
SRCS = DibConv.c
RES = DibConv.res
OBJS = $(SRCS:.c=.o) $(RES)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(LIBS) -o $(TARGET)

.c.o:
	$(CC) $(CFLAGS) -c $<

$(RES): DibConv.rc
	windres -i DibConv.rc -o $(RES)

clean:
	rm -f $(OBJS) $(TARGET)
