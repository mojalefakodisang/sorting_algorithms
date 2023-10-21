#include "sort.h"

/**
 * swap - swaps two node in a list
 *
 * @prev: previous node
 * @temp: current node
 *
 * Return: returns 0 if previous of current node is true else 1 (success)
 */
int swap(listint_t *prev, listint_t *temp)
{
	if (temp->next)
		temp->next->prev = prev;
	prev->next = temp->next;
	temp->prev = prev->prev;
	temp->next = prev;
	prev->prev = temp;

	if (temp->prev)
	{
		temp->prev->next = temp;
		return (0);
	}
	else
		return (1);
}

/**
 * insertion_sort_list - algorithmically sorts a doubly linked list
 *
 * @list: list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *temp, *prev;

	if (list == NULL)
		return;

	curr = (*list)->next;

	while (curr != NULL)
	{
		prev = curr->prev;
		temp = curr;
		while (prev != NULL && prev->n > temp->n)
		{
			if (swap(prev, temp) == 1)
				*list = temp;
			prev = temp->prev;
			print_list(*list);
		}
		curr = curr->next;
	}
}
