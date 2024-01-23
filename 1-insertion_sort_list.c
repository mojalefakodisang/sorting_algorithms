#include "sort.h"

/**
 * insertion_sort_list - Sorts the list in ascending order
 * using Insertion Sort Algorithm
 *
 * @list: List to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *key;
	int temp;

	if (!(*list) || !(*list)->next)
		return;

	current = (*list)->next;
	while ((*list)->next->next && current != NULL)
	{
		if (current->n < current->prev->n)
		{
			temp = current->n;
			*(int *)&current->n = current->prev->n;
			*(int *)&current->prev->n = temp;
			print_list(*list);
			key = current->prev;
			while (key->prev && key->n < key->prev->n)
			{
				temp = key->n;
				*(int *)&key->n = key->prev->n;
				*(int *)&key->prev->n = temp;
				print_list(*list);
				key = key->prev;
			}
		}
		current = current->next;
	}
}

