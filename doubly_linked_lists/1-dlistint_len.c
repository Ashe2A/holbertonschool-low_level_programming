#include "lists.h"

/**
 * dlistint_len - length of full doubly linked list
 * @h: head of the list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
