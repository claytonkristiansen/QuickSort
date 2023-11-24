#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

/*  Converts Vector to String for logging */
template<typename T>
std::string VectorToString(std::vector<T> vec);

/*  Swaps the position of two elements in a Vector in place*/
template<typename T>
void Swap(std::vector<T>& elements, int i1, int i2);

/*  Returns the position where all the elements to the left 
    are less than the element originally in the "l" position.
    Onlt does this on the range between "l" and "r" */
template<typename T>
int Partition(std::vector<T>& elements, int l, int r);

/*  The function called once the necessary parameters have been
    calculated in the wrapper "Quicksort" function */
template<typename T>
void QuicksortRec(std::vector<T>& elements, int l, int r);

/*  The entrypoint function for the Quicksort algorithm */
template<typename T>
void Quicksort(std::vector<T>& elements);