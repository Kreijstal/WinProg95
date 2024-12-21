CC = gcc
CFLAGS = -Wall -Wextra -g
WINLIBS = -lgdi32 -luser32 -lkernel32 -lcomctl32
RC = windres

TARGET = Justify2
SRCS = Justify2.c
RES = Justify2.res

$(TARGET): $(SRCS) $(RES)
	$(CC) $(CFLAGS) $(SRCS) $(RES) -o $(TARGET) $(WINLIBS)

$(RES): Justify2.rc
	$(RC) -i $< -o $@ --target=pe-x86-64

clean:
	rm -f $(TARGET) $(RES)
