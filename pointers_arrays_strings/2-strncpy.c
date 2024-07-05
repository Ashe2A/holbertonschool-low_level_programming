#include "2-strlen.c"
#include "main.h"

/**
 * _strncpy - copy strings
 * @dest: destination
 * @src: source
 * @n: number of chars from src
 *
 * Return: concatened limited src with dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0 ; (i < n) && (i < _strlen(src)) ; i++)
	{
		dest[i] = src[i];
	}

	if (n < _strlen(src))
	{
		j = n;
	}
	else
	{
		j = _strlen(src);
	}

	for (i = j ; i < n ; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
