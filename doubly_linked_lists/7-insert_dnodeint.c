#include "lists.h"
#include <stdlib.h>

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
	next_node = get_dnodeint_at_index(h[0], idx);

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->prev = next_node->prev;
		new_node->next = next_node;
		if (next_node->prev != NULL)
			next_node->prev->next = new_node;
		if (next_node != NULL)
			next_node->prev = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
