CFLAGS = -Wall -Wextra
LDLIBS = -lgdi32 -lcomdlg32
RC = windres

TARGET = EmfView
SRCS = $(TARGET).c
OBJS = $(SRCS:.c=.o)
RESOURCES = $(TARGET).res

all: $(TARGET)

$(TARGET): $(OBJS) $(RESOURCES)
	$(CC) $(OBJS) $(RESOURCES) -o $(TARGET) $(LDLIBS)

%.res: %.rc
	$(RC) $< -O coff -o $@

clean:
	rm -f $(OBJS) $(TARGET) $(TARGET).exe $(RESOURCES)
