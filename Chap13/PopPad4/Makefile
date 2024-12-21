CC = gcc
CFLAGS = -Wall -mwindows
LIBS = -lgdi32 -lcomdlg32

TARGET = PopPad4.exe
OBJS = PopPad4.o PopPrnt.o PopPad_res.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)

PopPad_res.o: PopPad.rc Resource.h
	windres PopPad.rc -o PopPad_res.o

clean:
	rm -f $(TARGET) $(OBJS)
