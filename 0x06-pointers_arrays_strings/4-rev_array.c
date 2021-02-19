#include "holberton.h"

/**
 * reverse_array - function to reverse an array
 * @a: array input
 * @n: num of elements in array
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = 0;
	int tmp;

	for (i = n - 1; j <= i ; j++, i--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
