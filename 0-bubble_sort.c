#include "sort.h"
/**
 * bubble_sort - a function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm 
 *
 * @array: the array of integers
 * @size: size of the array
 * 
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int temp;

    if (!array)
        return;

    if (size == 0 || size == 1)
        return;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                print_array(array, size);
            }
        }
    }
}