#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * list_len - add node in list
 * @head: address of the list head
 * @str: str of the list head
 *
 * Return: newly added node address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	if ((head != NULL) && (str != NULL))
	{
		new_head = malloc(sizeof(list_t));
		new_head->str = strdup(str);
		new_head->len = strlen(str);
		new_head->next = *head;
		*head = new_head;
		return (*head);
	}
	return (NULL);
}
