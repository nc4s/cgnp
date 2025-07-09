# Use this to compile user-a.c and user-b.c, then run user-a and user-b from separate terminals and watch the magic happen
# Ensure you make libcgnp.a in the superior dir first (to do so from the "examples" dir, simply run
# `cd ..`, `make`, and `cd examples` before running this makefile)

CC = gcc
CFLAGS = -O2 -I../include     # To let GCC use cgnp.h
LDFLAGS = -L..                # To let GCC use libcgnp.a
LDLIBS = -lcgnp               # Link libcgnp.a

SRCS = user-a.c user-b.c
OBJS = user-a user-b

.PHONY: all clean

all: $(OBJS)
	cat ../lgog.txt

user-a: user-a.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $< $(LDLIBS)

user-b: user-b.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $< $(LDLIBS)

clean:
	rm -f $(OBJS)