#include "holberton.h"

/**
 * _puts_recursion - function to print string w recursion
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
