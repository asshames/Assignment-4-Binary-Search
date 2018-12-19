#ifndef BUBBLESORT_H_INCLUDED
#define BUBBLESORT_H_INCLUDED

#include <vector>
#include <iostream>

using namespace std;

class BubbleSort
{
public:
    BubbleSort();
    ~BubbleSort();
    void BubbleSorter(int *array, int Size);
    void BubbleSorterVector(vector<int>& data);
};


#endif // BUBBLESORT_H_INCLUDED
