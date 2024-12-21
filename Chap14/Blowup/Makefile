CC = cc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32

TARGET = Blowup.exe
OBJS = Blowup.o Blowup_res.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)

Blowup_res.o: Blowup.rc
	$(RC) $< $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
