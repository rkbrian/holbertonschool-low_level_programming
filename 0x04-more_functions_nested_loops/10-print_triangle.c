#include "holberton.h"

/**
 * print_triangle - to print a triangle leaning away from margin
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1 ; i <= size ; i++)
	{
		for (j = size - i - 1 ; j >= 0 ; j--)
		{
			_putchar(' ');
		}
		for (k = 0 ; k < i ; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
