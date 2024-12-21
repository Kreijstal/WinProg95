CC = cc
CFLAGS = -Wall -Wextra -g
WINLIBS = -lgdi32 -luser32 -lkernel32 -lcomctl32 -lcomdlg32
RC = windres

TARGET = UniChars
SRCS = Unichars.c
RES = Unichars.res

$(TARGET): $(SRCS) $(RES)
	$(CC) $(CFLAGS) $(SRCS) $(RES) -o $(TARGET) $(WINLIBS)

%.res: %.rc
	$(RC) $< -O coff -o $@

clean:
	rm -f $(TARGET) $(RES)
