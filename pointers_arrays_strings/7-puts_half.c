#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - print half of string
 * @str: string to print
 */
void puts_half(char *str)
{
	int i;

	for (i = ((_strlen(str) - 1) / 2) + 1 ; i < _strlen(str) ; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
