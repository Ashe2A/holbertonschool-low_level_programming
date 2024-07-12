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
	int i;
	int j;
	char *strcopy;

	if (str == NULL || str == 0)
	{
		return (str);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		/* Counter for size of str */
	}

	strcopy = malloc(sizeof(char) * (i - 1));

	if (strcopy == NULL)
	{
		return (strcopy);
	}

	for (j = 0; j < i; j++)
	{
		strcopy[j] = str[j];
	}

	return (strcopy);
}
