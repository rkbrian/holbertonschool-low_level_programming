#include "holberton.h"

/**
 * print_diagonal - to print a diagonal line formed by backslashes
 * @n: parameter for line length
 */

void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n)
	{
		j = 0;
		while (j <= i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
