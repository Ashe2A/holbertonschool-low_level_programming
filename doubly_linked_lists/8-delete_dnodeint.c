#include "lists.h"
#include <stdlib.h>
#include "5-get_dnodeint.c"
#include "1-dlistint_len.c"

/**
 * delete_dnodeint_at_index - delete node from index
 * @head: address of the list head
 * @index: index of the node
 *
 * Return: 1 if sucess, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if ((head != NULL) && (index < dlistint_len(head[0])))
	{
		if (index == 0)
		{
			head[0] = get_dnodeint_at_index(head[0], 1);
			free((head[0])->prev);
			(head[0])->prev = NULL;
			return (1);
		}
		if (index == dlistint_len(head[0]))
		{
			free(get_dnodeint_at_index(head[0], index));
			(get_dnodeint_at_index(head[0], index - 1))->next = NULL;
			return (1);
		}
		(get_dnodeint_at_index(head[0], index - 1))->next = get_dnodeint_at_index(head[0], index + 1);
		free((get_dnodeint_at_index(head[0], index - 1))->next->prev);
		(get_dnodeint_at_index(head[0], index - 1))->next->prev = get_dnodeint_at_index(head[0], index - 1);
		return (1);
	}
	return (-1);
}
