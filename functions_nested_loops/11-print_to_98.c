#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - print int to 98
 * @n: starting int
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i < 98)
			{
				printf("%c", ',');
				printf("%c", ' ');
			}
		}
	}
	else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d", i);
			if (i > 98)
			{
				printf("%c", ',');
				printf("%c", ' ');
			}
		}
	}
	else
	{
		printf("%d", n);
	}

	printf("%c", '\n');
}
