#include "holberton.h"

/**
 * _abs - returns 1 for int c lowercase check
 * @r: defined integer
 * Return: value 0
 */

int _abs(int r)
{
	if (r >= 0)
	_putchar(r);
	if (r <= 0)
	_putchar((r / (-1)));
	return (0);
}
