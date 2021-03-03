#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - fuction to return ptr to a 2d array
 * @width: width of 2d array
 * @height: height of 2d array
 *Return: the pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(int) * height * width + 1);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	if (a == NULL || *a == NULL)
	{
		return (NULL);
	}
	return (a);
	free(a);
}
