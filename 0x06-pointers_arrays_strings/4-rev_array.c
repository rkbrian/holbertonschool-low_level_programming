#include "holberton.h"

/**
 * reverse_array - function to reverse an array
 * @a: array input
 * @n: num of elements in array
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1 ; i > 0 ; i--)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
