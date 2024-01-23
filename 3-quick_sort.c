#include "sort.h"

/**
 * swap - Swap between two variables
 * @a: First variable
 * @b: Second variable
*/
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - Partitions an array to return index of pivot
 * @array: Array to be partitioned
 * @size: Size of the @array
 * @low: Lowest index of the array
 * @high: Highest index of the array
 * Return: Returns the index of the pivot
*/
int partition(int *array, size_t size, int low, int high)
{
	int pivot = array[high];
	int above, below;

	for (above = below = low; below < high; below++)
	{
		if (array[below] < pivot)
		{
			if (above < below)
			{
				swap(&array[below], &array[above]);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > pivot)
	{
		swap(&array[above], &array[high]);
		print_array(array, size);
	}

	return (above);
}

/**
 * get_partition - Gets partitions an array to return index of pivot
 * @array: Array to be partitioned
 * @size: Size of the @array
 * @low: Lowest index of the array
 * @high: Highest index of the array
 * Return: Returns the index of the pivot
*/
void get_partition(int *array, size_t size, int low, int high)
{
	int pi;

	if (high - low > 0)
	{
		pi = partition(array, size, low, high);
		get_partition(array, size, low, pi - 1);
		get_partition(array, size, pi + 1, high);
	}
}

/**
 * quick_sort - Sorts an array in ascending order
 * using Quick SOrt algorithm
 * @array: Array to be partitioned
 * @size: Size of the @array
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size == 0)
		return;

	get_partition(array, size, 0, size - 1);
}
