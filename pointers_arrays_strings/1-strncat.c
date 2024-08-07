#include "2-strlen.c"
#include "main.h"

/**
 * _strncat - concatene strings
 * @dest: destination
 * @src: source
 * @n: number of chars from src
 *
 * Return: concatened limited src with dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *cat = dest;

	dest += _strlen(dest);

	for (i = 0 ; (i < n) && (i < _strlen(src)) ; i++)
	{
		*(dest + i) = *(src + i);
	}

	*(dest + i) = '\0';

	return (cat);
}
