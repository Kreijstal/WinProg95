CC = gcc
CFLAGS = -Wall -Wextra -g
WINLIBS = -lgdi32 -luser32 -lkernel32 -lcomctl32
RC = windres

TARGET = EZTest
SRCS = EZTest.c EZFont.c FontDemo.c
RES = FontDemo.res

$(TARGET): $(SRCS) $(RES)
	$(CC) $(CFLAGS) $(SRCS) $(RES) -o $(TARGET) $(WINLIBS)

$(RES): FontDemo.rc
	$(RC) -i $< -o $@ --target=pe-x86-64

clean:
	rm -f $(TARGET) $(RES)
