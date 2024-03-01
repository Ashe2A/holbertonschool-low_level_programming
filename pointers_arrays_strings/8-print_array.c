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

	if (*(a + 2) == '\0' && *a == '\0' && n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			if (i != n - 1)
			{
				printf("%d, ", *(a + i));
			}
			else
			{
				printf("%d\n", *(a + i));
			}
		}
	}
}
