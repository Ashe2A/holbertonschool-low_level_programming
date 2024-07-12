#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size the allocated memory
 *
 * Return: filled array
 */
void *malloc_checked(unsigned int b)
{
	char *check;
	
	check = (malloc(b));

	if (check == NULL)
	{
		exit(98);
	}

	return (check);
}
