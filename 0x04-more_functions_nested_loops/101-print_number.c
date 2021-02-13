#include "holberton.h"

/**
 * print_number - to print an integer
 * @n: input integer
 * x: index of 10s
 * d: digit to be printed
 * mul: multiple of 10s
 */

void print_number(int n)
{
	int x = 0, d, mul = 1; /* mul = 1 at x = 0 for single digit n */

	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}
	while (mul <= n) /* loop to find the mul closest to n */
	{
		mul = mul * 10;
		x++;
	}
	mul = mul / 10; /* now mul has the same digit count as n */
	while (mul != 0) /* loop for mul decrement to print d at each mul */
	{ /* d could be 0 anywhere in n, use mul as control var to play safe */
		d = n / mul;
		_putchar(d + '0');
		n = n - d * mul; /* behead n for next d */
		mul = mul / 10;
	}
}
