CC = gcc
CFLAGS = -O2 -c

SRC = src/cgnp.c
OBJ = cgnp.o
TARGET = libcgnp.a

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJ)
	ar rcs $(TARGET) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -o $(OBJ) $(SRC)

clean:
	rm -f $(TARGET) $(OBJ)