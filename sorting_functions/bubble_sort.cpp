//
// Created by chad on 10/6/19.
//

#include "bubble_sort.h"
//#include "../utilities.cpp"
void bubbleSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for (int j = 0; j < n-i-1; ++j)
        {
            if (arr[j] < arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}