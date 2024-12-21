CC = cc
CFLAGS = -Wall -shared 
LIBS = -lgdi32
TARGET = EdrLib.dll
SRCS = EdrLib.c
OBJS = $(SRCS:.c=.o)

TEST_TARGET = EdrTest
TEST_SRCS = EdrTest.c
TEST_OBJS = $(TEST_SRCS:.c=.o)

all: $(TARGET) $(TEST_TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(CFLAGS) $(LIBS)

$(TEST_TARGET): $(TEST_OBJS) $(TARGET)
	$(CC) $(TEST_OBJS) -L. -lEdrLib -o $(TEST_TARGET) -mwindows

clean:
	rm -f $(OBJS) $(TEST_OBJS) $(TARGET) $(TEST_TARGET) $(TEST_TARGET).exe
