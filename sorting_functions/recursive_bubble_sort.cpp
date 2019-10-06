//
// Created by chad on 10/6/19.
//

#include "recursive_bubble_sort.h"
//#include "../utilities.cpp"
// A function to implement bubble sort
void rBubbleSort(int arr[], int n)
{
    if (n == 1)
        return;

    // One pass of bubble sort. After
    // this pass, the largest element
    // is moved (or bubbled) to end.
    for (int i=0; i<n-1; i++)
        if (arr[i] > arr[i+1])
            swap(&arr[i], &arr[i+1]);

    // Largest element is fixed,
    // recur for remaining array
    rBubbleSort(arr, n-1);
}
