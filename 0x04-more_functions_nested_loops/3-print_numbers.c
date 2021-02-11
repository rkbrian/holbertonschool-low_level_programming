#include "holberton.h"

/**
 * print_numbers - to print integer 0 - 9 with new lines
 */

void print_numbers(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
