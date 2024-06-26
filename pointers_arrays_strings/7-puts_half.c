#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - print half of string
 * @str: string to print
 */
void puts_half(char *str)
{
	int i;
	int half_size;

	if (_strlen(str) % 2 == 0)
	{
		half_size = _strlen(str) / 2;
	}
	else
	{
		half_size = (_strlen(str) - 1) / 2;
	}

	for (i = half_size ; i < _strlen(str) ; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
