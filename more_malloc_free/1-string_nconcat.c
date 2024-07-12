#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenes two strings
 * @b: size the allocated memory
 *
 * Return: filled array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int head_s2, i, j;
	char *strcat;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n < _strlen(s2))
	{
		head_s2 = n;
	}
	else
	{
		head_s2 = _strlen(s2);
	}

	strcat = (char *)malloc(sizeof(char) * (_strlen(s1) + head_s2) + 1);

	if (strcat == NULL || strcat == 0)
	{
		return (strcat);
	}

	for (i = 0; i < _strlen(s1); i++)
	{
		strcat[i] = s1[i];
	}

	for (j = 0; j < head_s2; j++)
	{
		strcat[j + i] = s2[j];
	}

	strcat[j + i] = '\0';

	return (strcat);
}

/**
 * _strlen - string length
 * @s: string (pointer of char)
 *
 * Return: string length
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		/* Counter */
	}

	return (i);
}