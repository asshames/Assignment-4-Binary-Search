#ifndef SELECTIONSORT_H_INCLUDED
#define SELECTIONSORT_H_INCLUDED
#include <vector>
#include <iostream>

using namespace std;

class SelectionSort{

public:
    SelectionSort();
    ~SelectionSort();
    void SelectionSorter(int arr[], int arr_size);
    void SelectioSorterVector(vector<int> & data);

};


#endif // SELECTIONSORT_H_INCLUDED
