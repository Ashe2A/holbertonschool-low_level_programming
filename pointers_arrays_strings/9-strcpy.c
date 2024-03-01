#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - copy string
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; i <= _strlen(src) ; i++)
	{
		*(dest + i) = *(src + i);
	}

	char *ret = &dest;

	return (ret);
}
