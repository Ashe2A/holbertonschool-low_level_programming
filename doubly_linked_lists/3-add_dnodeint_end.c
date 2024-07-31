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
	dlistint_t *old_tail;

	while (no_dupes != NULL)
	{
		if (no_dupes->n == n)
			return (NULL);
		old_tail = no_dupes;
		no_dupes = no_dupes->next;
	}
	if (new_tail != NULL)
	{
		new_tail->n = n;
		new_tail->next = NULL;
		if (old_tail == NULL)
			new_tail->prev = NULL;
		else
		{
			new_tail->prev = old_tail;
			old_tail->next = new_tail;
		}
		old_tail = new_tail;
		return (new_tail);
	}
	free(new_tail);
	return (NULL);
}
