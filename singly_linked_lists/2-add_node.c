#include "lists.h"
#include <string.h>

/**
 * list_len - add node in list
 * @head: address of the list head
 * @str: str of the list head
 *
 * Return: newly added node address
 */
list_t *add_node(list_t **head, const char *str)
{
	if ((*head != NULL) && (str != NULL))
	{
        *(head->next->str) = strdup(str);
        *(head->next->len) = *(head->len);
		return (*(head->next));
	}
	return (NULL);
}
