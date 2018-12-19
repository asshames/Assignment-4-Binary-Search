#include "BubbleSort.h"
#include<iostream>

using namespace std;

BubbleSort::BubbleSort()
{

}

BubbleSort::~BubbleSort()
{

}

void BubbleSort:: BubbleSorter(int *array, int Size)
{
    cout<<"Showing Here Every Step for Bubble Sort Using Array Base"<<endl;
    bool flag = true;
    int number = 0;
    int temp;
    while (flag)
    {
        flag = false;
        number++;
        for (int index = 0; index < Size - number; ++index)
        {
            if (array[index] > array[index + 1])
            {
                temp = array[index];
                array[index] = array[index + 1];
                array[index + 1] = temp;
                for(int index=0; index<8; index++)
                {
                    cout<<array[index]<<" ";
                }
                cout<<""<<endl;
                flag = true;
            }
        }
    }
}

void BubbleSort:: BubbleSorterVector(vector<int>& data)
{
    cout<<"Showing Here Every Step for Bubble Sort Using Vector"<<endl;
    bool flag = true;
    int number = 0;
    int temp;
    while (flag)
    {
        flag = false;
        number++;
        for (int index = 0; index < data.size()- number; ++index)
        {
            if (data[index] > data[index + 1])
            {
                temp = data[index];
                data[index] = data[index+ 1];
                data[index + 1] = temp;
                flag = true;
                for (vector<int>::iterator value = data.begin(); value != data.end(); ++value)
                    cout<<*value<<" ";
                cout<<""<<endl;
            }
        }
    }
}
