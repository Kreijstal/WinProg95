CC = gcc
RC = windres
CFLAGS = -Wall -shared
TARGET = StrLib.dll
SRCS = StrLib.c
OBJS = $(SRCS:.c=.o)
RES = StrProg.res

TEST_TARGET = StrProg
TEST_SRCS = StrProg.c
TEST_OBJS = $(TEST_SRCS:.c=.o)

all: $(TARGET) $(TEST_TARGET)

%.res: %.rc
	$(RC) $< -O coff -o $@

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(CFLAGS)

$(TEST_TARGET): $(TEST_OBJS) $(TARGET) $(RES)
	$(CC) $(TEST_OBJS) $(RES) -L. -lStrLib -o $(TEST_TARGET) -mwindows

clean:
	rm -f $(OBJS) $(TEST_OBJS) $(RES) $(TARGET) $(TEST_TARGET) $(TEST_TARGET).exe
