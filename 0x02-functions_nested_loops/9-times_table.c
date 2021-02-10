#include "holberton.h"

/**
 * times_table - 9x9
 */

void times_table(void)
{
	int i = '0', j = '0';

	while (i <= '9')
	{
		i++;
		while (j <= '9')
		{
			_putchar((i * j));
			j++;
			if (j == '9')
			continue;
			else
				_putchar(',');
			_putchar(' ');
		}
	}
}
