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
size_t i, j, temp, gap = 0;
int val;

if (array == NULL || size < 2)
{
return;
}

while (gap <= size / 3)
{
gap = gap * 3 + 1;
}

while (gap > 0)
{

for (i = gap; i < size; i++)
{
val = array[i];
j = i;

while (j > gap - 1 && array[j - gap] >= val)
{
temp = array[j - gap];
array[j - gap] = array[j];
array[j] = temp;
j -= gap;
}
}
gap = (gap - 1) / 3;
print_array(array, size);
}
}
