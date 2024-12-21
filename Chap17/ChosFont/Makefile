CC = gcc
CFLAGS = -Wall -Wextra -g
WINLIBS = -lgdi32 -luser32 -lkernel32 -lcomctl32
RC = windres

TARGET = ChosFont
SRCS = ChosFont.c
RES = ChosFont.res

$(TARGET): $(SRCS) $(RES)
	$(CC) $(CFLAGS) $(SRCS) $(RES) -o $(TARGET) $(WINLIBS)

$(RES): ChosFont.rc
	$(RC) -i $< -o $@ --target=pe-x86-64-coff

clean:
	rm -f $(TARGET) $(RES)
