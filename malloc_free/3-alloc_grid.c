#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - generate matrix
 * @width: matrix width
 * @height: matrix height
 *
 * Return: resulting matrix
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **matrix;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	matrix = (int **) malloc(sizeof(int) * (width * height) + 1);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(matrix + (i * width) + j) = 0;
		}
	}

	return (matrix);
}
