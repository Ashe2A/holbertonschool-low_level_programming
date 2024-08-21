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

	if ((new_node != NULL) && (h != NULL) && (idx > dlistint_len(h[0])))
	{
		if (idx == 0)
			return (add_dnodeint(h, n));
		if (idx == dlistint_len(h[0]))
			return (add_dnodeint_end(h, n));
		new_node->n = n;
		new_node->next = get_dnodeint_at_index(h[0], idx);
		new_node->prev = get_dnodeint_at_index(h[0], idx - 1);
		if (new_node->prev != NULL)
			new_node->prev->next = new_node;
		if (new_node->next != NULL)
			new_node->next->prev = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
