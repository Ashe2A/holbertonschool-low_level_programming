#include "2-strlen.c"
#include "main.h"

/**
 * _atoi - string to int
 * @s: string to convert
 *
 * Return: int result
 */
int _atoi(char *s)
{
	int i, out;

	out = 0;

	for (i = 0 ; i <= _strlen(s) ; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			out = out * 10 + s[i] - '0';
		}
	}

	return (out);
}
