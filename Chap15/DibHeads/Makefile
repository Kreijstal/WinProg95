
CC = gcc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32

TARGET = DibHeads.exe
SRCS = DibHeads.c
RES = DibHeads.res
OBJS = $(SRCS:.c=.o) $(RES)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(LIBS) -o $(TARGET)

.c.o:
	$(CC) $(CFLAGS) -c $<

$(RES): DibHeads.rc
	windres -i DibHeads.rc -o $(RES)

clean:
	rm -f $(OBJS) $(TARGET)
