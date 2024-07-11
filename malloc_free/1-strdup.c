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

	for (i = 0 ; str[i] != '\0' ; i++)
	{
	}

	strcopy = malloc(sizeof(char) * (i + 1));

	if (str == NULL || str == 0 || strcopy == 0 || strcopy == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		*(strcopy + i) = str[i];
	}

	free(strcopy);

	return (strcopy);
}
