#ifndef MERGESORT_H_INCLUDED
#define MERGESORT_H_INCLUDED

#include <vector>
#include <iostream>

using namespace std;

class MergeSort
{
public:
    MergeSort();
    ~MergeSort();
    void MergeSorter(int arr[], int arr_size);
    void MergeSorterVector(vector<int> & data);
};

#endif // MERGESORT_H_INCLUDED
