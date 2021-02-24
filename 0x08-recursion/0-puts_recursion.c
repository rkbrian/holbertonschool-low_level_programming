#include "holberton.h"

/**
 * _puts_recursion - function to print string w recursion
 * @s: string
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		return;
	}
	_putchar(s[i]);
	i++;
	_puts_recursion(s);
}
