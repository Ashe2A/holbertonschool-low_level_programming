#include "lists.h"
#include <stdio.h>

/**
 * print_list - print a singly linked list
 * @h: singly linked list
 *
 * Return: size of the list
 */
size_t print_list(const list_t *h)
{
	if (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		if (h->next == NULL)
			return (1);
		return (print_list(h->next) + 1);
	}
	return (0);
}
