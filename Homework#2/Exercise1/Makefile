CC = g++

all: program

program: program.o swap.o
	$(CC) program.o swap.o -o program

program.o: program.cpp swap.h
	$(CC) -c program.cpp -o program.o

swap.o: swap.cpp
	$(CC) -c swap.cpp -o swap.o


.PHONY: clean

clean:
	rm -f *.o program