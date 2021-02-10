#include "holberton.h"

/**
 * times_table - 10 x 10 table starting with 0
 */

void times_table(void)
{
	int i, j, n, nxt;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			n = i * j;
			nxt = i * (j + 1);
			if (n < 10)
			{
				_putchar(n + '0');
			}
			else
			{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			}

			if (j == 9)
			{
				continue;
			}
			else if (nxt >= 10)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
