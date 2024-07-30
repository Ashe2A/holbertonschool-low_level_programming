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
	list_t *new_tail = malloc(sizeof(list_t));
	list_t *tail = head[0];

	if ((head != NULL) && (str != NULL) && (new_tail != NULL))
	{
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new_tail;
		new_tail->str = strdup(str);
		if (new_tail->str == NULL)
		{
			free(new_tail->str);
			free(new_tail);
			return (NULL);
		}
		new_tail->len = strlen(new_tail->str);
		return (new_tail);
	}
	free(new_tail);
	return (NULL);
}

