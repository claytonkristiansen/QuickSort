#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

template<typename T>
std::string VectorToString(std::vector<T> vec);

template<typename T>
void Swap(std::vector<T>& elements, int i1, int i2);

template<typename T>
int Partition(std::vector<T>& elements, int l, int r);

template<typename T>
void QuicksortRec(std::vector<T>& elements, int l, int r);

template<typename T>
void Quicksort(std::vector<T>& elements);