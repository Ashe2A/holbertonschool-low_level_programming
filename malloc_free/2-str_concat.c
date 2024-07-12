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
	int i, j;

	if (s1 == NULL)
	{
		if (s2 == NULL)
			return ("");

		return (s1);

		if (s2 == NULL)
			return (s1);

		for (i = 0; s1[i] != '\0'; i++)
		{
		}

		for (j = i; s2[j - i] != '\0'; j++)
		{
		}
	}

	return (concatene_the_strings(i, j));
}

/**
 * str_concat - separate function to concatene strings
 * @size1: s1 size
 * @size2: s2 size
 *
 * Return: concatened strings
 */
char *concatene_the_strings(int size1, int size2)
{
	char *strcat = malloc(sizeof(char) * size2 + 1);
	int k;

	if (strcat == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < size1; k++)
	{
		strcat[k] = s1[k];
	}

	for (k = size1; k < size2; k++)
	{
		strcat[k] = s2[k];
	}

	return (strcat);
}
