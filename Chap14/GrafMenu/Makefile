CC = cc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32

TARGET = GrafMenu.exe
OBJS = GrafMenu.o GrafMenu_res.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)

GrafMenu_res.o: GrafMenu.rc
	windres $< $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
