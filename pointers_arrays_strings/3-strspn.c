#include "main.h"
#include "2-strlen.c"

/**
 * _strspn - finds a char in a string
 * @s: string to look in
 * @accept: prefix substring
 *
 * Return: number of bytes containing prefix chars
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; i < _strlen(s); i++)
	{
		for (j = 0; j < _strlen(accept); j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}

		if (j == _strlen(accept))
		{
			break;
		}
	}
}
