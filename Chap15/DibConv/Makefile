
CC = gcc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32
RC = windres

TARGET = DibConv.exe
SRCS = DibConv.c
OBJS = DibConv.o
RES = DibConv.res

$(TARGET): $(OBJS) $(RES)
	$(CC) $(OBJS) $(RES) $(CFLAGS) $(LIBS) -o $(TARGET)

.c.o:
	$(CC) $(CFLAGS) -c $<

$(RES): DibConv.rc
	$(RC) $< -O coff -o $@

clean:
	rm -f $(OBJS) $(RES) $(TARGET)
