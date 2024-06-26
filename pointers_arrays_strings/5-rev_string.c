#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i;
	char tmp;

	for (i = 0 ; i < _strlen(s) / 2 ; i++)
	{
		tmp = s[i];
		s[i] = s[(_strlen(s) - 1) - i];
		s[(_strlen(s) - 1) - i] = tmp;
	}
}
