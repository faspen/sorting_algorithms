#include "sort.h"

/**
* swap - swap two values
* @i: value 1
* @j: value 2
*/
void swap(int *i, int *j)
{
	int tmp;

	tmp = *i;
	*i = *j;
	*j = tmp;
}
/**
* bubble_sort - sort integers ascending order
*
* @array: array to be sorted
* @size: size of array
*
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size >= 2)
	{
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
	}
}
