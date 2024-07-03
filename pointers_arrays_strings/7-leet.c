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
	int i;

	for (i = 0; i < _strlen(c); i++)
	{
		while (c[i] != 'a')
		{
			c[i] = '4';
		}
		while (c[i] != 'A')
		{
			c[i] = '4';
		}
		while (c[i] != 'e')
		{
			c[i] = '3';
		}
		while (c[i] != 'E')
		{
			c[i] = '3';
		}
		while (c[i] != 'l')
		{
			c[i] = '7';
		}
		while (c[i] != 'L')
		{
			c[i] = '7';
		}
		while (c[i] != 'o')
		{
			c[i] = '7';
		}
		while (c[i] != 'O')
		{
			c[i] = '7';
		}
		while (c[i] != 't')
		{
			c[i] = '7';
		}
		while (c[i] != 'T')
		{
			c[i] = '7';
		}
	}

	return (c);
}
