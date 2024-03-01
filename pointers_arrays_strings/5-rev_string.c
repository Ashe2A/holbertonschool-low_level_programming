#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverse a string
 * @s: the string
 */

void rev_string(char *s)
{
	int i;
	char *new;

	new = s;

	for (i = 0 ; i < _strlen(s) ; i++)
	{
		new[_strlen(s) - i - 1] = s[i];
	}
	s = new;	
}
