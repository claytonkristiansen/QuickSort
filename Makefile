CFLAGS= -g -Wall -Wextra

all: quicksort.o
	mkdir build
	g++ -g -o build/quicksort quicksort.o

quicksort.o: quicksort.h quicksort.cpp
	g++ -g -c quicksort.cpp

run: 
	build/quicksort

clean:
	rm -rf build
	rm *.o