#include "quicksort.h"

using std::vector;
using std::cout;
using std::cin;

template<typename T>
std::string VectorToString(vector<T> vec)
{
    std::stringstream ss;
    ss << "[";
    for(int i = 0; i < vec.size(); ++i)
    {
        ss << vec[i];
        if(i == vec.size() - 1)
        {
            ss << "]";
        }
        else
        {
            ss << ", ";
        }
    }
    return ss.str();
}

template<typename T>
int Partition(vector<T>& elements, int l, int r)
{
    int pivot = l;
    ++l;
    for(; l <= r; ++l)
    {
        if(elements[l] < elements[pivot])
        {
            T temp = elements[pivot];
            elements[pivot] = elements[l];
            elements[l] = elements[++pivot];
            elements[pivot] = temp;
        }
    }
    return pivot;
}

template<typename T>
void QuicksortRec(vector<T>& elements, int l, int r)
{
     if(l >= r)
    {
        return;
    }
    else
    {
        int pivot = Partition(elements, l, r);
        QuicksortRec(elements, l, pivot);
        QuicksortRec(elements, pivot + 1, r);
    }
}

template<typename T>
void Quicksort(vector<T>& elements)
{
    QuicksortRec(elements, 0, elements.size() - 1);
}

int main(int arc, char** argv)
{
    vector<int> testVec;
    std::ifstream inputFile("inputs.txt");
    while(!inputFile.eof())
    {
        std::stringstream ss;
        char c;
        inputFile.read(&c, 1);
        while(c != '\n' && !inputFile.eof())
        {
            if(c == ' ' || c == ',')
            {
                testVec.push_back(std::stoi(ss.str()));
                ss.str("");
            }
            else
            {
                ss << c;
            }
            inputFile.read(&c, 1);
        }
        testVec.push_back(std::stoi(ss.str()));
        ss.str("");

        //TEST AREA---------------------------------------------------------------------------//
        Quicksort(testVec);
        cout << VectorToString(testVec) << "\n";
        testVec.clear();

        //TEST AREA---------------------------------------------------------------------------//
    }
    return 0;
}