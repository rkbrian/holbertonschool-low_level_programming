#include "holberton.h"

/**
 * swap_int - pointer to swap integers
 * @a: integer a
 * @b: integer b
 */

void swap_int(int *a, int *b)
{
	int i = a, j = b;

	a = &j;
	b = &i;
	_putchar(*a / 10 + '0');
	_putchar(*b / 10 + '0');
}
