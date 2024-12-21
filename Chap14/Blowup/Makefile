RC ?= windres

CC = cc
CFLAGS = -Wall -mwindows
LDFLAGS = -mwindows
LDLIBS = -lgdi32

TARGET = Blowup.exe
OBJS = Blowup.o Blowup.res

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) $(LDLIBS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.res: %.rc
	$(RC) -I. $< -O coff -o $@

clean:
	rm -f $(TARGET) $(OBJS)
