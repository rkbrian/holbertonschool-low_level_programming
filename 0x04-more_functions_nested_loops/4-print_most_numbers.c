#include "holberton.h"

/**
 * print_most_numbers - to print integer 0 - 9 with new lines, no 2 or 4
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
		if ((a == 2) || (a == 4))
		{
			continue;
		}
		else
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}
