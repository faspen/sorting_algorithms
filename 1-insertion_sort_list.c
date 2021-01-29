#include "sort.h"

/**
* insertion_sort_list - sort numbers ascending
* @list: list to sort
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *left = NULL, *right = NULL;

	if (!list || !*list || !(*list)->next)
		return;
	left = *list;

	while (left)
	{
		right = left;
		while (right->prev != NULL && right->n < right->prev->n)
		{
			right->prev->next = right->next;
			if (right->next)
				right->next->prev = right->prev;
			right->next = right->prev;
			right->prev = right->prev->prev;
			right->next->prev = right;
			if (right->prev == NULL)
				*list = right;
			else
				right->prev->next = right;
			print_list(*list);
		}
		left = left->next;
	}
}
