#include "main.h"
#include "2-strlen.c"
#include <stdio.h>
#include <stddef.h>

/**
 * _strchr - finds a char in a string
 * @s: string to look in
 * @c: char to look for
 *
 * Return: pointer to the first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < _strlen(c); i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	if (s[i] == '\0')
	{
		return (s + i);
	}

	return (NULL);
}