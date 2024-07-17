#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - iterates on an array
 * @array: array to seek
 * @size: size of the array
 * @cmp: compare function
 * 
 * Return: -1 if failure/unfound, else index of found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	size_t i, max;

	if (!(cmp == NULL || array == NULL || size == NULL) && size > 0)
	{
		if (size > sizeof(array))
		{
			max = sizeof(array);
		}
		else
		{
			max = size;
		}

		for (i = 0; i < max; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}

    return (-1);
}
