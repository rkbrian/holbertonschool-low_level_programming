#include "holberton.h"

/**
 * print_line - to print a line formed by underscores
 * @n: parameter for line length
 */

void print_line(int n)
{
	int m = 0;

	while (m < n)
	{
		_putchar('_');
		m++;
	}
	_putchar('\n');
}
