#include "../sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {7, 44, 56, 73, 103, 104, 111, 197, 209, 212, 221, 260, 264, 293, 308, 330, 331, 429, 430, 496};
	int arr[] = {143, 331, 294, 159, 32, 37, 395, 93, 185, 30, 489, 263, 449, 213, 296, 119, 80, 388, 106, 352};
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
