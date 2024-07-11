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
	int i = 0;
	int j;
	char *strcopy;

	while (str[i] != '\0')
	{
		i++;
    }

    if (str == NULL || i == 0)
	{
		return (NULL);
	}

	strcopy = malloc(sizeof(char) * i);

	for (j = 0; j < i; j++)
	{
		strcopy[i] = str[i];
	}

	return (strcopy);
}
