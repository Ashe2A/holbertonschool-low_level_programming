#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - print revers of string
 * @s: string to reverse
 */
void print_rev(char *s)
{
	int i;
	
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		_putchar(s[_strlen(s) - i - 1]);
	}

	_putchar('\n');
}
