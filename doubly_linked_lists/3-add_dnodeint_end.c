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
	dlistint_t *old_tail = head[0];

	if (new_tail != NULL)
	{
		new_tail->n = n;
		new_tail->next = NULL;
		if (old_tail == NULL)
		{
			new_tail->prev = NULL;
			head[0] = new_tail;
			return (new_tail);
		}
		while (old_tail->next != NULL)
			old_tail = old_tail->next;
		new_tail->prev = old_tail;
		old_tail->next = new_tail;
		return (new_tail);
	}
	free(new_tail);
	return (NULL);
}
