#include "holberton.h"

/**
 * more_numbers - to print integer 0 - 14 for 10 times
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b <= 14 ; b++)
		{
			if (b < 10)
			{
			_putchar(b / 10 + '0');
			}
			_putchar(b % 10 + '0');
		}
	_putchar('\n');
	}
}
