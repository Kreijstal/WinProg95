
CC = gcc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32

TARGET = DibSect.exe
SRCS = DibSect.c
RES = DibSect.res
OBJS = $(SRCS:.c=.o) $(RES)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(LIBS) -o $(TARGET)

.c.o:
	$(CC) $(CFLAGS) -c $<

$(RES): DibSect.rc
	windres -i DibSect.rc -o $(RES)

clean:
	rm -f $(OBJS) $(TARGET)
