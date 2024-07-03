#include "main.h"

#include "2-strlen.c"

/**
 * _memcpy - copy n first elements
 * @dest: string to overwrite
 * @src: string to copy
 * @n: number of chars to fill
 *
 * Return: overwritten sting
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
