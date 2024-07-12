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
	int i, j, k;
	int **matrix;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	matrix = (int **)malloc(sizeof(int *) * height);

	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *)malloc(sizeof(int) * width);

		if (matrix[i] == NULL)
		{
			for (k = 0; k <= i; k++)
			{
				free(matrix[i]);
			}

			free(matrix);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}

	return (matrix);
}
