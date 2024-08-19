#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - summ of list data
 * @head: address of the list head
 *
 * Return: the sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	if (head != NULL)
	{
		res = head->n;
		while (head->next != NULL)
		{
			head = head->next;
			res += head->n;
		}
		return (res);
	}
	return (0);
}
