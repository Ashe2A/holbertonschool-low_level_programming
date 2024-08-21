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
	dlistint_t *unworthy_node = get_dnodeint_at_index(head[0], index);

	if ((head != NULL) && (head[0] != NULL) && (unworthy_node != NULL)
	&& (index < dlistint_len(head[0])))
	{
		if (unworthy_node->prev != NULL)
			unworthy_node->prev->next = unworthy_node->next;
		else
			head[0] = unworthy_node->next;
		if (unworthy_node->next != NULL)
			unworthy_node->next->prev = unworthy_node->prev;
		free(unworthy_node);
		return (1);
	}
	return (-1);
}
