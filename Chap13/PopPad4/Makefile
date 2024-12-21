CC = cc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32 -lcomdlg32

TARGET = PopPad4.exe
OBJS = PopPad4.o PopPrnt.o PopPad.res.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

PopPad.res.o: PopPad.rc Resource.h
	$(RC) PopPad.rc -o PopPad.res.o

clean:
	rm -f $(TARGET) $(OBJS)
