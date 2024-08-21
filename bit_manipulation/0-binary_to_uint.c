#include "main.h"
#include <stdio.h>

/**
 * _strlen - string length
 * @s: string (pointer of char)
 *
 * Return: string length
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * binary_to_uint - convert bin to dec
 * @b: binary number string
 *
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int binlen;
	int i;
	int dec = 0;
	int bit = 1;

	if (b != NULL)
	{
		binlen = _strlen(b);
		for (i = binlen - 1; i >= 0; i--)
		{
			if ((b[i] != '0') && (b[i] != '1'))
				return (0);
			dec += (b[i] - '0') * bit;
			bit *= 2;
		}
		return (dec);
	}
	return (0);
}
