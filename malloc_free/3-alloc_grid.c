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

	matrix = (int **)malloc(sizeof(int *) * height + 1);

	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *)malloc(sizeof(int) * width + 1);

		if (matrix[i] == NULL)
		{
			free(matrix);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}

	return (matrix);
}
