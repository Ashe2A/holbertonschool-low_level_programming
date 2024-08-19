#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - find node from index
 * @head: address of the list head
 * @index: index of the node
 *
 * Return: the node if found or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while ((head->next != NULL) && (i < index))
	{
		head = head->next;
		i++;
	}
	if (i < index)
		return (NULL);
	return (head);
}
