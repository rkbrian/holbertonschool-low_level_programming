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
	char **a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	*a = malloc(sizeof(int) * width * height + 1);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
		}
	}
	if (a == NULL || *a == NULL)
	{
		return (NULL);
	}
	return (a[i][j]);
}
