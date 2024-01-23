#include "sort.h"

/**
 * swap - Swaps elements between two variables
 * 
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
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble Sort algorithm
 * 
 * @array: The array to be sorted
 * @size: The number of elements in @array
*/
void bubble_sort(int *array, size_t size)
{
    size_t i, j;

    if (sizeof(array) == 0 || size == 0)
        return;

    for (i = 0; i < size; i++)
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