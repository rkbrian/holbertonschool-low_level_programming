#include "holberton.h"

/**
 *main - alphabet using putchar only
 *Return: value 0
 */

void print_alphabet(void)
{
	char lttr;

	for (lttr = 'a' ; lttr <= 'z' ; lttr++)
	{
		_putchar(lttr);

	}
	_putchar('\n');
}
