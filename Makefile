
quicksort.o: quicksort.cpp
	g++ -c quicksort.cpp

all: quicksort.o
	g++ -o build/quicksort quicksort.o