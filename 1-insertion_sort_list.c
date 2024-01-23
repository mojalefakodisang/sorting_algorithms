#include "sort.h"

void swap_nodes(listint_t **h, listint_t **node_a, listint_t *node_b)
{
	(*node_a)->next = node_b->next;
	if (node_b->next != NULL)
		node_b->next->prev = (*node_a);
	node_b->prev = (*node_a)->prev;
	node_b->next = (*node_a);
	if ((*node_a)->prev != NULL)
		(*node_a)->prev->next = node_b;
	else
		*h = node_b;
	(*node_a)->prev = node_b;
	*node_a = node_b->prev;
}

/**
 * insertion_sort_list - Sorts the list in ascending order
 * using Insertion Sort Algorithm
 *
 * @list: List to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *insert, *iter, *temp;

	if (!list || !(*list) || !(*list)->next)
		return;

	for (iter = (*list)->next; iter != NULL; iter = temp)
	{
		temp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			swap_nodes(list, &insert, iter);
			print_list((const listint_t *)*list);
		}
	}
}

