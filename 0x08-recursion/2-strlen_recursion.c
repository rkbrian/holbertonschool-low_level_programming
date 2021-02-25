#include "holberton.h"

/**
 * _strlen_recursion - function to print string len w recursion
 * @s: string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
