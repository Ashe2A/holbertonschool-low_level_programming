#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverse a string
 * @s: the string
 */

void rev_string(char *s)
{
	int i;
	char new[_strlen(s)];

	for (i = 0 ; i < _strlen(s) ; i++)
	{
		new[i] = *s + i;
	}

	for (i = 0 ; i > _strlen(s) ; i--)
	{
		s[i] = new[_strlen(s) - (i + 1)];
	}
}
