
CC = cc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32
RC = windres

TARGET = SeqDisp.exe
SRCS = SeqDisp.c
OBJS = SeqDisp.o
RES = SeqDisp.res

$(TARGET): $(OBJS) $(RES)
	$(CC) $(OBJS) $(RES) $(CFLAGS) $(LIBS) -o $(TARGET)

.c.o:
	$(CC) $(CFLAGS) -c $<

$(RES): SeqDisp.rc
	$(RC) $< -O coff -o $@

clean:
	rm -f $(OBJS) $(RES) $(TARGET)
