#include "2-strlen.c"
#include "main.h"

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
	char *cat = dest;

	dest += _strlen(dest);

	for (i = 0 ; i < _strlen(src) ; i++)
	{
		*(dest + i) = *(src + i);
	}

	*(dest + i) = '\0';

	return (cat);
}
