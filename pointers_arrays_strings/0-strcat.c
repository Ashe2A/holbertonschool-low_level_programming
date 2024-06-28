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
	size_t s = _strlen(dest) + _strlen(src) + 1;
	char *cat = (char *) malloc(s * sizeof(char));

	for (i = 0 ; i < _strlen(dest) ; i++)
	{
		cat[i] = dest[i];
	}

	for (i = 0 ; i <= _strlen(src) ; i++)
	{
		cat[i + _strlen(dest)] = src[i];
	}

	return (cat);
}
