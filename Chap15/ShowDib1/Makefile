
CC = gcc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32
RC = windres

TARGET = ShowDib1.exe
SRCS = ShowDib1.c DibFile.c
OBJS = ShowDib1.o DibFile.o
RES = ShowDib1.res

$(TARGET): $(OBJS) $(RES)
	$(CC) $(OBJS) $(RES) $(CFLAGS) $(LIBS) -o $(TARGET)

.c.o:
	$(CC) $(CFLAGS) -c $<

$(RES): ShowDib1.rc
	$(RC) $< -O coff -o $@

clean:
	rm -f $(OBJS) $(RES) $(TARGET)
