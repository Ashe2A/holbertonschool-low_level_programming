#include "lists.h"

/**
 * list_len - numbers of elements in a list
 * @h: singly linked list
 *
 * Return: size of the list
 */
size_t list_len(const list_t *h)
{
	if (h->next == NULL)
		return (1);
	return (list_len(h->next) + 1);
}
