#include "holberton.h"

/**
 * print_last_digit - prints the last digit of number generated
 * @i: input
 * Return: 0
 */

int print_last_digit(int i)
{
	i = i % 10;
	if (i < 0)
	{
		i = i * (-1);
	}
	_putchar(i + '0');
	return (i);
}
