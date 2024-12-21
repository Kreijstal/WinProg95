CC = gcc
CFLAGS = -Wall -Wextra -g
WINLIBS = -lgdi32 -luser32 -lkernel32 -lcomctl32
RC = windres

TARGET = PickFont
SRCS = PickFont.c
RES = PickFont.res

$(TARGET): $(SRCS) $(RES)
	$(CC) $(CFLAGS) $(SRCS) $(RES) -o $(TARGET) $(WINLIBS)

$(RES): PickFont.rc
	$(RC) -i $< -o $@ --target=pe-x86-64

clean:
	rm -f $(TARGET) $(RES)
