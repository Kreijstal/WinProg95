
CC = cc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32
RC = windres

TARGET = DibHeads.exe
SRCS = DibHeads.c
OBJS = DibHeads.o
RES = DibHeads.res

$(TARGET): $(OBJS) $(RES)
	$(CC) $(OBJS) $(RES) $(CFLAGS) $(LIBS) -o $(TARGET)

.c.o:
	$(CC) $(CFLAGS) -c $<

$(RES): DibHeads.rc
	$(RC) $< -O coff -o $@

clean:
	rm -f $(OBJS) $(RES) $(TARGET)
