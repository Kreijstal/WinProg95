CC = cc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32 -lcomdlg32

TARGET = PopPad4.exe
OBJS = PopPad4.o PopPrnt.o PopPad.res

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.res: %.rc Resource.h
	$(RC) $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
