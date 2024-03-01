#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverse a string
 * @s: the string
 */

void rev_string(char *s)
{
	int i;
	char *new = s;

	new = &s;

	for (i = 0 ; i < _strlen(s) ; i++)
	{
		new[i] = s[_strlen(s) - i - 1];
	}
}
