#include "../sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	int arr[] = {5, 6, 2, 1, 3, 4, 7, 8};
	size_t n = sizeof(array) / sizeof(array[0]);
	size_t m = sizeof(arr) / sizeof(arr[0]);
	
	print_array(array, n);
	printf("\n");
	quick_sort(array, n);
	printf("\n");
	print_array(array, n);
	printf("\n==================== End ====================\n");
	print_array(arr, m);
	printf("\n");
	quick_sort(arr, m);
	printf("\n");
	print_array(arr, m);
	return (0);
}
