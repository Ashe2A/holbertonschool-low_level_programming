#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - frees matrix memory
 * @grid: the matrix
 * @height: matrix height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}