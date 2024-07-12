#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copy a string
 * @str: array to copy
 *
 * Return: string copy
 */
char *_strdup(char *str)
{
	int i;
	char *strcopy;

	strcopy = malloc(sizeof(char) * strlen(str));

	if (strcopy == NULL || strcopy == 0)
	{
		return (strcopy);
	}

	for (i = 0; i < strlen(str); i++)
	{
		strcopy[i] = str[i];
	}

	return (strcopy);
}
