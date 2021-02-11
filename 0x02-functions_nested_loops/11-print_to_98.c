#include <stdio.h>

/**
 * print_to_98 - print all natual numbers in order, to 98
 * @n: starting number
 */

void print_to_98(int n)
{
	printf("%d", n);
	while (n > 98 || n < 98)
	{
		if (n < 98)
		{
		n++;
		printf(", %d", n);
		}
		else if (n > 98)
		{
		n--;
		printf(", %d", n);
		}
	}
	putchar('\n');
}
