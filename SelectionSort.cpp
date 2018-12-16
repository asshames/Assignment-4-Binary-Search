#include "SelectionSort.h"
#include <iostream>

using namespace std;

SelectionSort::SelectionSort()
{

}

SelectionSort::~SelectionSort()
{

}

inline void Swap(int &first, int &second)
{
    int temp = first;
    first = second;
    second = temp;
}

void SelectionSort::SelectionSorter(int arr[], int arr_size)
{
    cout<<"Showing Here Every Step for Selection Sort in Array Base"<<endl;
    for(int index = 0; index < arr_size-1; ++index)
    {
        int Min = index;
        for(int index2 = index+1; index2<arr_size; ++index2)
            if (arr[index2] < arr[Min])
            Min = index2;
        Swap(arr[Min], arr[index]);
        for(int index = 0; index<arr_size; index++)
        {
            cout<<arr[index]<<" ";
        }
        cout<<""<<endl;
    }
}
