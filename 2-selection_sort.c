#include "sort.h"
#include <stddef.h>
/**
 * selection_sort - selection sort
 * @array: unsorted array
 * @size: array size
*/

void selection_sort(int *array, size_t size)
{
size_t i = 0, j = i + 1, min_idx = 0;
int temp;
if (array == NULL || size < 2)
{
return;
}
while (i < size - 1)
{
min_idx = i;
j = i + 1;
while (j < size)
{
if (array[j] < array[min_idx])
{
min_idx = j;
}
j++;
}
if (min_idx != i)
{
temp = array[i];
array[i] = array[min_idx];
array[min_idx] = temp;
print_array(array, size);
}
i++;
}
}
