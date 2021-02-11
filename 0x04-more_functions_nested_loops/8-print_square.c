#include "holberton.h"

/**
 * print_square - to print a diagonal line formed by backslashes
 * @size: parameter for line length
 */

void print_square(int size)
{
	int i = 1, j;

	while (i <= size)
	{
		j = 1;
		while (j <= size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
