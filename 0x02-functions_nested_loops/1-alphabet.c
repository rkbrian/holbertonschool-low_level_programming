#include "holberton.h"

/**
 * print_alphabet - alphabet using _putchar only
 * Return: value 0
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
