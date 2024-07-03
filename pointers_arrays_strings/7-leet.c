#include "main.h"
#include "2-strlen.c"

/**
 * leet - 7urn in70 13375p34k
 * @c: string to process
 *
 * Return: 13375p0k3n string
 */
char *leet(char *c)
{
	int i, j;
	char *base = "AaEeLlOoTt";
	char *leet = "43107";


	for (i = 0; i < _strlen(c); i++)
	{
		for (j = 0 ; j < _strlen(c); j++)
		{
			if (c[i] == base[j])
			{
				c[i] = leet[(j - 1) / 2];
			}
		}
	}

	return (c);
}
