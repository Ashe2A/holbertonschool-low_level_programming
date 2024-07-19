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
	int i, max;

	if (!(cmp == NULL || array == NULL || size <= 0))
	{
		if (size > (int)sizeof(array))
		{
			max = (int)sizeof(array);
		}
		else
		{
			max = size;
		}

		for (i = 0; i < max; i++)
		{
			if (cmp(array[i]) == 1)
			{
				return (i);
			}
		}
	}

	return (-1);
}
