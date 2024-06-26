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

	for (i = 0 ; i < n - 1 ; i++)
	{
		printf("%d", a[i]);
		printf("%s", ", ");
	}

	printf("%d", a[n - 1]);
	printf("%c", '\n');
}
