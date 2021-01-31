#include "sort.h"

/**
* swap - swap two values
* @i: value 1
* @j: value 2
*/
void swap(int *i, int *j)
{
	int tmp;

	tmp =  *i;
	*i = *j;
	*j = tmp;
}

/**
* selection_sort - sort array ascending order
* @array: array to be sorted
* @size: size of array
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, idx;

	if (size > 0)
	{
		for (i = 0; i < size - 1; i++)
		{
			idx = i;
			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[idx])
					idx = j;
			}
			if (idx != i)
			{
				swap(&array[idx], &array[i]);
				print_array(array, size);
			}
		}
	}
}
