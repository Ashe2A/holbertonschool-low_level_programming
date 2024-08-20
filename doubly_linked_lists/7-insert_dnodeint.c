#include "lists.h"
#include <stdlib.h>
#include "5-get_dnodeint.c"
#include "1-dlistint_len.c"

/**
 * insert_dnodeint_at_index - add a node at index
 * @h: the list
 * @idx: the index of the new node
 * @n: data for the new node
 *
 * Return: the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if ((new_node != NULL) && (h != NULL))
	{
		new_node->n = n;
		if (idx >= 1)
			new_node->prev = get_dnodeint_at_index(h[0], idx - 1);
		else
			new_node->prev = NULL;
		new_node->next = get_dnodeint_at_index(h[0], idx);
		if (new_node->prev != NULL)
			new_node->prev->next = new_node;
		else
			h[0] = new_node;
		if (new_node->next != NULL)
			new_node->next->prev = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
