#include "holberton.h"

/**
 * print_sign - prints sign of numbers
 * @n: number for the check
 * Return: value -1, 0, or 1
 */

int print_sign(int n)
{
	if (n > '0')
		_putchar('+');
		return (1);

	if (n < '0')
		_putchar('-');
		return (-1);

	if (n == '0')
		_putchar('0');
	return (0);
}
