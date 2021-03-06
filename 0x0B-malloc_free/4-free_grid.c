#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - fuction to free malloc of ptr to a 2d array
 * @grid: 2d array
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	if (grid != NULL)
	{
		free(grid);
	}
}
