CFLAGS = -Wall
LDFLAGS = -mwindows
LDLIBS = -lwinmm -lcomctl32 -lws2_32

TARGET = NetTime.exe
OBJS = NetTime.o NetTime_rc.o

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LDLIBS)

NetTime_rc.o: NetTime.rc
	$(RC) -O coff NetTime.rc NetTime_rc.o

clean:
	rm -f $(TARGET) $(OBJS)
