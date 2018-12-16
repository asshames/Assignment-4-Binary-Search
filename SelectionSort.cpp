#include "SelectionSort.h"

SelectionSort::SelectionSort()
{

}

SelectionSort::~SelectionSort()
{

}

inline void Swap(int &first. int &second)
{
    int temp = first;
    first = second;
    second = temp;
}

void SelectionSort::SelectionSorter(int arr[], int arr_size)
{
    for(int index = 0; index < arr_size-1; ++index)
    {
        int Min = index;
        for(int index2 = index+1; index2< arr_size; ++index2)
            if (arr[index2] < arr[Min])
            Min = index2;
        Swap(arr[Min], arr[index]);
    }
}
