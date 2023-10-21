#include "../sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {347, 474, 9, 244, 361, 189, 6, 92, 82, 354, 168, 436, 80, 102, 497, 185, 218, 113, 406, 198};
	int arr[] = {8, 28, 75, 145, 146, 158, 163, 168, 229, 266, 267, 273, 287, 342, 368, 407, 428, 443, 457, 468};
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
