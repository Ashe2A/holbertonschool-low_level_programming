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
	char *strcat;

	if (s1 == NULL)
	{
		if (s2 == NULL)
		{
			*strcat = "";
			return (strcat);
		}

		*strcat = s2;
		return (strcat);
	}
	else if (s2 == NULL)
	{
		*strcat = s1;
		return (strcat);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = i; s2[j - i] != '\0'; j++)
	{
	}

	return (concatene_the_strings(s1, s2, i, j));
}

/**
 * concatene_the_strings - separate function to concatene strings
 * @string1: first string
 * @string2: second string
 * @i: s1 size
 * @j: s2 size
 *
 * Return: concatened strings
 */
char *concatene_the_strings(char *string1, char *string2, int size1, int size2)
{
	char *newcat;
	int k;

	strcat = (char *)malloc(sizeof(char) * size2 + 1);

	if (newcat == NULL || newcat == 0)
	{
		return (newcat);
	}

	for (k = 0; k < size1; k++)
	{
		newcat[k] = newcat[k];
	}

	for (k = size1; k < size2; k++)
	{
		newcat[k] = string2[k - size1];
	}

	return (newcat);
}
