#include "holberton.h"

/**
 * reset_to_98 - pointer to int and points to 98
 * @n: integer pointer
 */

void reset_to_98(int *n)
{
	*n = 98;

	_putchar(*n + '0');
}
