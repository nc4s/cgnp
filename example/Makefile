CC = gcc
CFLAGS = -O2 -I../include
LDFLAGS = -L..
LDLIBS = -lcgnp

SRC = main.c
TARGET = example

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^ $(LDLIBS)

clean:
	rm -f $(TARGET)