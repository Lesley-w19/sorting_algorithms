#include "sort.h"
/**
 * shell_sort - a function that sorts an array of integers
 * in ascending order using the Shell sort algorithm,
 * using the Knuth sequence
 *
 * @array: array to be sort
 * @size: the size of tthe array
 *
 * Return: a sorted array
 *
 */
void shell_sort(int *array, size_t size)
{
    size_t i, j, gap = 0;

    if (array == NULL || size < 2)
        return;
    
    if (gap <= size/3)
        gap = gap * 3 + 1;

    for ( i = gap; i < size; i++ )
    {
        int temp = array[i];

        for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
                array[j] = array[j - gap];
              
           
        array[j] = temp;
        
    }
    gap = (gap - 1) / 3;
	print_array(array, size);
}