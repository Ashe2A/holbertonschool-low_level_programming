#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - iterates on an array
 * @array: array to iterate
 * @size: size of the array
 * @action: pointer function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i, max;

	if (!(action == NULL || array == NULL || size <= 0))
	{
		if (size > sizeof(array) / sizeof(int))
		{
			max = sizeof(array) / sizeof(int);
		}
		else
		{
			max = size;
		}

		for (i = 0; i < max; i++)
		{
			action(array[i]);
		}
	}
}
