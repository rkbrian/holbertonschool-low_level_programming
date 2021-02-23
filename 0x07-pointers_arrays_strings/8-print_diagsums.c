#include <stdio.h>

/**
 * print_diagsums - function to print diagnal sum of a 2d array
 * @a: source 2d array
 * @size: array size
 */

void print_diagsums(int *a, int size)
{
	int i;
	long k = 0, l = 0;

	for (i = 0; i < size; i++)
	{
		k = k + a[((size + 1) * i)];
		l = l + a[((size - 1) * (i + 1))];
	}
	printf("%d, %d\n", k, l);
}
