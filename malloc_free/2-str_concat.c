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
	int i = 0;
	int j = 0;

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

	return (concatene_the_strings(s1, s2, i, j));
}

/**
 * concatene_the_strings - separate function to concatene strings
 * @size1: s1 size
 * @size2: s2 size
 *
 * Return: concatened strings
 */
char *concatene_the_strings(char *string1, char *string2, int size1, int size2)
{
	char *strcat;
	int k;

	strcat = (char *)malloc(sizeof(char) * size2 + 1);

	if (strcat == NULL || strcat == 0)
	{
		return (strcat);
	}

	for (k = 0; k < size1; k++)
	{
		strcat[k] = string1[k];
	}

	for (k = size1; k < size2; k++)
	{
		strcat[k] = string2[k - size1];
	}

	return (strcat);
}
