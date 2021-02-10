#include "holberton.h"

/**
 * _islower - returns 1 for lowercase check
 * Return: value 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
