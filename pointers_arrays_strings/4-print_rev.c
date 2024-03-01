#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - reverse a string
 * @s: the string
 */

void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) ; i > 0 ; i--)
	{
		_putchar(str[i - 1]);
	}
	_putchar('\n');
}
