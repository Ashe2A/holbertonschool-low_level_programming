#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add node in list
 * @head: address of the list head
 * @str: str of the list head
 *
 * Return: newly added node address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if ((head != NULL) && (str != NULL) && (new_head != NULL))
	{
		new_head->str = strdup(str);
		if (new_head->str == NULL)
		{
			free(new_head);
			return (NULL);
		}
		new_head->len = strlen(new_head->str);
		new_head->next = head[0];
		head[0] = new_head;
		return (new_head);
	}
	free(new_head);
	return (NULL);
}
