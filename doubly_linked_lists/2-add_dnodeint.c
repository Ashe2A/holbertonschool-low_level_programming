#include "lists.h"
#include <string.h>
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
	list_t *new_head = malloc(sizeof(dlistint_t));

	if ((head != NULL) && (n != NULL) && (new_head != NULL))
	{
		new_head->n = n;
		new_head->prev = NULL;
		new_head->head[0];
		if (new_head == NULL)
		{
			free(new_head);
			return (new_head);
		}
	}
	free(new_head);
	return (NULL);
}
