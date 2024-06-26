#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - checked string
 * @str: string to reverse
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; i < _strlen(str) ; i++)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
