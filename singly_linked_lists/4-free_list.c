#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a singly linked list
 * @head: singly linked list
 */
void free_list(list_t *head)
{
	list_t *next_list;

	while (head != NULL)
	{
		next_list = head->next;
		free(head->str);
		free(head);
		head = next_list;
	}
}
