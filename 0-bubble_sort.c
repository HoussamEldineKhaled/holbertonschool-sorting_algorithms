#include "sort.h"
#include <stddef.h>


/**
 * bubble_sort - implement bubble sort
 * @array: array input
 * @size: array
*/



void bubble_sort(int *array, size_t size)
{
size_t i = 0;
size_t j = 0;
int temp;
int swapped;
if (array == NULL || size < 2)
{
return;
}
while (i < size - 1)
{
j = 0;
swapped = 0;
while (j < size - i - 1)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
swapped = 1;
print_array(array, size);
}
j++;
}
i++;
if (swapped == 0)
{
break;
}
}
}
