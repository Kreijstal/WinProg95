CFLAGS = -Wall
OBJS = Colors3.o

all: Colors3.exe

Colors3.exe: $(OBJS)
	$(CC) -o $@ $(OBJS) -lgdi32

clean:
	rm -f *.o *.exe
