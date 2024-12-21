
CC = gcc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32

TARGET = SeqDisp.exe
SRCS = SeqDisp.c
RES = SeqDisp.res
OBJS = $(SRCS:.c=.o) $(RES)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(LIBS) -o $(TARGET)

.c.o:
	$(CC) $(CFLAGS) -c $<

$(RES): SeqDisp.rc
	windres -i SeqDisp.rc -o $(RES)

clean:
	rm -f $(OBJS) $(TARGET)
