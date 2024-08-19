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
	dlistint_t *new_node = add_dnodeint(get_dnodeint_at_index(h, idx), n);
	new_node = add_dnodeint_end((get_dnodeint_at_index(h, idx))->prev, n);

	if (new_node == NULL)
	{
		free_dlistint(h);
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
