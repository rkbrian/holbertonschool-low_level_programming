#include "holberton.h"

/**
 * jack_bauer - hr and min
 */

void jack_bauer(void)
{
	int i = 0, j, k, l;

	while (i <= '2')
	{
		j = '0';
		while (j <= '3')
		{
			k = '0';
			while (k <= '5')
			{
				l = '0';
				while (l <= '9')
				_putchar(i);
				_putchar(j);
				_putchar(':');
				_putchar(k);
				_putchar(l);
				l++;
			}
			k++;
		}
		j++;
	}
	i++;
}
