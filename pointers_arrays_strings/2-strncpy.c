#include "2-strlen.c"
#include "main.h"
#include <stdlib.h>

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
	int i;

	for (i = 0 ; (i < n) && (i < _strlen(src)) ; i++)
	{
		dest[i] = src[i];
	}

	for (i = _strlen(src) ; i <= _strlen(dest) ; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
