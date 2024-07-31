#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add new tail node in list
 * @head: address of the list head
 * @n: head first int
 *
 * Return: newly added node address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_tail = malloc(sizeof(dlistint_t));
	dlistint_t *no_dupes = head[0];
	dlistint_t *old_tail = head[0];

	if (new_tail != NULL)
	{
		while (no_dupes != NULL)
		{
			if (no_dupes->n == n)
			{
				free(new_tail);
				return (NULL);
			}
			old_tail = no_dupes;
			no_dupes = no_dupes->next;
		}
		new_tail->n = n;
		new_tail->next = NULL;
		if(head[0] == NULL)
		{
			new_tail->prev = NULL;
			head[0] = new_tail;
			return (new_tail);
		}
		new_tail->prev = old_tail;
		old_tail->next = new_tail;
		return (new_tail);
	}
	free(new_tail);
	return (NULL);
}
