#include "holberton.h"

/**
 * print_array - pointer to print array
 * @a: string
 * @n: number of elements in array
 */

void print_array(int *a, int n)
{
	int i, j = 0;

	while (a[j] != '\0')
	{
		j++;
	}
	if (j < n)
	{
		n = j;
	}
	for (i = 0 ; i < n ; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
