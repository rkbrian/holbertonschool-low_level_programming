#include "holberton.h"

/**
 * print_diagsums - function to print diagnal sum of a 2d array
 * @a: source 2d array
 * @size: array size
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	long k = 0;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
		{
			if (i == j)
			{
				k = k + (a[j][i]);
			}
		}
		if (j < size - 1)
		{
			_putchar(', ');
		}
	}
	_putchar('\n');
}
