#include "main.h"
#include "2-strlen.c"
#include <stdio.h>

/**
 * _puts - puts a string
 * @str: the string
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; i < _strlen(str) ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
