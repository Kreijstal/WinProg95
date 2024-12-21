CC = cc
RC ?= windres
CFLAGS = -Wall -mwindows
LIBS = -lgdi32

TARGET = Bricks1.exe
SRCS = Bricks1.c
RES = Bricks1.res
OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS) $(RES)
	$(CC) $(OBJS) $(RES) $(LIBS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.res: %.rc
	$(RC) -O coff $< $@

clean:
	rm -f $(OBJS) $(RES) $(TARGET)
