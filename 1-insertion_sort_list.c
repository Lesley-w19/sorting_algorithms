#include "sort.h"
/**
 * insertion_sort_list - a function that
 * sorts a doubly linked list
 * of integers in ascending order
 *
 * @list: the list to sort by insertion sort
 *
 * Return: the sorted list
 */
void insertion_sort_list(listint_t **list)
{
listint_t *afterVal;
if (list == NULL || *list == NULL)
return;

afterVal = (*list)->next;

while (afterVal != NULL)
{
while (afterVal->prev && afterVal->prev->n > afterVal->n)
{
afterVal->prev->next = afterVal->next;
if (afterVal->next)
afterVal->next->prev = afterVal->prev;
afterVal->next = afterVal->prev;
afterVal->prev = afterVal->next->prev;
afterVal->next->prev = afterVal;

if (afterVal->prev == NULL)
*list = afterVal;
else
afterVal->prev->next = afterVal;

print_list(*list);
}
afterVal = afterVal->next;
}
}
