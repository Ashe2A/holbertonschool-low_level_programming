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

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		/* Counter for size of str */
	}

	strcopy = malloc(sizeof(char) * i);

	if (strcopy == NULL || strcopy == "")
	{
		return (strcopy);
	}

	for (j = 0; j < i; j++)
	{
		strcopy[j] = str[j];
	}

	free(buffer);

	return (strcopy);
}
