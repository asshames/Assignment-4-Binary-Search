#include <iostream>
#include "SelectionSort.h"

using namespace std;

int main()
{
    cout<<"\n Array Base \n"<<endl;
    int arr[]={14,33,27,10,35,19,48,44};
    int arraySelectionSort[8];
    for(int index=0; index<8; index++)
    {
        arraySelectionSort[index] = arr[index];
    }
    SelectionSort ObjectSelection;
    ObjectSelection.SelectionSorter(arraySelectionSort,8);
    cout<<"Selection Sort Final Output for Array Base : " <<endl;
    for(int index=0; index<8; index++)
    {
        cout<<arraySelectionSort[index]<<" ";
    }
    cout<<"\n\n\n"<<endl;


    return 0;
}
