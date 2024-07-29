#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add node in list at the end
 * @head: address of the list head
 * @str: str of the list head
 *
 * Return: newly added node address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_tail;
	list_t *tail;

	if ((head != NULL) && (str != NULL))
	{
		new_tail = malloc(sizeof(list_t));
		new_tail->str = strdup(str);
		new_tail->len = strlen(str);
		*tail = head[0];
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new_tail;
		new_tail->next = NULL;
		return (new_tail);
	}
	return (NULL);
}
