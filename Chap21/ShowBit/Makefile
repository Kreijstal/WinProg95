CC = gcc
RC = windres
CFLAGS = -Wall -shared
TARGET = BitLib.dll
SRCS = BitLib.c
OBJS = $(SRCS:.c=.o)
RES = BitLib.res

TEST_TARGET = ShowBit
TEST_SRCS = ShowBit.c
TEST_OBJS = $(TEST_SRCS:.c=.o)

all: $(TARGET) $(TEST_TARGET)

%.res: %.rc
	$(RC) $< -O coff -o $@

$(TARGET): $(OBJS) $(RES)
	$(CC) $(OBJS) $(RES) -o $(TARGET) $(CFLAGS)

$(TEST_TARGET): $(TEST_OBJS) $(TARGET)
	$(CC) $(TEST_OBJS) -L. -lBitLib -o $(TEST_TARGET) -mwindows

clean:
	rm -f $(OBJS) $(TEST_OBJS) $(RES) $(TARGET) $(TEST_TARGET) $(TEST_TARGET).exe
