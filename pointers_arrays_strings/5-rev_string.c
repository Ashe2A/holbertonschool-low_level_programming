#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i;
	char *t = *s;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		t[i] = s[_strlen(s) - 1 - i];
	}

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		s[i] = t[i];
	}
}
