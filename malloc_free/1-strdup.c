#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - copy a string
 * @str: array to copy
 *
 * Return: string copy
 */
char *_strdup(char *str)
{
	int i, j;
	char *strcopy;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		/* Counter for strlen */
	}

	if (i == 0)
	{
		i++;
	}

	strcopy = (char *)malloc(sizeof(char) * (i - 1));

	if (strcopy == NULL || strcopy == 0)
	{
		return (strcopy);
	}

	for (j = 0; j < i; j++)
	{
		strcopy[j] = str[j];
	}

	return (strcopy);
}
