#include "2-strlen.c"
#include "main.h"

/**
 * _strcpy - copy string
 * @dest: destination (paste)
 * @src: source (copy)
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; i <= _strlen(src) ; i++)
	{
		*(dest + i) = src[i];
	}

	return (dest);
}
