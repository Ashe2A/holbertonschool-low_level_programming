#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - finds strings char in a string
 * @s: string to look in
 * @accept: substring to use
 *
 * Return: first char in common
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return (NULL);
}
