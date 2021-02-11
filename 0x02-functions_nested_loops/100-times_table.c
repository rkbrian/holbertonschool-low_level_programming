#include "holberton.h"

/**
 * print_times_table - any size of table starting w 0
 */

void print_times_table(int n)
{
	int i, j, k, nxt;

	if (n < 0 || n > 15)
	{
		continue;
	}
	else
	{
	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{
			k = i * j;
			nxt = i * (j + 1);
			if (k < 10)
			{
				_putchar(k + '0');
			}
			else if (k >= 10 && k < 100)
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else
			{
				_putchar(k / 100 + '0');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			if (j == n)
			{
				continue;
			}
			else if (nxt >= 10 && nxt < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (nxt >= 100)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	}
}
