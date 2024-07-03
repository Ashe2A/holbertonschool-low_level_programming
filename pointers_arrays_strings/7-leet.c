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
		if (((c[i] >= 'a' && c[i] <= 'z') && c[i] == 'a') || i == 0)
		{
			c[i] = '4';
		}
		else if (c[i] == 'A')
		{
			c[i] = '4';
		}
		else if (c[i] == 'e')
		{
			c[i] = '3';
		}
		else if (c[i] == 'E')
		{
			c[i] = '3';
		}
		else if (c[i] == 'l')
		{
			c[i] = '7';
		}
		else if (c[i] == 'L')
		{
			c[i] = '7';
		}
		else if (c[i] == 'o')
		{
			c[i] = '7';
		}
		else if (c[i] == 'O')
		{
			c[i] = '7';
		}
		else if (c[i] == 't')
		{
			c[i] = '7';
		}
		else if (c[i] == 'T')
		{
			c[i] = '7';
		}
		else
		{
		}
	}

	return (c);
}
