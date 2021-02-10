#include "holberton.h"

/**
 * jack_bauer - hr and min
 */

void jack_bauer(void)
{
	int i = 0, j = 0, k = 0, l = 0;

	_putchar(i);
	_putchar(j);
	_putchar(':');
	_putchar(k);
	_putchar(l);
	while (l <= '9')
	{
		l++;
		while (k <= '5')
		{
			k++;
			while (k <= '3')
			{
				j++;
				while (i <= '2')
				i++;
			}
		}
	}
}
