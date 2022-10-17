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
void quick_sort(int *array, size_t size)
{
    if (!array || size < 2)
        return;
    
    quickSort(array, 0, size - 1, size);
}
  
/**
 * quicksort - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: pointer to the array to sort
 * @low: start of the array
 * @high: end of the array
 * @size: size of the array
 * Return: nothing void
 */
void quickSort(int arr[], int low, int high, size_t size)
{
    if (low < high) {
        int index = partition(arr, low, high, size);
  
        quickSort(arr, low, index - 1, size);
        quickSort(arr, index + 1, high, size);
    }
}

/**
 * swap - function that swap value
 * @a: pointer to the first value
 * @b: pointer to the second value
 * Return: nothing void
 */
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/**
 * partition - function that partition an array of int
 * and swap the value
 * @array: array to partition
 * @low: beggining of the array
 * @high: end of the array
 * @size: size of the array
 * Return: returns the nwes index oh the value
 */
int partition(int arr[], int low, int high, size_t size)
{
    int i, j;
    int pivot = arr[high]; 
    i = (low - 1); 
        
  
    for (j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot) {
            i++; 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    print_array(arr, size);
    return (i);
}