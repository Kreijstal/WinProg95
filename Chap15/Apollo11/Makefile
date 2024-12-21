
CC = gcc
CFLAGS = -Wall -mwindows -I../ShowDib1
LIBS = -lgdi32

TARGET = Apollo11.exe
SRCS = Apollo11.c ../ShowDib1/DibFile.c
OBJS = Apollo11.o DibFile.o

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(LIBS) -o $(TARGET)

Apollo11.o: Apollo11.c
	$(CC) $(CFLAGS) -c $<

DibFile.o: ../ShowDib1/DibFile.c
	$(CC) $(CFLAGS) -c $< -o DibFile.o

clean:
	rm -f $(OBJS) $(TARGET)
