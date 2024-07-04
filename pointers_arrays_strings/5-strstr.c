#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds a string in a string
 * @haystack: string to look in
 * @needle: string to find
 *
 * Return: where the needle was in the haystack :P
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}

	return (NULL);
}
