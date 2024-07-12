#include "main.h"
#include <stdlib.h>

/**
 * array_range - array of integers ranged
 * @min: minimal range
 * @max: maximal range
 *
 * Return: the arrary
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	arr = (int *)malloc(sizeof(int) * (max - min) + 1);

	if (arr == NULL || arr == 0)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		arr[i - min] = i;
	}

	return (arr);
}
