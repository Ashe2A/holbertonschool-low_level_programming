#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - print a singly linked list
 * @h: singly linked list
 *
 * Return: size of the list
 */
size_t print_list(const list_t *h)
{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		return (print_list(h->next) + 1);
	}
	printf("[%d] %s\n", h->len, h->str);
	if (h->next == NULL)
		return (1);
	return (print_list(h->next) + 1);
}
