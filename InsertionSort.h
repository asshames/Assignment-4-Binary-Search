#ifndef INSERTIONSORT_H_INCLUDED
#define INSERTIONSORT_H_INCLUDED

#include <vector>
#include <iostream>

using namespace std;

class InsertionSort
{
public:
    InsertionSort();
    ~InsertionSort();
    void InsertionSorter(int arr[], int arr_size);
    void InsertionSorterVector(vector<int>& data);
};



#endif // INSERTIONSORT_H_INCLUDED
