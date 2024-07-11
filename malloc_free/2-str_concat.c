#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - concatenes strings
 * @s1: first string
 * @s2: second string
 *
 * Return: concatened strings
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j, k;
	char *strcat;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		while (s1[i] != '\0')
		{
			i++;
		}
	}

	j = i;

	if (s2 != NULL)
	{
		while (s2[i] != '\0')
		{
			j++;
		}
	}

	strcat = malloc(sizeof(char) * i);

	if (strcat == NULL || strcat <= 0)
	{
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		strcat[k] = s1[k];
	}

	for (k = 0; k <= j; k++)
	{
		strcat[k + i] = s2[k];
	}

	return (strcat);
}
