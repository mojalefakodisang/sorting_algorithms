#include "sort.h"

/**
 * swap - Swaps the element between two variables
 *
 * @a: First Variable
 * @b: Second Variable
*/
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Sorts an array in ascending order
 * using the Selection Sort Algorithm
 *
 * @array: Array to be sorted
 * @size: Size of the array to be sorted
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	if (sizeof(array) == 0 || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;

			if (min_idx != i)
			{
				swap(&array[min_idx], &array[i]);
				print_array(array, size);
			}
		}
	}
}
