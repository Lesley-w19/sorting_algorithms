#include "sort.h"

/**
 * swap - function that swap value
 * @a: pointer to the first value
 * @b: pointer to the second value
 * Return: nothing void
 */
void swap(int* a, int* b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
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
int partition(int *array, int low, int high, size_t size)
{
    int pivot = array[high]; 
    int i = (low - 1); 
    int j;       
  
   for (j = low; j <= high - 1; j++) {
       
        if (array[j] < pivot) {
            i++;
            swap(&array[i], &array[j]);
            print_array(array, size);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}
/**
 * quickSort - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: pointer to the array to sort
 * @low: start of the array
 * @high: end of the array
 * @size: size of the array
 * Return: nothing void
 */
void quickSort(int *array, int low, int high, size_t size)
{
    int index;
    if (low < high) {
        index = partition(array, low, high, size);
  
        quickSort(array, low, index - 1, size);
        quickSort(array, index + 1, high, size);
    }
}

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
    if (array == NULL || size < 2)
        return;
    
    quickSort(array, 0, size - 1, size);
}

