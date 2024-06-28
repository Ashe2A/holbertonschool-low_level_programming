#include "2-strlen.c"
#include "main.h"
#include <stdlib.h>

/**
 * _strcat - concatene strings
 * @dest: destination
 * @src: source
 *
 * Return: concatened src with dest
 */
char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0 ; i < _strlen(src) ; i++)
	{
		dest[i + _strlen(dest)] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
