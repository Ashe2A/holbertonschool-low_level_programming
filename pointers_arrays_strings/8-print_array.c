#include "main.h"
#include <stdio.h>

/**
 * print_array - multiple integers
 * @a: list of integers
 * @n: number of integers
 */

void print_array(int *a, int n)
{
	int i;

	if (*(a + 2) != '\0' && *a != '\0' && n != 1)
	{
		for (i = 0 ; i < n ; i++)
		{
			printf("%d", *(a + i));
			if (i != n - 1)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
}
