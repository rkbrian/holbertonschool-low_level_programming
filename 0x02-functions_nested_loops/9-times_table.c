#include "holberton.h"

/**
 * times_table - 10 x 10 table starting with 0
 */

void times_table(void)
{
	int i, j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			_putchar(i * j);
			if (j == 9)
			{
				continue;
			}
			else if ((i * j) < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
