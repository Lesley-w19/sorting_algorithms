#include "sort.h"
/**
 * quick_sort - a fucntion that sorts a list usin the Lomunto
 * quick sort algorithm
 *
 * @array: the array to be sorted
 * @size: size of the array to be sorted
 * 
 * Return: a sorted list
 */

/* A utility function to swap two elements */
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
  
/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int partition(int arr[], int low, int high, size_t size)
{
    int i, j;
    int pivot = arr[high]; /* pivot */
    i = (low - 1); 
        /* Index of smaller element and indicates
         the right position of pivot found so far
        */
  
    for (j = low; j <= high - 1; j++) {
        /* If current element is smaller than the pivot */
        if (arr[j] < pivot) {
            i++; 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    print_array(arr, size);
    return (i + 1);
}
  
/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high, size_t size)
{
    if (low < high) {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int index = partition(arr, low, high, size);
  
        /* Separately sort elements before
         partition and after partition */
        quickSort(arr, low, index - 1, size);
        quickSort(arr, index + 1, high, size);
    }
}

void quick_sort(int *array, size_t size)
{
    if (!array || size < 2)
        return;
    
    quickSort(array, 0, size - 1, size);
}