#include "sort.h"

/**
 * swap - swaps two integers
 *
 * @a: first integer
 * @b: second integer
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - algorithm to that sorts an array recursively
 *
 * @array: array to be sorted
 * @size: number of elements in @array
 * @low: first element of the array
 * @high: last element of the array
 *
 * Return: returns the index of the new pivot
 */
int partition(int *array, size_t size, int low, int high)
{
	int i, j;
	int pivot = array[high];

	i = low - 1;
	for (j = low; j <= high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	i++;
	swap(&array[i], &array[high]);

	return (i);
}

/**
 * partition_sort - algorithm to that sorts an array recursively
 *
 * @array: array to be sorted
 * @size: number of elements in @array
 * @low: first element of the array
 * @high: last element of the array
 */
void partition_sort(int *array, size_t size, int low, int high)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, size, low, high);
		partition_sort(array, size, low, pivot - 1);
		partition_sort(array, size, pivot + 1, high);
	}
}

/**
 * quick_sort - sorts a given array based on partition algorithm
 *
 * @array: array to be sorted
 * @size: number of elements in @array
 */
void quick_sort(int *array, size_t size)
{
	int low, high;

	if (array == NULL || size < 2)
		return;

	low = 0;
	high = size - 1;
	partition_sort(array, size, low, high);
}
