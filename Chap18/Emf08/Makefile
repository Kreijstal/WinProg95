CFLAGS = -Wall -Wextra
LDLIBS = -lgdi32
RC = windres

TARGET = Emf08
SRCS = $(TARGET).c Emf.c
OBJS = $(SRCS:.c=.o)
RESOURCES = Emf.res

all: $(TARGET)

$(TARGET): $(OBJS) $(RESOURCES)
	$(CC) $(OBJS) $(RESOURCES) -o $(TARGET) $(LDLIBS)

%.res: %.rc
	$(RC) $< -O coff -o $@

clean:
	rm -f $(OBJS) $(TARGET) $(TARGET).exe $(RESOURCES)
