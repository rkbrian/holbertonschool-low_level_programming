#include "holberton.h"

/**
 * print_alphabet_x10 - alphabet print 10 times, using _putchar only
 * Return: value 0
 */

void print_alphabet_x10(void)
{
	char lttr;
	int i = 0;

	while (i < 10)
	{
		lttr = 'a';
		while (lttr <= 'z')
		{
		_putchar(lttr);
		lttr++;
		}
	_putchar('\n');
	i++;
	}
}
