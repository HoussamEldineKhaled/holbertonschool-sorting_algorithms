#include "sort.h"


/**
 * swap - swapping
 * @a: first element
 * @b: right element
*/


void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}


/**
 * partition - parition array
 * @array: input array
 * @low: lower element
 * @high: higher element
 * @size: size of array
 * Return: i + 1
*/

int partition(int *array, int low, int high, size_t size)
{
int pivot = array[high];
int i = low - 1, j = low;
while (j < high)
{
if (array[j] < pivot)
{
i++;
if (i != j)
{
swap(&array[i], &array[j]);
print_array(array, size);
}
}
j++;
}
if (array[i + 1] != array[high])
{
swap(&array[i + 1], &array[high]);
print_array(array, size);
}
return (i + 1);
}

/**
 * quick_sort_recursive - implement quick sort
 * @array: input array
 * @size: size of array
*/


void quick_sort_recursive(int *array, int low, int high, size_t size)
{
int pivot_index = 0;
if (low < high)
{
pivot_index = partition(array, low, high, size);
quick_sort_recursive(array, low, pivot_index - 1, size);
quick_sort_recursive(array, pivot_index + 1, high, size);
}
}

/**
 * quick_sort - sort array
 * @array: input array
 * @size: size of array
*/


void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
{
return;
}
quick_sort_recursive(array, 0,size - 1, size);
}
