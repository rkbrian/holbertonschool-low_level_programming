#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number input
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}

/*	unsigned long int i = 1, j, k = 1, l, subnum, num = 0;
	if (n == 0)
		_putchar('0');
	else
	{
		l = _powertool(n);
		subnum = 1;
	while (k < l)
	{
		k = k << 1;
		subnum = subnum * 10;
	}
	num = num + subnum;
	j = n - k;
	while (j > 0)
	{
		subnum = 1;
		while (i * 2 < j)
		{
			subnum = subnum * 10;
			i = i << 1;
		}
		i = 1;
		num = num + subnum;
		j = j - _powertool(j);
	}
	_putchar(num + '0');
	}
}

unsigned long int _powertool(unsigned long int a)
{
	unsigned long int b = 1;

	while ((b * 2) < a)
	{
		b = b << 1;
	}
	return (b);
} */
