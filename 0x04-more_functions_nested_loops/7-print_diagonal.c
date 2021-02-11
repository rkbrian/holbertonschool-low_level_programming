#include "holberton.h"

/**
 * print_diagonal - to print a diagonal line formed by backslashes
 * @n: parameter for line length
 */

void print_diagonal(int n)
{
	int m = 0, o;

	while (m < n)
	{
		o = 0;
		while (o <= m)
		{
			_putchar(' ');
			o++;
		}
		_putchar('\\');
		_putchar('\n');
		m++;
	}
	if(n <= 0)
	{
	_putchar('\n');
	}
}
