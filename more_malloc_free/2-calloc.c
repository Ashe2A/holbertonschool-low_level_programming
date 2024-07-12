#include "main.h"
#include <stdlib.h>

/**
 * _calloc - contiguous allocation
 * @nmemb: number of bytes
 * @size: size of pointer
 *
 * Return: 
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *cont;
	int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	cont = (int *)malloc(size * nmemb);

	if (cont == NULL || cont == 0)
	{
		return (NULL);
	}

	for (i = 0; cont[i] != '\0'; i++)
	{
		cont[i] = 0;
	}

	return (cont);
}