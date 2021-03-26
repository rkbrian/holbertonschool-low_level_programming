#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number input
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 1, j, k = 1, subnum, num;

	if (n == 0)
		_putchar('0');
	else
	{
	while (k < _powertool(n))
	{
		k = k * 2;
		subnum = subnum << 1;
	}
	num = num + subnum;
	j = n - k;
	while (j)
	{
		subnum = 1;
		while (i < j)
		{
			subnum = subnum << 1;
			i = i * 2;
		}
		num = num + subnum;
		j = j - _powertool(j);
	}
	_putchar(num + '0');
	}
}

int _powertool(unsigned long int a)
{
	unsigned long int b = 1;

	while ((b * 2) < a)
	{
		b = b * 2;
	}
	return (b);
}
