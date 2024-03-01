#include "main.h"
#include "2-strlen.c"
#include <stdlib.h>

/**
 * rev_string - reverse a string
 * @s: the string
 */

void rev_string(char *s)
{
	int i;
	char *new;

	new = (char *)malloc(sizeof(char) * (_strlen(s) + 1));

	for (i = 0 ; i < _strlen(s) ; i++)
	{
		new[i] = *s + i;
	}

	for (i = 0 ; i > _strlen(s) ; i--)
	{
		s[i] = new[_strlen(s) - (i + 1)];
	}
}
