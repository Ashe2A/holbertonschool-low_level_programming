#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add new head node in list
 * @head: address of the list head
 * @n: head first int
 *
 * Return: newly added node address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head = malloc(sizeof(dlistint_t));
	dlistint_t *no_dupes = head[0];

	if (new_head != NULL)
	{
		while (no_dupes != NULL)
		{
			if (no_dupes->n == n)
				return (NULL);
			no_dupes = no_dupes->next;
		}
		new_head->n = n;
		new_head->prev = NULL;
		if (head[0] == NULL)
			new_head->next = NULL;
		else
		{
			new_head->next = head[0];
			(head[0])->prev = new_head;
		}
		head[0] = new_head;
		return (new_head);
	}
	free(new_head);
	return (NULL);
}
