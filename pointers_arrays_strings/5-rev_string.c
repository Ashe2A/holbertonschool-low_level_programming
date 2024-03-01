#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string
 */

void rev_string(char *s)
{
	int i;
	char new;

	new = s;
	for (i = _strlen(s) ; i > 0 ; i--)
	{
		*s = new[i - 1];
	}
	_putchar('\n');
}
