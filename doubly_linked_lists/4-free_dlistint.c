#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free a list
 * @head: address of the list head
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
	}
}
