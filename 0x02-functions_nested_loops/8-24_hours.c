#include "holberton.h"

/**
 * jack_bauer - returns 1 for int c lowercase check
 * @r: defined integer
 * Return: value 0
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0 ; i < 6 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			for (k = 0 ; k < 6 ; k++)
			{
				for (l = 0 ; l <= 9 ; l++)
				_putchar(i);
				_putchar(j);
				_putchar(k);
				_putchar(':');
				_putchar(l);
				_putchar('\n');
			}
		}
	}

}
