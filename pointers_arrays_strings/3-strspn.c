#include "main.h"

/**
 * _strspn - finds a char in a string
 * @s: string to look in
 * @accept: prefix substring
 *
 * Return: number of bytes containing prefix chars
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}

		if (accept[j] == '\0')
		{
			break;
		}
	}

	return (i);
}
