#include "holberton.h"

/**
 * reset_to_98 - pointer to int and points to 98
 * @n: integer input
 */

void reset_to_98(int *n)
{
	int var = 98;

	n = &var;
	_putchar(*n / 10 + '0');
	_putchar(*n % 10 + '0');
}
