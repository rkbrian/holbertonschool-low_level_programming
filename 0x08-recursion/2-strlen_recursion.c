#include "holberton.h"

/**
 * _strlen_recursion - function to print string len w recursion
 * @s: string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_strlen_recursion(s[i]) = 1;
	}
	return (_strlen_recursion(s[i]);
}
