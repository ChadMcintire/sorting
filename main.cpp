#include <iostream>

// C++ program for insertion sort


#include "sorting_functions/insertion_sort.cpp"
#include "sorting_functions/selection_sort.cpp"
#include "sorting_functions/recursive_bubble_sort.cpp"
#include "sorting_functions/bubble_sort.cpp"

/* Driver code */
int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "I have no idea what is happening";
    //insertionSort(arr, n);
    printArray(arr, n);
    int arr1[] = {64, 25, 12, 22, 11};
    int x = sizeof(arr1)/sizeof(arr1[0]);
    selectionSort(arr1, x);
    printArray(arr1, n);
    int arr2[] = {64, 34, 25, 12, 22, 11, 90};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    rBubbleSort(arr2, n1);
    printf("Sorted array : \n");
    printArray(arr, n1);
    return 0;
}
