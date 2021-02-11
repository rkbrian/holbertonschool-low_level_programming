#include "holberton.h"

/**
 * print_times_table - any size of table starting w 0
 * @n: input value of table size
 */

void print_times_table(int n)
{
	int i, j, k, nxt;

	if (n < 0 || n > 15)
		putchar('\n');
	else
	{
	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{
			k = i * j;
			nxt = i * (j + 1);
			printf("%d", k);

			if (j == n)
				continue;
			else if (nxt >= 10 && nxt < 100)
				printf(",  ");
			else if (nxt >= 100)
				printf(", ");
			else
				printf(",   ");
		}
		putchar('\n');
	}
	}
}
