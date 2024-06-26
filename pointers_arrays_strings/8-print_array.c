#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_array - print half of string
 * @a: array to print
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i;
	int m;

	if (n < 0)
	{
		m = -n;
	}
	else
	{
		m = n;
	}

	for (i = 0 ; i < m - 1 ; i++)
	{
		printf("%d", a[i]);
		printf("%s", ", ");
	}

	printf("%d", a[m - 1]);
	printf("%c", '\n');
}
