#include "main.h"
#include <stdlib.h>

/**
 * create_array - fill array with char
 * @size: size of array
 * @c: character to fill
 *
 * Return: filled array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = malloc(sizeof(char) * size);

	if (a == NULL || size <= 0)
	{
		return (NULL);
	}

	for (i = 0 ; i < size ; i++)
	{
		a[i] = c;
	}

	return (a);
}
