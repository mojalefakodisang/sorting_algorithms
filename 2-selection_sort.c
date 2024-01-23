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
	size_t i, j;

	if (array == NULL || size == 0)
		return;
	
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
}