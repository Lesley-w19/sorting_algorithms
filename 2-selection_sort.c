#include "sort.h"
/**
 * selection_sort - a function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 *
 * @array: the array
 * @size: size of the array
 * 
 * Return: list sorted by selection sort ascending order
 */
void selection_sort(int *pmArray, size_t size)
{
size_t i, j, min;
int temp, *array = pmArray;

if (!pmArray || size < 2)
return;

for (i = 0; i < size - 1; i++)
{
min = i;

for (j = i + 1; j < size; j++)
{
if (array[j] < array[min])
                    min = j;
                
if (min != i)
{
temp = array[min];
array[min] = array[i];
array[i] = temp;
print_array(array, size);
}
                   
}
} 
}
