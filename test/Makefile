CC = gcc
CFLAGS = -O2 -I../include # To let GCC use cgnp.h
LDFLAGS = -L.. # To let GCC use libcgnp.a
LDLIBS = -lcgnp # Link libcgnp.a

SRC = main.c
TARGET = example

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^ $(LDLIBS)

clean:
	rm -f $(TARGET)