
CC = gcc
WINDRES = windres
CFLAGS = -Wall -I../ShowDib1
LDFLAGS = -mwindows
LIBS = -lgdi32

TARGET = ShowDib2.exe
SRCS = Showdib2.c ../ShowDib1/DibFile.c
OBJS = $(notdir $(SRCS:.c=.o))
RES = ShowDib2.res

$(TARGET): $(OBJS) $(RES)
	$(CC) $(OBJS) $(RES) $(LDFLAGS) $(LIBS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

%.o: ../ShowDib1/%.c
	$(CC) $(CFLAGS) -c $<

$(RES): ShowDib2.rc resource.h
	$(WINDRES) -O coff ShowDib2.rc $(RES)

clean:
	rm -f $(OBJS) $(RES) $(TARGET)
