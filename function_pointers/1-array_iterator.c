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
    size_t i;

	if (action != NULL && array != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
