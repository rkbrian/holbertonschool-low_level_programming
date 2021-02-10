#include "holberton.h"

/**
 * jack_bauer - hr and min
 * Return: value 0
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0 ; i <= 2 ; i++)
	{
		for (j = 0 ; j <= 3 ; j++)
		{
			for (k = 0 ; k <= 5 ; k++)
			{
				for (l = 0 ; l <= 9 ; l++)
				_putchar(i);
				_putchar(j);
				_putchar(k);
				_putchar(':');
				_putchar(l);
				if (i == 2 && j == 3 && k == 5 && l == 9)
					continue;
				else
					_putchar('\n');
			}
		}
	}

}
