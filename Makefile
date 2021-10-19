all: quicksort.o
	mkdir build
	g++ -o build/quicksort quicksort.o

quicksort.o: quicksort.h quicksort.cpp
	g++ -c quicksort.cpp

run: 
	build/quicksort

clean:
	rm -rf build