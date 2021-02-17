#include "holberton.h"

/**
 * swap_int - pointer to swap integers
 * @a: integer a
 * @b: integer b
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
