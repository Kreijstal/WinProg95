CC = gcc
CFLAGS = -Wall -Wextra -g
WINLIBS = -lgdi32 -luser32 -lkernel32 -lcomctl32
RC = windres

TARGET = UniChars
SRCS = Unichars.c
RES = Unichars.res

$(TARGET): $(SRCS) $(RES)
	$(CC) $(CFLAGS) $(SRCS) $(RES) -o $(TARGET) $(WINLIBS)

$(RES): Unichars.rc
	$(RC) -i $< -o $@ --target=pe-x86-64

clean:
	rm -f $(TARGET) $(RES)
