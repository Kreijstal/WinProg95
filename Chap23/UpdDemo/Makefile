CFLAGS = -Wall
LDFLAGS = -mwindows
LDLIBS = -lwinmm -lcomctl32

TARGET = UpdDemo.exe
OBJS = UpdDemo.o UpdDemo_rc.o

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LDLIBS)

UpdDemo_rc.o: UpdDemo.rc
	windres -O coff UpdDemo.rc UpdDemo_rc.o

clean:
	rm -f $(TARGET) $(OBJS)
