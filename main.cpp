#include <iostream>
#include "SelectionSort.h"
#include "InsertionSort.h"

using namespace std;

int main()
{
    int arr[]={14,33,27,10,35,19,48,44};
    int arraySelectionSort[8];
    cout<<"\nArray Base"<<endl;
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

    cout<<"Vector Part"<<endl;
    vector<int> vectorSelectionSort(arr,arr+sizeof(arr)/sizeof(int));
    ObjectSelection.SelectioSorterVector(vectorSelectionSort);
    cout<<"Selection Sort Final Output for Vector : "<<endl;
    for(int index=0;index<vectorSelectionSort.size();index++)
        cout<<vectorSelectionSort[index]<<" ";
    cout<<"\n"<<endl;
    cout<<"----------------------------------------------------------------------------------------"<<endl;
    int arrayInsertionSort[8];
    cout<<"\nArray Base"<<endl;
    for(int index=0; index<8; index++)
    {
        arrayInsertionSort[index] = arr[index];
    }
    InsertionSort ObjectInsertion;
    ObjectInsertion.InsertionSorter(arrayInsertionSort,8);
    cout<<"Insertion Sort Final Output for Array Base : "<<endl;
    for(int index=0; index<8; index++)
    {
        cout<<arrayInsertionSort[index]<<" ";
    }
    cout<<"\n\n\n"<<endl;
    cout<<"Vector Part"<<endl;
    vector<int> vectorInsertionSort(arr,arr+sizeof(arr)/sizeof(int));
    ObjectInsertion.InsertionSorterVector(vectorInsertionSort);
    cout<<"Insertion Sort Final Output for Vector : "<<endl;
    for(int index=0; index<vectorInsertionSort.size(); index++)
        cout<<vectorInsertionSort[index]<<" ";
    cout<<"\n"<<endl;
    cout<<"----------------------------------------------------------------------------------------"<<endl;



    return 0;
}
