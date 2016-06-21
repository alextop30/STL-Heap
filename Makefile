CC = g++
CFLAGS = -Wall -g -std=c++11

all: heap

heap.o: definitions.h includes.h heap.cc
	${CC} ${CFLAGS} -c heap.cc

heap: heap.o
	${CC} ${CFLAGS} heap.o -o stl_heap

clean:
	rm -rf *.o
	rm -rf stl_heap
