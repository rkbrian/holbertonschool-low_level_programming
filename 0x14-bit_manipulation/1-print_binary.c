#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number input
 */

void print_binary(unsigned long int n)
{
	unsigned long int ld;/* last digit switch for the 1st binary digit */

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	ld = n & 1;
	_putchar(ld + '0');
}
