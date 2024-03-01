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

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
