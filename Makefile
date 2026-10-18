CC = g++
CFLAGS = -I src/include
LDFLAGS = -L src/lib
LDLIBS = -lmingw32 -lSDL3

all: main

main: main.cpp
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $< $(LDLIBS)
debug: main.cpp
	$(CC) $(CFLAGS) -g -O0 -DDEBUG $(LDFLAGS) -o $@ $< $(LDLIBS)