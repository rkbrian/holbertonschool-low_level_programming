#include "holberton.h"

/**
 * print_number - to print an integer
 * @n: the integer
 */

void print_number(int n)
{
	int x;
	int i;

	x = 1;
	if (n < 0)
	{
		_putchar('-');
		i = n * (-1);
	}
	else
	{
		i = n;
	}
	while (i >= 1)
	{
		x = x * 10;
		x = x + (i % 10);
		i = i / 10;
	}
	while (x >= 0)
	{
		_putchar((x % 10) + '0');
		x = x / 10;
		if (x < 1)
		{
			break;
		}
x = x / 10
	}
}
