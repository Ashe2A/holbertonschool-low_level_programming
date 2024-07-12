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
	int i, j, k;
	char *strcat;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	strcat = (char *)malloc(sizeof(char) * (_strlen(s1) + _strlen(s2)) + 1);

	if (strcat == NULL || strcat == 0)
	{
		return (strcat);
	}

	for (i = 0; k < _strlen(s1); i++)
	{
		strcat[i] = s1[i];
	}

	for (j = 0; j < _strlen(s2); j++)
	{
		strcat[j + i] = s2[j];
	}
}

/**
 * _strlen - string length
 * @s: string (pointer of char)
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		/* Counter */
	}

	return (i);
}
