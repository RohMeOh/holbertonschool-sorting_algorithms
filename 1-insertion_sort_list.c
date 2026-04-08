#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list using insertion sort
 * @list: pointer to head of list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current)
	{
		temp = current;

		/* Move current node left while needed */
		while (temp->prev && temp->n < temp->prev->n)
		{
			listint_t *prev = temp->prev;

			/* Adjust pointers */
			prev->next = temp->next;
			if (temp->next)
				temp->next->prev = prev;

			temp->prev = prev->prev;
			temp->next = prev;

			if (prev->prev)
				prev->prev->next = temp;
			else
				*list = temp;

			prev->prev = temp;

			/* Print after swap */
			print_list(*list);
		}

		current = current->next;
	}
}
