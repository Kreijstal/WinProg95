CFLAGS = -Wall -Wextra
LDLIBS = -lgdi32

TARGET = Emf07
SRCS = $(TARGET).c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(LDLIBS)

clean:
	rm -f $(OBJS) $(TARGET) $(TARGET).exe
