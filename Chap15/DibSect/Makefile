
CC = cc
RC ?= windres
CFLAGS = -Wall
LDFLAGS = -mwindows
LIBS = -lgdi32

TARGET = DibSect.exe
SRCS = DibSect.c
RES = DibSect.res
OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS) $(RES)
	$(CC) $(OBJS) $(RES) $(LDFLAGS) $(LIBS) -o $(TARGET)

.c.o:
	$(CC) $(CFLAGS) -c $<

$(RES): DibSect.rc Resource.h
	$(RC) -O coff DibSect.rc $(RES)

clean:
	rm -f $(OBJS) $(RES) $(TARGET)
