#include "holberton.h"

/**
 * _islower - returns 1 for lowercase check
 * Return: value 0
 */

int _islower(void)
{
	int i c;

	for (i = 0 ; i < 3 ; i++)
	{
		_putchar(_islower[i]);
	}
	_putchar('\n');
	return (0);
}
