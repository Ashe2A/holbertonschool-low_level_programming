#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - iterates on an array
 * @array: array to seek
 * @size: size of the array
 * @cmp: compare function
 *
 * Return: -1 if failure/unfound, else index of found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!(cmp == NULL || array == NULL || size <= 0))
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}

	return (-1);
}
